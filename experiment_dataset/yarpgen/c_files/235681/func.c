/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235681
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
    var_10 = ((1) ^ (((/* implicit */int) ((((/* implicit */long long int) (+(var_1)))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 661694372)) : (var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3129928571037531314LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) min((-661694372), (((((/* implicit */_Bool) var_4)) ? (var_1) : (419705900)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) (-(-661694356)))) : ((-(arr_0 [i_0] [i_0]))))));
                var_11 = ((/* implicit */short) arr_0 [i_0] [20LL]);
                var_12 = ((/* implicit */short) var_1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_13 = (~(((((/* implicit */_Bool) 2238068960960680153LL)) ? (arr_20 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]) : (arr_20 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))));
                                var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) -291274165)))));
                                arr_21 [i_2] [i_2] [21] [i_4] = arr_10 [i_3 + 1] [i_2 + 1] [i_4 - 1];
                            }
                        } 
                    } 
                } 
                var_15 = min((((/* implicit */long long int) 176077479)), (-8281168091020491785LL));
                var_16 = ((/* implicit */short) (unsigned char)4);
                arr_22 [i_2] [i_3 + 3] = ((/* implicit */int) arr_7 [i_3 + 3]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 24; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */short) var_5);
                            arr_28 [i_2 - 1] [i_3 + 1] [i_7 + 1] [i_8] [i_8] = ((/* implicit */short) min((min((215631391674891026LL), (((((/* implicit */long long int) ((/* implicit */int) (short)16674))) + (2238068960960680147LL))))), (var_5)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_1);
}
