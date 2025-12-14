/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235502
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
    var_16 |= ((/* implicit */unsigned short) (-((-(var_6)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((-6343416995180988258LL) + (9223372036854775807LL))) >> (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-81))) % (6687998831946836291LL))) + (137LL)))));
                                var_17 = ((/* implicit */long long int) ((int) ((_Bool) var_9)));
                                var_18 = ((/* implicit */_Bool) 22U);
                                arr_16 [3] [i_1] [i_2] [5] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((var_3), (arr_2 [i_0] [i_0])))) > (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) <= (((18446744073709551615ULL) % (18446744073709551589ULL)))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1] [i_0] [18ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 2] [i_0] [i_1] [(unsigned char)14]))) : (18446744073709551592ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-126))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)92)))) <= (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)125))))));
                arr_21 [i_5] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))) < (((long long int) (signed char)-114)));
                arr_22 [i_5] [i_6] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_5)))) << (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (short)-3381)) : (((/* implicit */int) (unsigned char)248))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))))) - (16624316450547060485ULL)))));
            }
        } 
    } 
}
