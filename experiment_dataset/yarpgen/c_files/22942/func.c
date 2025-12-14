/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22942
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [(unsigned short)16] &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) min((var_12), (var_12)))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */long long int) var_8)) : (-3170784900002464555LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                    var_19 = ((/* implicit */_Bool) -1602248048);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4 - 1] [i_3] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) 4096U);
                                var_20 = ((/* implicit */signed char) ((unsigned short) ((long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (var_12) : (var_2)))));
                                var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_4)) ? (arr_16 [i_1] [i_1 - 1] [i_2] [i_3 + 2] [i_4 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 3; i_5 < 15; i_5 += 3) 
    {
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((signed char) ((1602248048) ^ (((/* implicit */int) var_10))))))));
                    arr_26 [i_5] [i_6] [8] [i_7] = ((((/* implicit */_Bool) (+(1602248048)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 - 3]))));
                    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_4 [i_5 - 1]))) ? (((unsigned int) -9223372036854775789LL)) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (unsigned short)65535);
}
