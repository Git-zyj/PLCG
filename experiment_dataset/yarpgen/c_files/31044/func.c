/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31044
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
    var_16 += ((/* implicit */int) max(((unsigned char)0), ((unsigned char)116)));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((min((((/* implicit */int) (unsigned char)114)), (185452951))), (((/* implicit */int) (unsigned char)116))))) + (((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = min(((+(var_3))), (((/* implicit */long long int) (-(arr_5 [i_0] [i_0])))));
                arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1]) & (((/* implicit */int) (unsigned char)140))))) ? ((-(arr_5 [i_0] [i_1]))) : ((-(arr_5 [i_0] [i_0])))));
            }
        } 
    } 
    var_18 += ((/* implicit */short) var_15);
}
