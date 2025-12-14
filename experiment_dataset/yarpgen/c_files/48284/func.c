/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48284
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
    var_20 += ((/* implicit */int) var_15);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) var_3)), (1152921470247108608LL))))) >= (min((max((1073741823ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (-(317337560))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) -1))) ? (173145654) : (10343005)));
                var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1152921470247108601LL)), (1073741846ULL)))) ? (max((18446744072635809770ULL), (((/* implicit */unsigned long long int) -10343003)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)243)) * (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)30)) + (((/* implicit */int) (signed char)108))))) == (max((18446744072635809792ULL), (0ULL))))))));
                arr_6 [(_Bool)1] [i_0] = ((/* implicit */signed char) 24ULL);
                arr_7 [i_0 + 1] [i_1 + 1] = ((/* implicit */short) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) (~(0ULL)))) ? (((((/* implicit */_Bool) (unsigned short)48008)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (1152921470247108609LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
            }
        } 
    } 
}
