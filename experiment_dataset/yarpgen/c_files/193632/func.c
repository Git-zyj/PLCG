/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193632
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = arr_1 [i_0];
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_0 [i_2 - 1]);
                                var_22 = (unsigned char)35;
                                var_23 = (unsigned short)59825;
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_3 + 1] [i_3 + 1]))) ^ (4287484170U)));
                                arr_11 [i_0] [i_0 - 2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_7))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */long long int) max(((unsigned short)54981), (((/* implicit */unsigned short) (_Bool)0))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 3; i_5 < 11; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) arr_19 [i_1] [i_7 + 1] [i_1] [i_1 + 1] [i_1]);
                                arr_21 [i_7] [i_1] [i_0] = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)24274), (((/* implicit */unsigned short) var_3))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1 - 1] [i_1])))))));
            }
        } 
    } 
    var_28 += var_1;
}
