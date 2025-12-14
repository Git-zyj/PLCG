/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230210
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [3ULL] [i_2] = (~(var_16));
                    arr_8 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(1841434602U)));
                    var_17 = ((/* implicit */short) 1841434596U);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (var_0)));
                                arr_25 [i_4] [i_3] = ((/* implicit */int) (-(2891435112U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (signed char)63);
                                var_20 &= ((/* implicit */short) 3165950910U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1841434596U))));
                                var_22 += ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 4; i_12 < 22; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 23; i_13 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (~((~(9223363240761753600ULL)))));
                                var_24 = 1403532176U;
                            }
                        } 
                    } 
                    var_25 = 2453532694U;
                }
            } 
        } 
    } 
}
