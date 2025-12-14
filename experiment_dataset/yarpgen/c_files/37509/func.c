/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37509
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [15U] [i_2] [i_1] [(unsigned short)6] = ((/* implicit */unsigned char) 1910143594U);
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)60762)) ? (2588387113730151802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152)))));
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [(signed char)0])) & ((~(((/* implicit */int) var_11)))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_23 [i_5] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_5] [i_1]);
                            var_21 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [(_Bool)1] [i_6])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_5] [i_5] [i_0])) : (arr_20 [i_5] [i_5] [i_0] [(unsigned short)7] [i_6] [i_6]))) << (((max((var_17), (((/* implicit */unsigned int) (unsigned char)26)))) - (3337692857U)))))));
                            var_22 ^= ((/* implicit */signed char) arr_17 [i_1] [i_1] [i_5] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_11);
}
