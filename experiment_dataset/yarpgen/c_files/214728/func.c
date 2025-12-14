/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214728
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) | (min((var_11), (((/* implicit */long long int) var_15))))))) || (((/* implicit */_Bool) var_3))));
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) 3311196654577893910LL)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) max((311739933), (((/* implicit */int) var_8))))) < (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25691)))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-27043)))))))));
                var_20 = ((/* implicit */short) (+(max((311739929), (-311739930)))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (+(3224235710U))));
            }
        } 
    } 
}
