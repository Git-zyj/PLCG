/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209568
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
    var_18 |= ((/* implicit */unsigned char) ((((657386675U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((long long int) (signed char)127)))));
                    arr_9 [i_1] [i_0] [i_0] = ((min((((/* implicit */unsigned long long int) -7538010228485017806LL)), (9037959169020744952ULL))) << ((((~(-1309940652))) - (1309940641))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) -7538010228485017799LL)) && (((/* implicit */_Bool) (signed char)51)))))));
                        var_21 = ((/* implicit */long long int) arr_0 [(_Bool)1]);
                        arr_12 [i_0] [i_1] [i_2 - 2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0])) ? (((long long int) -7538010228485017812LL)) : (max((7538010228485017805LL), (((/* implicit */long long int) (short)-30258))))))) && (((((/* implicit */_Bool) (unsigned short)32512)) && (((/* implicit */_Bool) 1278709906)))));
                    }
                    arr_13 [i_1] = ((/* implicit */unsigned short) (+(min((arr_6 [i_2 + 3] [i_2 - 4] [i_2 + 1]), (arr_1 [i_0])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((int) 7579714598461034235ULL))), (((7538010228485017798LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147418112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (16646144U)));
}
