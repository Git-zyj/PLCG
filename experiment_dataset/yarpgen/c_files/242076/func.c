/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242076
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            var_14 ^= ((/* implicit */long long int) (~((~(var_1)))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) 2712625713U))));
        }
        var_16 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((int) (~(((/* implicit */int) (_Bool)1))))))));
        arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) var_2));
    }
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
    {
        arr_10 [i_2 - 2] = ((/* implicit */long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)-32759))))) * (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 2193185181339840637ULL))) >= (arr_13 [i_3]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
                        var_20 |= ((/* implicit */unsigned short) (~((~(43967536U)))));
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned char) 0U);
                        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */int) (unsigned short)18)) : (((((/* implicit */int) (unsigned short)27856)) - (2147483639)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned short)4] [i_3 - 1] [10ULL] [i_5])) ? (arr_11 [i_2] [(short)0]) : (((/* implicit */long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65506))) : (16416882052131714124ULL))))));
                        var_24 = ((/* implicit */long long int) ((var_11) << (((((/* implicit */int) ((signed char) (short)9443))) + (29)))));
                        var_25 = ((/* implicit */long long int) ((unsigned long long int) var_3));
                    }
                    arr_30 [i_2] [(short)7] [i_4] [3LL] = ((/* implicit */short) (+(((((/* implicit */int) arr_28 [i_2 - 3] [11LL] [i_3 - 3] [i_4] [(_Bool)1])) ^ (((/* implicit */int) (_Bool)1))))));
                    var_26 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_11)) >= (arr_27 [i_2 - 2] [i_2 - 2] [13] [i_4] [3LL]))) ? (((/* implicit */int) arr_23 [i_3 + 1] [i_5])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_3 - 1]))));
                    arr_31 [(short)11] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((arr_22 [i_2 - 3] [i_3 - 2] [i_3 - 2] [i_3 - 2]) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [14U])))));
                }
                for (unsigned char i_9 = 3; i_9 < 15; i_9 += 1) 
                {
                    arr_34 [i_2] [i_2] [i_2] [6ULL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3 - 3] [i_4])) >> (((((/* implicit */int) var_13)) + (26852)))));
                    arr_35 [i_2] [i_9] [i_3 - 3] [i_9] [i_9] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-88))));
                    arr_36 [i_9] = ((/* implicit */short) ((((3645544854U) >> (((1368899554) - (1368899547))))) % (3623506496U)));
                    arr_37 [16U] [i_3] [9U] [i_3 + 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_4]))) ^ (((((/* implicit */_Bool) arr_29 [i_9 - 2] [6LL] [i_9 - 3] [i_2] [i_9] [i_2])) ? (((/* implicit */unsigned long long int) var_2)) : (2193185181339840646ULL)))));
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2193185181339840637ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))));
                            var_28 = ((/* implicit */unsigned int) arr_9 [i_3 + 1]);
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3 - 3] [i_3 - 2])) + (((/* implicit */int) var_12))));
                        }
                    } 
                } 
            }
        }
        arr_42 [i_2 - 3] = ((/* implicit */int) arr_32 [i_2] [i_2 - 1] [i_2 - 2] [i_2]);
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_2] [(signed char)4] [(_Bool)1] [i_2]))))))))));
    }
    var_31 = ((/* implicit */unsigned int) var_10);
    var_32 = ((/* implicit */unsigned int) var_1);
}
