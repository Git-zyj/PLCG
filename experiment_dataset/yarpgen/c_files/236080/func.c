/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236080
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
    var_12 = ((/* implicit */long long int) var_11);
    var_13 = ((/* implicit */unsigned short) var_11);
    var_14 += ((/* implicit */unsigned char) var_10);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) -1))));
        var_16 &= ((/* implicit */int) (unsigned short)24547);
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) -725107837);
        var_18 = ((/* implicit */_Bool) 4151098999074721292ULL);
    }
    for (int i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = -725107837;
        /* LoopSeq 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_19 = ((/* implicit */short) 792261443U);
            var_20 -= (signed char)15;
            var_21 = ((/* implicit */_Bool) (signed char)-113);
            arr_13 [i_2] = ((/* implicit */signed char) (unsigned short)63);
        }
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */long long int) 1712864703U);
            var_22 = 586049074116570356ULL;
            arr_19 [i_2] [i_2] = ((/* implicit */_Bool) (unsigned char)45);
            var_23 = (unsigned char)3;
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                var_24 *= ((/* implicit */unsigned short) 725107837);
                var_25 ^= ((/* implicit */_Bool) 725107837);
            }
            var_26 = ((/* implicit */_Bool) (unsigned short)23791);
        }
        var_27 = ((/* implicit */int) (short)-1);
        var_28 = ((/* implicit */short) -725107809);
        var_29 = ((/* implicit */unsigned int) 15268484503777570798ULL);
    }
    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 2) 
    {
        arr_30 [i_7] [i_7] = ((/* implicit */short) 725107837);
        var_30 = ((/* implicit */short) (unsigned char)255);
        var_31 ^= ((/* implicit */short) (unsigned short)42988);
    }
    var_32 += ((/* implicit */int) var_6);
}
