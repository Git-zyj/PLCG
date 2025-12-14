/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39353
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
    var_18 = ((/* implicit */long long int) var_0);
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)18545))));
    var_20 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_4 [i_1]), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)8128)), (586649121U))))));
                var_21 = ((/* implicit */long long int) var_10);
                var_22 = ((/* implicit */unsigned short) (-(min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_8))))));
                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (max((((/* implicit */long long int) var_7)), (-4134157358094465103LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) == (((((long long int) arr_1 [i_0] [i_0])) / (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_5))))))))));
            }
        } 
    } 
}
