/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23736
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (13017660874181242351ULL) : (((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
            var_12 += ((/* implicit */signed char) (unsigned char)188);
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)3))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) var_2));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))));
            arr_9 [(signed char)8] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 - 3])) ? (var_0) : (arr_6 [i_0 + 2] [i_0 + 2])));
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
        {
            var_14 = 4704283799886400541ULL;
            /* LoopSeq 4 */
            for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                arr_16 [i_3] = ((/* implicit */_Bool) 14622274612371189959ULL);
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_4))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_4 + 1] [i_4])) : (-1)));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((var_4) / (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) var_0)))))))));
                arr_17 [i_0] [i_0] [i_3] [8] = ((/* implicit */int) ((11088374187672681823ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-11163)) : (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)157))))));
                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)163)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)124))));
            }
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_24 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */int) arr_2 [7] [7] [7]);
                arr_25 [i_6] [i_3] = ((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1]);
            }
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -418622461)) * (11538229878364364392ULL)));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_20 [i_0 + 3] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                arr_28 [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((_Bool) var_3))) : (((((/* implicit */int) (unsigned char)6)) / (((/* implicit */int) (unsigned char)62))))));
                arr_29 [i_7] [i_3] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (_Bool)0))))) == (((/* implicit */int) (short)0))));
            }
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 2] [6ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 2] [i_0]))) : (4027107298U)));
            arr_32 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_11 [(_Bool)0] [(_Bool)0] [(_Bool)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (unsigned char)2)))));
        }
    }
    var_23 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(1572689990)))) ? (((((/* implicit */_Bool) -418622461)) ? (((/* implicit */int) (unsigned short)65412)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 22; i_9 += 2) 
    {
        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            {
                arr_37 [i_9] [(_Bool)1] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_1))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (13017660874181242351ULL)))));
                var_24 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U)))) + (var_5)))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9] [i_10])) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_9] [i_10])))))))) ? (((((_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) (!(var_9))))));
            }
        } 
    } 
}
