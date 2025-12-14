/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48530
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
    var_18 -= ((/* implicit */unsigned short) (short)2047);
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (short)504))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        var_20 += ((/* implicit */signed char) (unsigned char)0);
        arr_3 [i_0] = ((/* implicit */int) (unsigned char)86);
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */signed char) (unsigned short)47066);
            var_21 = ((/* implicit */signed char) (unsigned short)15108);
            var_22 = (unsigned char)2;
        }
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 15; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) 4829750892263933906LL);
                                var_24 |= ((/* implicit */unsigned long long int) (unsigned short)53574);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (short)-1);
                    arr_20 [i_1] [i_4] = ((/* implicit */signed char) (unsigned short)31925);
                    arr_21 [i_1 + 3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) (signed char)127);
}
