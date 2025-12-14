/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220861
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
    var_10 = ((/* implicit */unsigned short) ((((int) min((2147483647), (var_6)))) > (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23204)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_4), ((_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)42332))))))));
    var_11 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)4902)) ^ (((/* implicit */int) (short)-1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (-290431979)));
        var_13 += ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) != (arr_1 [i_0])));
        var_14 = ((/* implicit */_Bool) var_2);
        arr_4 [i_0] [i_0] = (~(((/* implicit */int) arr_3 [i_0])));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_7 [i_1] = (~(((/* implicit */int) var_4)));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_2 - 2] [(short)13] = ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_2 + 1] [i_2] [i_4] [i_4 - 1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_1] [i_1])) / (((/* implicit */int) var_0)))) % (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_8 [i_1] [i_1]))))));
                        var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (_Bool)1))));
                            arr_21 [(unsigned short)21] [i_4] [i_4] [i_4] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_9 [i_1]);
                            var_17 = arr_6 [i_1] [i_2];
                            var_18 = ((/* implicit */_Bool) arr_9 [11]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) max((var_19), (arr_10 [i_6] [i_4] [12] [i_1])));
                            arr_24 [i_1] [16] [i_1] [(_Bool)1] [i_4] = (i_4 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */int) arr_18 [i_1] [(_Bool)1] [i_4] [i_1] [i_3] [i_3])) + (2147483647))) << (((((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_4] [i_3] [i_4] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) - (3615)))))) : (((/* implicit */short) ((((((((/* implicit */int) arr_18 [i_1] [(_Bool)1] [i_4] [i_1] [i_3] [i_3])) - (2147483647))) + (2147483647))) << (((((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_4] [i_3] [i_4] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) - (3615))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (short)16383)) != (((/* implicit */int) arr_20 [i_1] [i_2 + 3] [i_3] [i_3] [i_4] [i_4 - 1] [i_4 - 1])))))));
                            arr_25 [(_Bool)1] [i_4] [i_3] [6] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)4095))));
                        }
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_21 = arr_26 [i_7] [(short)20] [i_3] [(_Bool)1] [i_1];
                            var_22 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20363)) ? (((/* implicit */int) (unsigned short)40581)) : (((/* implicit */int) (short)19331))))) ? (((((/* implicit */_Bool) -882391511)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_26 [i_1] [(_Bool)1] [i_3] [i_4] [(unsigned short)13])) : (((/* implicit */int) var_9)))));
                            var_23 &= ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)65534)))) | (((/* implicit */int) arr_23 [i_1] [i_2] [i_3] [i_4 - 1]))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned short) ((var_6) ^ (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (short i_8 = 1; i_8 < 24; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */int) (short)32767)) * (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)23203))))));
                            arr_32 [i_4] [(short)17] [i_4] [i_3] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_5)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1524152448)))))));
                        }
                    }
                    for (short i_9 = 1; i_9 < 23; i_9 += 4) 
                    {
                        arr_37 [i_1] [i_1] [i_1] [i_9] [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned short)42327)) ? (((/* implicit */int) arr_15 [i_9 - 1] [(_Bool)1] [i_2 - 2])) : (-1317667521));
                        arr_38 [i_9] = ((/* implicit */short) 1281672283);
                        var_26 = ((/* implicit */short) arr_29 [i_1] [1] [i_9] [i_3] [i_3] [i_9 - 1] [i_9 - 1]);
                    }
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        var_27 *= ((/* implicit */unsigned short) var_4);
        arr_42 [i_10] = var_4;
    }
}
