/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41053
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_4))))) ? (max((arr_2 [i_0 + 1]), (((/* implicit */long long int) ((arr_1 [11LL]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_3 [i_0 + 1] [i_0 + 1])))))));
                var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
            }
        } 
    } 
    var_11 = var_5;
    var_12 = ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) 6261774016067972210LL)) ? (8645130357339223214LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                var_13 &= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_3 [i_2] [i_2])))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(min((min((((/* implicit */unsigned long long int) arr_0 [i_2] [i_3])), (var_3))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))))))));
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (!((!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 12223002638515042846ULL))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((_Bool) (short)-5011));
}
