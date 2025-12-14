/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238935
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_11 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_2)))) ? (((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) ^ (12741176080392368287ULL))) - (((/* implicit */unsigned long long int) 1568850805527484947LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-9223372036854775794LL)));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) var_1);
                    var_14 = var_0;
                }
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)59));
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (short)-23311))))) : (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775798LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))))))))) || (((/* implicit */_Bool) ((unsigned long long int) var_8))));
                    var_16 = ((/* implicit */signed char) ((long long int) 2395589497U));
                }
                arr_14 [i_0] [3LL] = ((/* implicit */long long int) ((((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((var_1) / (var_5)))))) + (((/* implicit */unsigned long long int) var_5))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (short)-9931)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775784LL))) + (41LL)))))) : (((((/* implicit */_Bool) ((unsigned int) (short)-32762))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (767241248623711217LL)))));
                arr_15 [i_0] = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) var_9)))));
            }
        } 
    } 
}
