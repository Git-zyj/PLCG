/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42748
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))))) + (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8191))) : (9223372036854775807LL))) / (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_5)))))))));
    var_19 += ((/* implicit */unsigned char) (short)-8192);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_1] &= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) * ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9740608048305567998ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [7LL])) * (((/* implicit */int) (signed char)60)))))));
                arr_6 [i_1] = ((/* implicit */short) ((_Bool) ((arr_2 [i_1]) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2])))));
            }
        } 
    } 
}
