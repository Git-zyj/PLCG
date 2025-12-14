/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205103
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) > (((((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_9))))) * (((2298133619248860480LL) / (((/* implicit */long long int) ((/* implicit */int) (short)21168)))))))));
                    var_18 = ((/* implicit */_Bool) (~((-(-1245630689153424413LL)))));
                }
            } 
        } 
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0])) ? (arr_6 [i_0 - 1]) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0])))) : ((-(((6421828638836481880LL) + (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    }
    var_20 = ((/* implicit */_Bool) ((var_0) ? (min((((((/* implicit */int) var_1)) ^ (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_9))));
}
