/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41882
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) ((unsigned short) 83670187));
                arr_5 [i_1] = ((/* implicit */signed char) ((short) ((unsigned long long int) var_12)));
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 24; i_2 += 1) 
                {
                    var_16 &= ((unsigned char) ((((/* implicit */_Bool) 2643581819U)) ? (((6454757817565113179LL) / (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((long long int) var_9))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_7)) % (var_9)))))));
                }
                var_18 = ((/* implicit */short) min((var_6), (-7923742934933875277LL)));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned int) var_12);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) -1019343492))));
    var_21 ^= ((((/* implicit */int) var_7)) << (((max((((/* implicit */unsigned int) (unsigned short)60036)), (((635828217U) << (((652694887) - (652694867))))))) - (2140143602U))));
}
