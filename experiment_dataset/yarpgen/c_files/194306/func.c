/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194306
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
    var_19 = var_0;
    var_20 = ((/* implicit */unsigned long long int) ((((min((var_18), (((/* implicit */unsigned long long int) (unsigned char)245)))) >> (((var_6) + (1686536416))))) == (((((/* implicit */_Bool) var_10)) ? ((-(var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 2] [i_0 - 1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [9LL]), (((/* implicit */long long int) arr_2 [i_1]))))) ? ((+(((/* implicit */int) (unsigned char)22)))) : (var_12)))) >= (var_10)));
                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (max((((/* implicit */unsigned long long int) (unsigned char)252)), (9047517876032347069ULL))))))) < (((11353444711980906545ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2125)))))));
                var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                arr_7 [i_0] [i_0 - 2] = ((/* implicit */long long int) (unsigned char)174);
            }
        } 
    } 
}
