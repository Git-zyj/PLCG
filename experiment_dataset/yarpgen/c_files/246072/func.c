/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246072
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
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) * (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2])))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 4; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        var_11 -= ((unsigned long long int) arr_2 [i_0] [i_0 - 1] [i_2 - 2]);
                        var_12 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)74));
                        var_13 = ((/* implicit */unsigned int) ((18446744073709551615ULL) * (6400456733429939559ULL)));
                    }
                    for (short i_4 = 4; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */long long int) var_0);
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4] [i_4 - 3] [i_0 + 2])) || (((/* implicit */_Bool) arr_6 [i_4 - 4] [i_0 + 1]))));
                        arr_12 [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4 - 4] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_0]))) : (8ULL)))) || (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4 - 2] [i_4 - 4]))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        arr_16 [i_5] [i_1] [i_2] [i_5] [i_0 + 1] [i_5] = ((/* implicit */unsigned short) var_9);
                        arr_17 [i_5] = ((/* implicit */_Bool) ((arr_5 [i_2 + 1] [i_2] [i_2 + 1] [5U]) ? (7053257236192589996LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                        var_16 = ((/* implicit */int) (!(((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) arr_15 [i_5] [i_1]))))));
                        arr_18 [i_5] [i_5 - 3] [i_2] [i_1] [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_5 + 1] [i_1] [i_0 - 4] [i_2 + 1]))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)30229)) && (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) (signed char)64)) : (arr_22 [i_0] [i_2] [i_2 - 2] [i_2])))) : (1ULL)));
                        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19332)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : ((-(arr_1 [i_1] [i_1])))));
                    }
                    arr_23 [(signed char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15023054416962492179ULL)) ? (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) var_6)) : (-1035094785))) : (((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */unsigned char) (!(arr_10 [i_0 + 3] [i_0])));
        var_20 = ((/* implicit */unsigned long long int) 2146915906);
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27286))) : (15023054416962492179ULL)))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_7 [i_0 - 4] [i_0] [i_0] [i_0]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_7 - 1])))))));
        arr_27 [i_7] = ((/* implicit */short) (-(arr_26 [i_7])));
    }
    for (int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
        {
            for (unsigned char i_10 = 4; i_10 < 11; i_10 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_8] [i_8] [i_8] [i_8]));
                    arr_35 [i_8] [i_8] [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25930))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_9 - 1] [i_10] [i_10 - 1])), (min((((/* implicit */unsigned int) (unsigned char)40)), (arr_14 [i_10] [i_8] [i_10] [i_9] [i_8])))))) : (max((((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_10])), (1ULL)))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_29 [i_8]))))))))));
        arr_36 [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8])) > (((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8]))))), (((unsigned int) (unsigned char)216))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) * (((((/* implicit */_Bool) (short)32767)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned long long int) ((unsigned short) (short)-25433))), (((var_8) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))))))))))));
    }
    var_26 = ((/* implicit */int) max((((/* implicit */unsigned int) ((short) (~(2282303425U))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (((unsigned int) (short)27272))))));
}
