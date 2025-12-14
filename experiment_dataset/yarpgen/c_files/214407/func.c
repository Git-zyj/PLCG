/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214407
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (5ULL) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 8335517308445521592LL)), (4832656430963069821ULL)))) ? (((((/* implicit */unsigned long long int) -1180145811755621464LL)) ^ (4832656430963069821ULL))) : (((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */long long int) var_5)))))))));
        var_18 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)1])) : (((/* implicit */int) (signed char)121)))) != (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)203)), (12897560031311123241ULL)))))))));
    }
    for (short i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (short)-6943);
        arr_6 [i_1] = ((/* implicit */short) arr_4 [i_1]);
        var_19 -= ((/* implicit */unsigned long long int) arr_3 [10ULL] [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_11 [i_2] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) (short)-24900)), (1962240662U))))) != (13614087642746481798ULL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_14 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
            var_20 -= ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_2] [i_3]));
            arr_15 [i_2] = (~(((/* implicit */int) arr_7 [i_2])));
            arr_16 [i_2] [2ULL] [i_3] = ((/* implicit */long long int) var_11);
            var_21 = ((/* implicit */short) max((var_21), ((short)-24900)));
        }
    }
    /* LoopNest 3 */
    for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                {
                    arr_25 [i_6] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((13614087642746481781ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    arr_26 [i_4] [i_5] [(signed char)1] [5] = var_16;
                    arr_27 [i_4 - 2] [i_4] [i_5] = ((long long int) -1885324592);
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 20; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_32 [i_5] = ((/* implicit */unsigned int) ((((long long int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)5))))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                                var_22 -= ((/* implicit */unsigned long long int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-5378)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
