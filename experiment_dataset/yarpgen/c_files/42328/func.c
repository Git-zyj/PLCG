/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42328
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 &= ((/* implicit */int) var_11);
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned long long int) min(((short)19262), (((/* implicit */short) (signed char)63))))))));
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) 33554431U))) ^ (((((/* implicit */unsigned long long int) -4803184006573072919LL)) * (var_2)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] |= ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned short)29554)))) ^ (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) >> (((arr_11 [i_1]) + (1057521366))))))));
                                var_21 = ((/* implicit */unsigned short) 4261412885U);
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 153058114U))));
                                arr_14 [i_2] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_1))));
                                var_24 -= 4141909182U;
                            }
                        } 
                    } 
                }
                var_25 |= ((/* implicit */int) ((unsigned long long int) (-(var_14))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_3))));
    var_27 = ((/* implicit */long long int) var_0);
}
