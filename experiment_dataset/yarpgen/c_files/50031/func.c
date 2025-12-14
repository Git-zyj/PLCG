/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50031
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
    var_20 -= ((/* implicit */unsigned long long int) (unsigned short)16862);
    var_21 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 2147450880LL);
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
        arr_8 [i_1] = ((/* implicit */long long int) 18446744073709551598ULL);
    }
    for (long long int i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 3; i_4 < 12; i_4 += 4) 
            {
                for (int i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) 8720544587468203679ULL);
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (unsigned short)22463))));
                        arr_19 [(short)8] [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */long long int) (unsigned char)7);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_7 = 3; i_7 < 13; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) (unsigned char)3);
                            var_26 = ((/* implicit */unsigned int) -2147450880LL);
                        }
                    } 
                } 
                arr_28 [i_2 + 1] [i_3 - 1] [i_6] |= ((/* implicit */int) (unsigned char)253);
                var_27 -= ((/* implicit */unsigned int) (_Bool)0);
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) 8720544587468203679ULL))));
                arr_29 [i_2] [i_3] [i_6] &= ((/* implicit */unsigned long long int) 4U);
            }
            for (unsigned char i_9 = 2; i_9 < 11; i_9 += 3) /* same iter space */
            {
                var_29 = 9223372036854775803LL;
                arr_32 [(short)9] [(short)9] [i_9] = ((/* implicit */long long int) (unsigned char)0);
            }
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (unsigned char)225))));
        }
        for (int i_10 = 1; i_10 < 11; i_10 += 3) 
        {
            var_31 = 4026531840U;
            var_32 = -2147450879LL;
        }
        for (short i_11 = 1; i_11 < 12; i_11 += 3) 
        {
            arr_38 [i_2] [i_11] = ((/* implicit */_Bool) 2147450882LL);
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 2; i_13 < 10; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */short) (_Bool)0);
                        var_34 += ((/* implicit */unsigned int) (short)0);
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_14 = 3; i_14 < 17; i_14 += 1) 
    {
        var_35 = ((/* implicit */unsigned long long int) 0LL);
        var_36 = ((/* implicit */unsigned char) 0LL);
        var_37 = ((/* implicit */unsigned char) -1666423524);
        var_38 = ((/* implicit */unsigned int) (unsigned short)155);
    }
    var_39 = ((/* implicit */short) 1073741808U);
}
