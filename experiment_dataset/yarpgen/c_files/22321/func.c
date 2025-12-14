/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22321
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (unsigned char)113);
                    var_18 = (short)7168;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */short) (unsigned short)60782);
                                arr_15 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)43059);
                                arr_16 [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) 8995042075804237532LL);
                                var_20 = ((/* implicit */signed char) 1161405160376933482LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */short) var_0);
}
