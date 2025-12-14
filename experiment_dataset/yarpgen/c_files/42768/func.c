/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42768
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = 0ULL;
        var_12 *= ((/* implicit */unsigned int) (signed char)21);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) 13U);
        var_14 += (signed char)21;
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) -1323744526);
            var_16 *= ((/* implicit */_Bool) 18U);
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) 2147483647);
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                var_17 = ((/* implicit */int) 2016849302813069067LL);
                /* LoopNest 2 */
                for (unsigned int i_4 = 4; i_4 < 9; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) (_Bool)0);
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 15968827275608014767ULL))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            arr_25 [i_1] [i_1] = ((/* implicit */unsigned long long int) 852294516);
            arr_26 [i_1] [i_1] [i_1] = 15968827275608014767ULL;
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (_Bool)0))));
        }
        for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 4) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (short)24))));
            arr_30 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        arr_38 [i_1] [(signed char)5] [i_7] [i_1] [i_9] = ((/* implicit */_Bool) 18446744073709551602ULL);
                        arr_39 [i_1] [i_7] [i_1] [i_8] [0ULL] = ((/* implicit */_Bool) 16682318928131088021ULL);
                        var_21 += ((/* implicit */unsigned int) (short)-6200);
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (18446744073709551612ULL)));
                        arr_40 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) 281474976710655ULL);
                    }
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            arr_44 [i_1] = ((/* implicit */short) 4294967291U);
            arr_45 [i_1] = ((/* implicit */_Bool) 4194303);
            var_23 *= ((/* implicit */int) (_Bool)1);
        }
        var_24 &= ((/* implicit */_Bool) 3064804628242233801ULL);
        var_25 *= ((/* implicit */short) 2614470018U);
    }
    for (unsigned long long int i_11 = 2; i_11 < 23; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 3; i_15 < 24; i_15 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned int) (short)6);
                                var_27 += ((/* implicit */signed char) -3226684688538338031LL);
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) 13916452088675781595ULL))));
                            }
                        } 
                    } 
                    var_29 *= ((/* implicit */unsigned int) 12338006484544406370ULL);
                    arr_63 [i_11] [i_12] [i_12] [i_11] = 13U;
                    var_30 *= ((/* implicit */unsigned long long int) -3226684688538338032LL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 25; i_17 += 1) 
            {
                {
                    arr_68 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */_Bool) -4194304);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_18 = 2; i_18 < 21; i_18 += 3) 
                    {
                        var_31 *= ((/* implicit */unsigned long long int) -67312870);
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) -3226684688538338031LL))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) -1))));
                    }
                    /* vectorizable */
                    for (unsigned int i_19 = 2; i_19 < 24; i_19 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 0; i_20 < 25; i_20 += 2) 
                        {
                            var_34 = ((/* implicit */_Bool) 10203825542929462720ULL);
                            var_35 *= ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_77 [i_16] [14U] [i_16] = ((/* implicit */unsigned long long int) -1);
                            var_36 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                            var_37 *= ((/* implicit */signed char) -1972017845);
                        }
                        arr_78 [i_11 - 2] [i_11 - 2] [(short)12] [i_19] &= ((/* implicit */unsigned long long int) 1144410557);
                        var_38 += ((/* implicit */_Bool) -1619514081);
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned int) 2477916798101536834ULL);
        var_40 = ((/* implicit */unsigned long long int) -1116533335452977208LL);
        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) -4194303))));
    }
    for (long long int i_21 = 2; i_21 < 13; i_21 += 2) 
    {
        arr_82 [i_21] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_83 [i_21 - 2] [i_21] = ((/* implicit */unsigned long long int) -3226684688538338031LL);
    }
    var_42 = ((/* implicit */unsigned int) var_4);
}
