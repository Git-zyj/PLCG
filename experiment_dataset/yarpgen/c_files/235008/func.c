/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235008
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
    var_12 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 4611686018427387904LL))));
        var_13 = var_0;
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] = (signed char)-121;
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            var_14 += ((unsigned long long int) ((((/* implicit */_Bool) (short)15764)) && (((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_1]))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_11 [i_0] [i_1] [i_0])));
                            var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_3] [i_2] [i_4] [i_4] [i_0]))))) ? (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_2])))));
                        }
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_18 [5] [i_1] [i_2] [(unsigned short)4] [i_5])) ? (var_5) : (((/* implicit */int) var_11)))));
                            var_18 = ((/* implicit */unsigned char) (_Bool)1);
                            var_19 -= ((/* implicit */short) (_Bool)1);
                        }
                        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [(unsigned char)5] [i_2] [i_2])) ? (arr_18 [i_0] [i_1] [i_2] [i_3] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) - (arr_20 [i_6 - 1] [i_1] [i_2] [i_2] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3086704284U))))));
                            var_20 *= ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_6 + 2]))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15759)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */int) (signed char)64)) : ((+(((/* implicit */int) (_Bool)1))))));
                        }
                        var_22 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
        } 
    }
}
