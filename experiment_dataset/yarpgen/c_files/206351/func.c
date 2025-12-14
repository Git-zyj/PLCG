/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206351
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
    var_10 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) (-(1290464867)))) == (var_2))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) (signed char)-96)) >= (((/* implicit */int) (unsigned char)10))))), ((-(((/* implicit */int) arr_1 [i_0 + 1])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned short i_4 = 4; i_4 < 16; i_4 += 4) 
                    {
                        {
                            arr_11 [i_2] = ((/* implicit */int) -2466572081739696718LL);
                            var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-50))));
                            var_13 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_0)) & (((int) arr_0 [i_4 + 1])))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (short)13054))));
            var_15 = ((/* implicit */int) var_3);
            arr_12 [i_0] [i_1] [6] = ((/* implicit */signed char) var_0);
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)));
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_9)) ? (((var_2) + (-4327442458609971577LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_18 [i_0] = ((/* implicit */_Bool) arr_0 [i_5]);
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(arr_20 [i_7] [i_6] [i_5]))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_7))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_5] [(unsigned short)9]))));
                        var_21 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)32746)) - (32723)))))) - (0ULL));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), ((~(var_6)))));
                        arr_29 [i_0] [i_5] [(unsigned short)4] [i_9] [i_9] = arr_6 [i_6] [i_7] [i_9];
                    }
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_23 = ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10]))) & (((((/* implicit */_Bool) 27ULL)) ? (var_2) : (-2466572081739696715LL))));
                        var_24 = ((/* implicit */short) (-(var_6)));
                    }
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0 + 1]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_26 = (_Bool)1;
                        var_27 = ((/* implicit */signed char) (unsigned char)10);
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_33 [i_11] [i_6] [i_6] [i_6] [i_0])) - (104)))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned char)11))))) : (((/* implicit */int) var_3)))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2466572081739696718LL)) ? ((((_Bool)1) ? (((/* implicit */int) (short)23277)) : (2146288119))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                    arr_35 [(unsigned char)2] [(unsigned short)2] [i_0 + 1] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_34 [i_0] [i_5] [i_5] [i_0] [i_0])))));
                }
                for (int i_12 = 2; i_12 < 19; i_12 += 4) 
                {
                    arr_38 [i_12] [i_6] [i_6] [i_5] [5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((((/* implicit */int) arr_23 [i_0 + 1] [i_5] [i_5] [i_0] [i_0])) & (arr_26 [(unsigned char)14] [i_6])))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])), (842487736U)))) ? (((/* implicit */int) max(((unsigned char)133), ((unsigned char)2)))) : (min((var_1), (((/* implicit */int) var_0)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) min(((unsigned char)255), ((unsigned char)244)))), (((unsigned short) arr_24 [i_6] [i_6] [i_6] [i_6] [i_6])))))));
                    arr_39 [(short)8] [(short)8] [i_6] [i_12 + 1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) -623802016)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)63)))));
                }
                for (short i_13 = 1; i_13 < 17; i_13 += 2) 
                {
                    arr_44 [i_0 + 1] = ((/* implicit */_Bool) var_1);
                    var_30 = ((/* implicit */short) ((((/* implicit */int) (short)26160)) - (((/* implicit */int) ((((/* implicit */int) var_3)) != (var_5))))));
                    arr_45 [i_13] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_41 [i_0] [i_13 + 1] [i_6] [i_0 + 1])) - (((/* implicit */int) arr_41 [i_0] [i_13 + 1] [i_6] [i_0 + 1])))), (((/* implicit */int) max((arr_41 [i_0] [i_13 + 3] [i_0] [i_0 + 1]), (arr_41 [i_0 + 1] [i_13 - 1] [9U] [i_0 + 1]))))));
                }
                arr_46 [i_0] [(unsigned short)15] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)154)) & (((((/* implicit */int) arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_5] [i_0 + 1])) * (((/* implicit */int) arr_33 [i_0] [i_0] [i_0 + 1] [i_5] [i_0 + 1]))))));
            }
        }
    }
}
