/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217566
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
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) (_Bool)0);
                                var_11 = (unsigned char)6;
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (short i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_12 |= (signed char)-117;
                                var_13 = ((/* implicit */signed char) (unsigned char)7);
                                var_14 = ((/* implicit */unsigned short) (unsigned char)250);
                                var_15 = (unsigned char)108;
                                var_16 -= ((/* implicit */short) (unsigned short)3);
                            }
                        } 
                    } 
                } 
                var_17 -= ((/* implicit */int) (short)3670);
                arr_21 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)6);
                var_18 = ((/* implicit */short) (unsigned short)0);
            }
        } 
    } 
    var_19 += ((/* implicit */signed char) var_5);
    var_20 = var_9;
}
