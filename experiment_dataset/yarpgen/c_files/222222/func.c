/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222222
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
    var_17 = ((/* implicit */long long int) min((var_17), (min((var_11), (((((/* implicit */_Bool) min((var_0), (var_10)))) ? (var_11) : (var_8)))))));
    var_18 += ((((var_14) == (var_1))) ? (var_1) : (var_14));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_3), (-5299969035016718315LL))))))), (min((-7729118829252735573LL), (max((-5057522289531305199LL), (arr_4 [i_0] [0LL])))))))));
                var_20 = var_14;
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_21 = min((arr_5 [11LL]), (-8213182765382846663LL));
                    arr_9 [i_0] [i_2] = max(((-(arr_5 [i_0 + 1]))), (var_15));
                }
            }
        } 
    } 
}
