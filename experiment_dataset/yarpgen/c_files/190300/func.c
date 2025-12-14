/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190300
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_3] [14U] [i_3] = ((/* implicit */unsigned long long int) var_7);
                        arr_13 [i_0 - 2] = ((/* implicit */unsigned int) ((-1381157393) != (((/* implicit */int) (unsigned short)65535))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_16 [i_0 - 1] [i_1] [5] [5] = ((/* implicit */signed char) (+((-(4294967295U)))));
                        arr_17 [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */long long int) var_7);
                        arr_18 [i_2] [4U] = 4294967295U;
                        arr_19 [i_0] [i_1] [i_0] [(short)4] [i_1] = ((/* implicit */short) ((signed char) 1U));
                        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (-((+(((/* implicit */int) ((9910390419012042136ULL) >= (((/* implicit */unsigned long long int) 4294967294U))))))))))));
                    }
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_4))));
                    var_13 = 4294967294U;
                    var_14 = ((/* implicit */unsigned long long int) (short)29108);
                    arr_20 [i_0 - 3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_10 [i_0] [i_0] [i_0 - 3] [i_0]) == (var_0))) ? (((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_2] [i_1]))) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((6U) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_0 - 1] [i_1]))))))) : ((+(var_0)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) var_7);
}
