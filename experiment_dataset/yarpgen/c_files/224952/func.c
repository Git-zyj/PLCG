/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224952
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((long long int) ((var_7) << (((((/* implicit */int) (short)32764)) - (32719)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (short)-32764);
                            var_21 = ((/* implicit */unsigned short) min((arr_3 [i_0 + 1]), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_12)))))))));
                            arr_9 [i_1] = ((/* implicit */signed char) ((unsigned char) (!(((((/* implicit */int) (short)-32752)) < (((/* implicit */int) arr_7 [i_2 + 4] [i_2 + 4] [i_1] [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((-727432086389269149LL) % (((/* implicit */long long int) ((/* implicit */int) (short)32763))))))));
}
