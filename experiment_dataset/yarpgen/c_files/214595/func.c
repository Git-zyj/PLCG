/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214595
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
    var_17 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (-(((int) ((var_16) <= (arr_0 [0U] [i_1 - 1]))))));
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (7530496174298669890ULL) : (((/* implicit */unsigned long long int) 4088073885316778315LL))))) ? (var_12) : (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned short)38310)), (var_4))) << (((((/* implicit */int) var_13)) - (29719))))))));
                var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (short)-1)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */short) 9223372036854775807LL);
                            var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33501)) <= (((/* implicit */int) (unsigned short)33501))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) 10916247899410881735ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_8 = 4; i_8 < 12; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((min((3), (((/* implicit */int) var_6)))) >= (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-3352))))));
                                arr_28 [i_6] [i_6] [i_6] [5U] [i_10] = ((/* implicit */_Bool) (-((+(arr_8 [i_8])))));
                                var_25 -= ((/* implicit */unsigned char) (~(0ULL)));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */_Bool) max((((var_10) ^ (((/* implicit */int) var_14)))), (((/* implicit */int) ((signed char) (unsigned short)33492)))));
                var_27 = ((/* implicit */signed char) var_16);
                var_28 *= ((/* implicit */_Bool) ((1883193098) / (-1800814268)));
            }
        } 
    } 
}
