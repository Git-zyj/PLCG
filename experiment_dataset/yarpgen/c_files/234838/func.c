/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234838
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
    var_18 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_0 [i_0 + 2] [i_0 + 4]), (((/* implicit */unsigned short) arr_1 [i_0])))))));
                var_19 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_4 [i_0])), (arr_0 [i_0] [i_1])))), (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_1);
                var_20 *= ((/* implicit */unsigned char) (-(min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_1] [i_0 + 2]))))));
            }
        } 
    } 
}
