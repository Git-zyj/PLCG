/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25713
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_11 *= ((/* implicit */_Bool) ((((-5641727353799687244LL) / (((/* implicit */long long int) -2083816894)))) << (((/* implicit */int) ((((/* implicit */int) min((var_7), (((/* implicit */signed char) var_5))))) != (((/* implicit */int) var_1)))))));
                    var_12 = ((/* implicit */unsigned int) ((2083816892) < (((((/* implicit */_Bool) (unsigned char)229)) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 + 2] [i_2 - 4])) ? (50331648) : (-50331649))) : (((/* implicit */int) (unsigned short)510))))));
                    var_13 = 5641727353799687241LL;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) & (6129579387007982440ULL))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((5641727353799687246LL) + (((/* implicit */long long int) (-(max((((/* implicit */int) var_3)), (-50331630))))))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_14 [i_3] [i_4] [i_5]) && (((/* implicit */_Bool) 34602654))))) < (((int) ((((/* implicit */_Bool) 50331648)) ? (arr_12 [i_4]) : (((/* implicit */unsigned long long int) arr_11 [i_6 - 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
