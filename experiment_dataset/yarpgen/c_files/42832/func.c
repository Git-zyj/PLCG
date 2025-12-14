/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42832
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)25)))))));
                    arr_9 [i_0] [i_1] [i_0] = arr_5 [i_0] [i_0] [(unsigned char)0];
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) var_11);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_13);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (arr_2 [i_1])))) ? ((+(var_14))) : (((long long int) (unsigned char)88))))) ? (((/* implicit */int) arr_13 [(unsigned char)4] [i_1] [i_1] [i_1] [(unsigned char)4])) : (((/* implicit */int) var_16))));
                            var_22 = ((/* implicit */long long int) (short)7864);
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [9LL] = min((((short) arr_6 [i_2 - 2] [i_1] [i_2 - 1])), (((/* implicit */short) arr_6 [i_2 - 2] [i_1] [i_2 - 1])));
                            arr_16 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_12)))));
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_11 [1LL] [i_1] [i_1]);
                        arr_18 [i_1] = var_8;
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned char) arr_20 [i_1] [i_1] [i_1] [i_1]));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_24 [i_2] [i_1] [i_2 - 2] [i_2]), (((/* implicit */long long int) arr_13 [i_2 - 2] [i_2] [i_2 + 2] [i_2 - 2] [i_2]))))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_1])));
                            var_24 = ((((min((((((/* implicit */_Bool) var_16)) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_6]) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((-(arr_19 [i_0] [i_0] [i_0] [i_0] [i_6]))))) + (2147483647))) << (((((max((var_5), (var_12))) + (2669008328607726463LL))) - (22LL))));
                            var_25 = ((/* implicit */int) var_7);
                        }
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            arr_28 [i_1] [i_1] [i_1] [(unsigned char)16] [i_1] = arr_4 [i_0] [i_0] [i_1];
                            var_26 &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned char)25)) && (((/* implicit */_Bool) max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_3)))))))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) var_18))) + (((((/* implicit */long long int) ((/* implicit */int) (short)-7865))) + (arr_24 [i_0] [i_1] [i_0] [i_0]))))), (((/* implicit */long long int) (short)-7865))));
                        }
                        for (int i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [10LL] [i_0]))))) ? (((/* implicit */int) arr_13 [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8] [i_8 - 2])) : (((/* implicit */int) var_11))))));
                            var_28 = ((/* implicit */unsigned char) var_4);
                        }
                    }
                }
            } 
        } 
    } 
    var_29 -= ((/* implicit */long long int) var_3);
    var_30 &= ((/* implicit */int) max(((short)-7865), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_1))) >= (((/* implicit */int) max((var_16), (var_9)))))))));
}
