/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242698
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)65530)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) min((min((arr_5 [i_0 - 1]), (((/* implicit */unsigned short) (short)-2985)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2989))) < (17628018756169510825ULL))))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32765)) & (((/* implicit */int) (short)32765))))) || (((/* implicit */_Bool) min((var_12), ((unsigned short)19297)))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46254)) / (((/* implicit */int) (unsigned short)65535))))) | ((~(arr_3 [i_0] [i_0] [i_0])))))))))));
                var_22 = (+((((~(((/* implicit */int) (unsigned short)4915)))) | (((/* implicit */int) ((arr_1 [i_1] [10]) > (var_8)))))));
            }
        } 
    } 
    var_23 += (-((-(min((((/* implicit */unsigned long long int) 1098858100)), (18101868908196816637ULL))))));
}
