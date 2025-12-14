/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207914
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
    var_13 = var_0;
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5310335453314159454LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32764))) : (-5310335453314159468LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_0] [6LL] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3404054669U)) ? (max((((/* implicit */long long int) (short)-32760)), (-5310335453314159482LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1572512049U))))));
                                var_15 = ((/* implicit */unsigned int) var_3);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [14U] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            }
                            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) != (var_8)))))))));
                            arr_16 [i_0] [i_0] [16ULL] [i_0] = ((/* implicit */long long int) ((unsigned int) 981943917160099156ULL));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 268435455LL)))))))), (var_1)));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) 461338469)) + (7639983037128482410LL))), (((/* implicit */long long int) (short)-32746))))) ? (((((/* implicit */_Bool) 1572512053U)) ? (-5310335453314159468LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23))))) : (((/* implicit */long long int) var_9))));
}
