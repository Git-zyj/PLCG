/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240115
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
    var_15 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (signed char)0);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) (unsigned char)225);
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [(unsigned short)5] = (short)-1;
            var_18 = ((/* implicit */unsigned char) min((var_18), ((unsigned char)59)));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                arr_22 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (unsigned char)59);
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned char i_7 = 4; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) (unsigned char)196);
                            var_20 = ((/* implicit */signed char) -1213405161);
                            arr_29 [(signed char)17] [i_4] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (unsigned char)64);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (unsigned char)60);
                var_22 = ((/* implicit */int) (_Bool)0);
                var_23 = -1213405180;
            }
            for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_24 = ((/* implicit */short) (_Bool)1);
                arr_34 [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)54);
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) 5861015946451538706LL);
                            var_26 = ((/* implicit */_Bool) -1213405161);
                            var_27 = ((/* implicit */unsigned short) 3818851966004687327LL);
                        }
                    } 
                } 
                arr_41 [i_8] [i_4] [i_0] = (_Bool)0;
                arr_42 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            }
            arr_43 [i_4] [i_4] = ((/* implicit */short) (unsigned short)8060);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (unsigned char)59))));
            var_29 = 4004323600U;
            arr_46 [i_11] [i_11] = ((/* implicit */signed char) (unsigned short)16256);
        }
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            arr_50 [i_12] = ((/* implicit */short) 2321669048U);
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) 4470550334417060220LL))));
        }
        for (int i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            arr_54 [i_0] [i_0] = ((/* implicit */int) (unsigned short)16258);
            arr_55 [i_0] [(unsigned short)9] = (unsigned short)28311;
        }
        var_31 += ((/* implicit */short) (_Bool)1);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_14 = 2; i_14 < 13; i_14 += 4) 
    {
        arr_59 [i_14] = ((/* implicit */unsigned long long int) (unsigned short)16258);
        /* LoopNest 3 */
        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (unsigned int i_16 = 1; i_16 < 14; i_16 += 2) 
            {
                for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    {
                        var_32 ^= ((/* implicit */int) (signed char)122);
                        var_33 = ((/* implicit */short) (_Bool)1);
                        arr_69 [i_15] [i_16] = ((/* implicit */short) (unsigned char)197);
                        arr_70 [i_14] [i_15] [i_16 - 1] [i_17] = 5861015946451538706LL;
                    }
                } 
            } 
        } 
    }
}
