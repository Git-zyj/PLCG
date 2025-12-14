/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220762
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((int) min((((/* implicit */long long int) arr_0 [i_0] [i_1 - 2])), (((((/* implicit */_Bool) 2147483630)) ? (var_9) : (((/* implicit */long long int) -2147483631)))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((-2147483621) & (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((((/* implicit */_Bool) -2147483619)) ? (519301226) : (-1562238816))) : (((int) (~(-1036120122))))));
                var_13 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) 1005395052);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((9223372036854775807LL) - (9223372036854775806LL)))));
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                {
                    arr_16 [i_4] [i_2] = (((-(((/* implicit */int) ((6511386344587987442LL) >= (((/* implicit */long long int) 1036120122))))))) / (min((519301240), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)204)))))));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = (+(((/* implicit */int) var_5)));
                    var_15 = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    } 
}
