/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205151
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
    var_15 = var_4;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */signed char) (~(((max((((/* implicit */int) var_11)), (var_1))) * (var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_11);
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-6))));
        var_18 = ((/* implicit */signed char) (~(arr_2 [(_Bool)1])));
        var_19 = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65021))) : (0ULL))), (((/* implicit */unsigned long long int) ((long long int) var_2)))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            {
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) : (4611729624591377196ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_5 [i_1])))))));
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [i_1])), ((~(((((/* implicit */_Bool) 467212954U)) ? (((/* implicit */int) (unsigned short)52142)) : (((/* implicit */int) var_2))))))));
                /* LoopSeq 3 */
                for (int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_3 + 2])), (var_8)))), (max((((/* implicit */long long int) arr_8 [i_3 - 1] [i_3])), (arr_4 [i_3 + 2])))));
                    arr_12 [i_1] = ((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1]);
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-71))));
                    var_22 = ((((/* implicit */_Bool) max((arr_6 [i_3] [(short)19] [(short)19]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (var_6))))))) ? (((/* implicit */int) arr_10 [i_1])) : ((~(((((/* implicit */_Bool) arr_8 [i_3] [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (var_1))))));
                }
                for (long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_4])) ? (min((((/* implicit */unsigned long long int) var_14)), (((unsigned long long int) (signed char)-16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */int) (!(arr_10 [i_2])))) : (((int) (_Bool)1)))))));
                    arr_17 [i_1] [i_2] [i_1] = ((unsigned short) var_4);
                    var_25 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (unsigned char)255)))));
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) arr_19 [i_1] [i_5]);
                    var_27 = ((/* implicit */int) (+(0ULL)));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((arr_4 [i_2]) * (((/* implicit */long long int) min((var_4), (((/* implicit */int) arr_20 [i_1] [i_2] [i_5] [i_5]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) 2147483647))))) ? (((((/* implicit */_Bool) -1203864074)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13394))))) : (((/* implicit */unsigned int) 0)))))));
                    var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((4425908371849668233ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_5])))))))) ? (((((/* implicit */_Bool) arr_16 [i_1] [0LL] [16ULL] [i_1])) ? (var_0) : (17475167473286475485ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                }
                arr_21 [i_1] [i_1] = ((/* implicit */int) arr_20 [i_2] [i_2] [i_1] [i_1]);
            }
        } 
    } 
}
