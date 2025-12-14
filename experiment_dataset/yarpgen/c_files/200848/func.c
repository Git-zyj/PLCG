/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200848
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
    var_20 *= ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) (-(-7103463506970538305LL)))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 2326511851U))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_11))))), (((long long int) (_Bool)1))))) ? (((/* implicit */long long int) max((2625818106U), (((/* implicit */unsigned int) (_Bool)1))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8238))) : (var_9)))) | (7103463506970538304LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_23 -= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (unsigned short)8238)) ? (1354577037709556340ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))))), (((/* implicit */unsigned long long int) (unsigned char)201)))), (((/* implicit */unsigned long long int) max(((unsigned char)139), ((unsigned char)87))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((int) (unsigned char)255));
            }
        } 
    } 
}
