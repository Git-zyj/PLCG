/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206688
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 *= ((/* implicit */_Bool) min((((((/* implicit */int) var_11)) + (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))), (((/* implicit */int) min(((_Bool)0), ((!(((/* implicit */_Bool) var_8)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_3))));
                                var_16 -= ((/* implicit */short) ((unsigned short) arr_2 [i_1]));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) max((((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_3 + 2] [i_3 + 1] [i_4]))))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            {
                arr_20 [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_17 = ((/* implicit */signed char) 2147483647);
                /* LoopNest 2 */
                for (short i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            arr_27 [i_5] [i_5] [i_7 - 1] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (!(((var_12) || (((/* implicit */_Bool) 3179735861U)))))))));
                            var_18 -= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16170))) : (1404500750U)))) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28618)) && (((/* implicit */_Bool) 2890466543U)))))));
                        }
                    } 
                } 
                arr_28 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) % (arr_21 [i_6])));
            }
        } 
    } 
}
