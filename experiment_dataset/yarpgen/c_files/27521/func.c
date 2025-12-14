/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27521
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [6LL] [6LL] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) var_12)), (min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) arr_0 [i_0]))), (((long long int) (signed char)-79))));
        var_15 = ((/* implicit */unsigned int) ((unsigned short) ((int) 4025047617U)));
        var_16 = ((/* implicit */signed char) ((unsigned short) min((((long long int) 4025047617U)), (min((((/* implicit */long long int) var_3)), (var_11))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((int) 5151703659207975246ULL)));
    }
    var_17 = ((/* implicit */int) var_1);
    var_18 = ((/* implicit */unsigned int) var_4);
    var_19 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            {
                arr_12 [i_1 - 1] [i_1 - 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) -1LL))), (max((((/* implicit */unsigned long long int) arr_7 [i_1 - 1])), (2343805157476980543ULL)))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned int) ((short) var_14))))));
                var_21 |= min((((/* implicit */unsigned char) ((_Bool) ((long long int) arr_1 [i_1])))), (((unsigned char) min((var_11), (((/* implicit */long long int) 4025047617U))))));
            }
        } 
    } 
}
