/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246793
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_20 *= max((var_2), (((/* implicit */unsigned int) var_17)));
                    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_1])), ((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */long long int) arr_0 [i_0])) : (max((var_7), (((/* implicit */long long int) var_5))))))));
                    arr_6 [i_1] [i_1] [i_1] = var_15;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                var_23 &= ((/* implicit */short) (unsigned short)5614);
                arr_11 [i_3] [4LL] = ((/* implicit */unsigned char) max((min(((~(var_19))), (381667385422371937LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) (short)-19580)), (var_2))))))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 14; i_5 += 3) 
                {
                    for (long long int i_6 = 3; i_6 < 12; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_20 [i_3] [i_3] = max((min((((/* implicit */unsigned int) arr_18 [i_3] [i_6] [i_3] [i_3] [i_3])), ((~(var_10))))), (((/* implicit */unsigned int) arr_15 [i_3] [i_4] [i_3] [i_7])));
                                var_24 += ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) arr_18 [i_3] [i_4] [4ULL] [i_6] [i_7])), (var_17)))), (-654554394)));
                                var_25 *= ((/* implicit */short) arr_19 [i_7] [i_3] [i_5] [i_3]);
                                var_26 = ((/* implicit */_Bool) min(((-(var_1))), (((/* implicit */unsigned int) var_18))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
