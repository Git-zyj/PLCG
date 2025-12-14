/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26394
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+((~((-(arr_3 [i_0] [i_1] [i_2]))))))))));
                            arr_9 [i_2] [i_0] [i_3] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)192))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) (-((+(0ULL)))));
                arr_10 [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 133261568U))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (~((-((-(2ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) (-((~((~(2ULL)))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-((+((+(var_11))))))))));
                    var_20 = ((/* implicit */unsigned char) (~((-((~(2ULL)))))));
                    var_21 = ((/* implicit */signed char) (+((~(0ULL)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551588ULL)))))))));
}
