/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/450
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [13U] [i_2 + 4] [(_Bool)0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [13ULL]))));
                    var_20 *= ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [(unsigned char)11]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned long long int) (+((-(2147483648U)))));
                                arr_15 [i_0] [4LL] [i_2] [4LL] [i_4] = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((unsigned int) var_13));
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        for (long long int i_6 = 4; i_6 < 11; i_6 += 2) 
        {
            {
                arr_23 [i_5 + 1] = ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)239))))) / (var_18))) * (((/* implicit */unsigned long long int) max(((+(2147483648U))), (((/* implicit */unsigned int) var_17))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_23 |= ((/* implicit */long long int) arr_22 [(unsigned char)5]);
                    arr_28 [i_7] [i_6 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10097813759577633449ULL)) ? (((/* implicit */int) arr_4 [i_6 - 2] [i_6 - 1])) : (((/* implicit */int) arr_4 [i_6 - 1] [i_6 - 3]))));
                    arr_29 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_4);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (unsigned short)65535);
    var_25 = ((/* implicit */unsigned long long int) 2147483647U);
}
