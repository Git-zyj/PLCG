/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248133
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
    var_20 = var_14;
    var_21 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) var_8);
                    arr_7 [i_0] [i_0] = ((/* implicit */short) arr_4 [i_2 - 1] [i_2] [i_0] [(short)5]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1 + 1] [9] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -5749050644839872085LL)) ? (10077620286292864666ULL) : (((/* implicit */unsigned long long int) var_17))));
                        var_23 = ((/* implicit */unsigned int) ((signed char) ((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        var_24 *= ((/* implicit */unsigned int) arr_9 [6LL] [6LL] [i_4]);
                        var_25 = arr_0 [(_Bool)1];
                    }
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] = ((/* implicit */short) var_4);
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_2 + 1]))))) + (((unsigned int) var_17))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_0 [i_2]))));
                    }
                }
            } 
        } 
    } 
}
