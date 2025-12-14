/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189880
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
    var_17 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [(short)13] = ((short) ((_Bool) arr_4 [i_0] [(short)17] [i_0 - 1]));
                    var_18 = ((/* implicit */unsigned char) max((arr_3 [i_0] [i_1]), (((/* implicit */long long int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_4 [5ULL] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [(signed char)7] [5]))))))));
                    var_19 = ((/* implicit */unsigned short) var_9);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_4 [i_0] [i_1] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_3] [i_1 + 1] [(short)1] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]);
                        arr_12 [i_1] [i_3] = ((/* implicit */short) (-(max((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_0 + 1]), (((/* implicit */int) var_5))))));
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_8 [i_1])))) : (((/* implicit */int) (unsigned char)4))))) ? (max((arr_3 [i_1 - 1] [i_1]), (((/* implicit */long long int) arr_10 [(short)3] [i_0 + 1] [i_0] [i_1 - 1] [i_3] [i_3])))) : (((/* implicit */long long int) (-((+(((/* implicit */int) var_11)))))))));
                        arr_13 [i_3] [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */long long int) arr_1 [i_2] [(short)16])) : (arr_3 [i_0] [i_1 + 1]));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) var_3);
                        var_23 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [i_2] [i_1]))));
                        var_24 |= ((/* implicit */int) arr_0 [i_4] [i_0 + 1]);
                    }
                }
            } 
        } 
    } 
    var_25 = (-(((((/* implicit */long long int) ((/* implicit */int) var_4))) - (((((/* implicit */_Bool) (unsigned char)28)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
