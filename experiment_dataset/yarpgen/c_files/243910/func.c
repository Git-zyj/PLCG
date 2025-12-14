/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243910
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
    var_18 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 10154021706850625259ULL))));
                    var_20 = ((/* implicit */_Bool) 18446744073709551615ULL);
                    var_21 = ((/* implicit */signed char) (short)8743);
                    arr_10 [0ULL] [i_0] [i_1] [(signed char)5] = (short)-8736;
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)1022);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    for (int i_6 = 2; i_6 < 7; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_24 [i_3] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) (signed char)127);
                                arr_25 [i_5] [(short)6] [3ULL] [i_4] [(short)4] [i_6] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)2062);
                                arr_26 [i_3] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */int) (short)8747);
                                var_22 = ((/* implicit */unsigned short) 2147483647);
                                var_23 = ((/* implicit */unsigned short) (short)-15076);
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) 4287816634381514285LL);
            }
        } 
    } 
}
