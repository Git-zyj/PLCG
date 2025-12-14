/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20917
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && ((!(((/* implicit */_Bool) var_12))))))), (var_9)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 |= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                    var_20 *= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (12715406724700484448ULL) : (var_4)))) || (((/* implicit */_Bool) 2741555124U)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_2 + 1] [i_2 + 1] [i_3] [i_4 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((arr_10 [i_0] [i_0] [i_2 - 1] [i_3] [i_3] [i_3]) ^ (8096380912217065188ULL)))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [(short)12] [i_3] [i_0] [i_2] [i_1])) : (var_1)));
                                arr_14 [i_4] [i_2] [i_2] [i_2] [i_4] [i_0] [i_1] = max((((/* implicit */unsigned long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 2])) > (((/* implicit */int) (signed char)119))))) : (((/* implicit */int) ((unsigned char) var_10)))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 2])) : (5731337349009067152ULL))));
                            }
                        } 
                    } 
                    arr_15 [i_2] = ((/* implicit */unsigned long long int) var_13);
                }
            } 
        } 
    } 
}
