/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198359
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [4U] |= ((/* implicit */unsigned char) (+(((arr_0 [i_1]) | ((-(arr_3 [(unsigned char)8])))))));
                var_19 = ((/* implicit */unsigned long long int) var_3);
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((-(var_5))) | (((/* implicit */unsigned long long int) (~(arr_4 [i_1] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) (+((+(((((/* implicit */int) arr_11 [i_2])) * (((/* implicit */int) var_4))))))));
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_2])), (((1615845863U) + (((/* implicit */unsigned int) ((var_3) + (arr_12 [8ULL] [(unsigned char)14] [i_3]))))))));
                var_23 -= ((unsigned long long int) min((((/* implicit */unsigned long long int) ((var_10) & (var_6)))), (13767095147364368939ULL)));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_18 [i_2] = ((max((var_7), (max((arr_9 [i_2] [i_5]), (((/* implicit */unsigned long long int) var_6)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                            var_24 *= ((/* implicit */unsigned short) ((int) arr_9 [i_2] [i_2]));
                            var_25 = ((/* implicit */int) ((13767095147364368936ULL) | (max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_2] [i_2])) == (((/* implicit */int) var_16)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
