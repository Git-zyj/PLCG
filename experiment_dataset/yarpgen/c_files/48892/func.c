/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48892
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) var_2);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((min((2146959360U), (((/* implicit */unsigned int) arr_6 [i_2] [i_2 + 1] [i_2] [i_2])))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (var_13)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */short) var_3);
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
        arr_11 [i_3] [i_3] = ((/* implicit */short) min(((+(((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [(short)6])))), (((/* implicit */int) var_3))));
    }
    var_20 = ((/* implicit */int) var_7);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((min((var_7), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 3458764513820540928LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))))))))));
}
