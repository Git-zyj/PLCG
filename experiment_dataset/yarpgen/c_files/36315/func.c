/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36315
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_13 [i_2] [i_0] [(short)20] [i_2] [8ULL] |= ((/* implicit */unsigned char) -755100437);
                        var_15 *= ((/* implicit */long long int) (short)1);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) var_10);
        arr_14 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
        var_17 += ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        var_18 = ((/* implicit */unsigned long long int) var_13);
    }
    var_19 = ((/* implicit */unsigned int) (signed char)14);
    var_20 = ((/* implicit */int) 268435455LL);
    /* LoopSeq 4 */
    for (int i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) (_Bool)1);
        arr_18 [i_4 + 1] = 1711507527131882713LL;
        arr_19 [i_4] = ((/* implicit */_Bool) 2012651308744589552ULL);
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        arr_23 [i_5] &= ((/* implicit */signed char) var_1);
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            for (unsigned int i_7 = 4; i_7 < 14; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) 268435462LL);
                    var_23 = ((/* implicit */unsigned char) min((var_23), ((unsigned char)254)));
                }
            } 
        } 
        var_24 = ((/* implicit */short) 1861353011);
    }
    for (unsigned char i_8 = 3; i_8 < 12; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            arr_33 [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) var_4);
            var_25 = ((/* implicit */signed char) 1861353011);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                arr_37 [i_8] [i_8 + 1] [i_9] [i_10] = ((/* implicit */unsigned char) var_12);
                var_26 = ((/* implicit */signed char) -3118220304255179802LL);
                var_27 = ((/* implicit */unsigned long long int) (unsigned short)43663);
            }
            var_28 |= ((/* implicit */unsigned char) 3048690653U);
        }
        for (signed char i_11 = 1; i_11 < 11; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                for (unsigned char i_13 = 1; i_13 < 13; i_13 += 2) 
                {
                    {
                        arr_49 [i_8] [i_8] [(short)7] [i_12] [i_8] = ((/* implicit */long long int) var_3);
                        var_29 = ((/* implicit */unsigned int) var_2);
                        arr_50 [i_8] = ((/* implicit */long long int) 3332764549U);
                        arr_51 [i_8] [i_8] [i_12] [3LL] = ((/* implicit */unsigned int) var_2);
                        var_30 |= ((/* implicit */int) 4093409331U);
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) var_2))));
            var_32 = ((/* implicit */long long int) var_14);
        }
        var_33 = ((/* implicit */signed char) (_Bool)1);
        var_34 |= ((/* implicit */unsigned short) (unsigned char)70);
    }
    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        var_35 = ((/* implicit */unsigned int) 36028779839094784LL);
        var_36 &= ((/* implicit */long long int) var_9);
        var_37 -= ((/* implicit */unsigned short) 4520610918431543777LL);
        arr_55 [i_14] = ((/* implicit */int) (short)30917);
    }
}
