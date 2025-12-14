/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212308
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
    var_16 = ((/* implicit */_Bool) var_8);
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_12)) : (-7923280691322103189LL))))), (var_10)));
    var_18 = (+((((-(((/* implicit */int) (unsigned short)0)))) - (-1075303777))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((((arr_0 [i_1 - 1]) + (arr_0 [i_1 - 1]))), (max(((~(arr_6 [i_1 - 1] [1]))), (((/* implicit */int) arr_2 [i_1 - 1]))))));
                var_20 -= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [12])) ? (var_9) : (arr_0 [i_1])))) && (((((/* implicit */_Bool) -7923280691322103170LL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((/* implicit */unsigned long long int) var_13)), ((-(min((((/* implicit */unsigned long long int) var_4)), (var_3)))))))));
}
