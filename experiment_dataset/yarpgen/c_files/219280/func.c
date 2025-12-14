/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219280
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
    var_12 = ((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)4650)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) var_11);
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((-1) | (((/* implicit */int) (signed char)110)))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3120567120395563132LL)) ? (((/* implicit */unsigned long long int) (~(-8999699993082901385LL)))) : (18446744073709551599ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                                var_15 ^= ((/* implicit */unsigned short) (~(var_0)));
                                var_16 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_13 [i_4] [i_4] [i_4] [i_4 - 2] [i_4 + 2] [i_0] [5]))) ^ (var_0)));
                                arr_14 [(unsigned char)9] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((var_6) ? (var_1) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) max((1085731532), (((/* implicit */int) (unsigned char)33)))))))), (var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
