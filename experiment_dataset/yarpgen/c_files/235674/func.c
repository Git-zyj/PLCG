/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235674
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
    var_14 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 5466040705593224575LL)) ? (((/* implicit */long long int) arr_1 [i_0 + 2])) : (min((var_4), (((/* implicit */long long int) arr_3 [i_1]))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-4)) ? (min((1628155711617335914ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)10))))))) : (1628155711617335914ULL)));
                var_15 = (-(min((var_4), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    var_16 += ((/* implicit */unsigned short) var_8);
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) : (min((((/* implicit */unsigned int) 0)), (1523450855U)))))) ? (var_9) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_8)))), (((((/* implicit */_Bool) (unsigned char)36)) ? (-5466040705593224595LL) : (((/* implicit */long long int) 3077900951U))))))))))));
}
