/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210059
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
    var_12 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (((!(var_10))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) (!(var_7))))))));
        var_13 = (~(3741900562607711702LL));
        var_14 = ((/* implicit */long long int) (~((-(((int) var_4))))));
        arr_5 [i_0] = max((((long long int) var_4)), (((/* implicit */long long int) (-(((/* implicit */int) var_11))))));
        var_15 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
    }
    for (short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        var_16 |= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) (~(-1122826538)))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) ((int) (~(max((3741900562607711702LL), (3741900562607711688LL))))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_9))));
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) -3741900562607711703LL)))));
        var_20 &= max((max((-3741900562607711703LL), (((/* implicit */long long int) (unsigned short)35871)))), (((/* implicit */long long int) (+((+(((/* implicit */int) var_10))))))));
    }
}
