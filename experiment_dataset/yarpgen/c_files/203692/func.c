/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203692
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) (short)5328);
                    var_17 -= ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)3731)) : (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-3732)) : (2147483629))), (((/* implicit */int) arr_7 [i_0])))));
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) 2147483629);
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (short)3731))));
    }
    for (int i_3 = 1; i_3 < 9; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (short)3747);
        arr_12 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (short)3715)) && (((/* implicit */_Bool) max(((short)3747), ((short)3731))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */long long int) var_2)) != (max((((/* implicit */long long int) (-(((/* implicit */int) (short)-3705))))), ((-(arr_10 [i_3 + 1]))))))))));
        var_21 = (-(((/* implicit */int) (short)-3747)));
    }
    var_22 = ((/* implicit */unsigned long long int) var_4);
}
