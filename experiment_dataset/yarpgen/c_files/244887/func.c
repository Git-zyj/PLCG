/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244887
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
    var_12 = ((/* implicit */unsigned int) -3796920156244968391LL);
    var_13 = ((/* implicit */short) (-(1622375739168969902ULL)));
    var_14 |= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                arr_5 [(_Bool)1] [i_1] = max(((~((-(arr_1 [i_0]))))), (((/* implicit */long long int) (unsigned short)64204)));
                arr_6 [i_1] [3U] [(unsigned short)9] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16592))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3796920156244968390LL)) ? (((/* implicit */int) (unsigned short)1335)) : (((/* implicit */int) (_Bool)1)))))))), (var_2)));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(max(((-(arr_3 [12U] [1LL]))), (((/* implicit */unsigned int) -1153343557)))))))));
            }
        } 
    } 
}
