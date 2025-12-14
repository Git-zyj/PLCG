/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208056
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
    var_17 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = ((signed char) (~(((/* implicit */int) arr_1 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned short)4064)))), (((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [(unsigned short)3] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_0);
}
