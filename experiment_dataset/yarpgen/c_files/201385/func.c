/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201385
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
    var_19 = ((/* implicit */unsigned long long int) var_18);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (7730592434845993649LL)));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (var_3)));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+(7730592434845993649LL))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (int i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) 1610612736U);
                    arr_18 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_6);
                }
                var_24 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) 8388607)), (909867246U)))));
                var_25 += ((/* implicit */signed char) min((((/* implicit */long long int) 2684354560U)), (-7730592434845993649LL)));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_26 ^= ((/* implicit */signed char) 2684354559U);
                            arr_24 [i_3] = max((((/* implicit */unsigned int) var_11)), (((unsigned int) arr_20 [i_4 - 1] [8U] [8U] [i_4 + 1])));
                            arr_25 [i_3] = ((/* implicit */unsigned int) -7730592434845993649LL);
                            arr_26 [i_3] [i_4] [(unsigned short)11] = ((/* implicit */signed char) ((7730592434845993649LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
