/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198606
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
    var_15 = ((/* implicit */signed char) max((min((var_6), (((/* implicit */unsigned long long int) var_5)))), (((unsigned long long int) ((short) 0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (short)-2555);
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((_Bool) (-9223372036854775807LL - 1LL))))))));
        var_17 = ((((/* implicit */_Bool) 1516632780)) ? (((/* implicit */long long int) arr_2 [i_0 + 1])) : (var_8));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            {
                var_18 += ((/* implicit */long long int) var_12);
                arr_10 [i_1] = ((/* implicit */signed char) var_14);
                var_19 = ((/* implicit */signed char) var_14);
            }
        } 
    } 
}
