/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243393
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), ((((_Bool)1) ? (min((((/* implicit */unsigned long long int) (((_Bool)1) || ((_Bool)1)))), (15421404602330824562ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32221)))))));
                var_21 = ((/* implicit */long long int) min((((/* implicit */short) min((arr_2 [(unsigned short)12]), (arr_2 [i_1])))), (min((arr_0 [i_1] [(_Bool)1]), (arr_0 [i_0] [i_0])))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0])))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) -4787416154585399478LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) : (4194303U));
    var_23 |= ((/* implicit */signed char) max(((+(var_18))), (((/* implicit */long long int) var_2))));
    var_24 = ((/* implicit */unsigned short) 4787416154585399478LL);
}
