/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207992
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = (_Bool)1;
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) min((arr_2 [11]), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) min(((unsigned short)30463), (((/* implicit */unsigned short) arr_4 [(unsigned char)1] [(unsigned char)1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) var_7)))))));
    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-9931))));
}
