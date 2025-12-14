/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49196
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
    var_15 |= ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -993138932400200149LL))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */int) var_7);
                            var_17 = var_0;
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (max((13905852073487329708ULL), (((/* implicit */unsigned long long int) var_8)))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] [i_0] = var_4;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_7);
    var_20 &= ((/* implicit */long long int) var_10);
}
