/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20175
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
    var_20 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [(unsigned short)8] = ((/* implicit */unsigned char) min((7330983797631195247LL), (((/* implicit */long long int) -1630499105))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned char)122))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) 2443912885U);
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_16 [(short)6] [i_4] [i_3] [i_4] [i_1] &= ((/* implicit */_Bool) (signed char)59);
                                var_23 = ((/* implicit */unsigned char) min((var_23), ((unsigned char)15)));
                                var_24 ^= ((/* implicit */unsigned int) (unsigned char)123);
                            }
                        } 
                    } 
                    arr_17 [i_3] [i_2] = 4000235816U;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
        {
            arr_21 [i_6] [i_6] [i_1] = ((/* implicit */short) (_Bool)1);
            arr_22 [i_6] [i_6] = ((/* implicit */unsigned int) (unsigned char)76);
            arr_23 [i_1] [i_6] [i_6] = ((/* implicit */unsigned int) (signed char)9);
        }
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) 1008ULL);
            arr_26 [i_1] [i_1] [i_1] &= ((/* implicit */int) (unsigned char)199);
        }
        arr_27 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) -214761514727307541LL);
    }
    var_26 -= ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned short) 294731488U);
        /* LoopSeq 2 */
        for (int i_9 = 2; i_9 < 11; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    {
                        arr_40 [1] [1ULL] [i_10] [i_11] [i_11] [i_9 + 1] = ((/* implicit */int) max((min((max((((/* implicit */unsigned int) (short)-8745)), (4000235813U))), (((/* implicit */unsigned int) 415349515)))), (((/* implicit */unsigned int) max((-415349512), (-1034824578))))));
                        var_27 &= (unsigned char)0;
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) max((var_28), (1LL)));
            var_29 *= ((/* implicit */short) 3659006577U);
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            var_30 = 2031958807;
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        arr_48 [i_8] [i_8] [(signed char)12] [(_Bool)1] &= ((/* implicit */short) 0U);
                        var_31 -= ((/* implicit */unsigned int) 2031958806);
                    }
                } 
            } 
            arr_49 [i_12] [i_12] = 294731476U;
        }
        /* LoopSeq 3 */
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            var_32 = 4004787771U;
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) min((max((9223372036854775807LL), (4547933784160516482LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)13)), (294731503U)))))))));
            /* LoopNest 3 */
            for (unsigned int i_16 = 3; i_16 < 10; i_16 += 4) 
            {
                for (unsigned short i_17 = 2; i_17 < 13; i_17 += 1) 
                {
                    for (short i_18 = 2; i_18 < 10; i_18 += 3) 
                    {
                        {
                            arr_61 [0ULL] [i_15] [i_16 + 1] [i_16 + 1] [i_18] [i_18] [i_17] |= ((/* implicit */short) min((max((6734562056097657601LL), (((/* implicit */long long int) (signed char)106)))), (((/* implicit */long long int) (unsigned char)194))));
                            arr_62 [(_Bool)1] [i_16] [i_16 - 3] [i_16] [i_8] = ((/* implicit */int) 1091108296U);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (unsigned char)73))));
            arr_67 [i_8] [i_19] [i_19] = min(((short)-4096), ((short)-4096));
        }
        /* vectorizable */
        for (short i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            var_35 ^= ((/* implicit */unsigned int) (short)-9751);
            arr_70 [i_8 + 3] [4LL] &= ((/* implicit */_Bool) -321926096);
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 14; i_21 += 2) 
            {
                for (long long int i_22 = 3; i_22 < 13; i_22 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_23 = 0; i_23 < 14; i_23 += 2) 
                        {
                            arr_80 [i_21] [i_20] [(unsigned char)4] [i_21] [i_20] [i_21] = ((/* implicit */long long int) (signed char)-43);
                            var_36 = (unsigned char)19;
                        }
                        for (unsigned int i_24 = 0; i_24 < 14; i_24 += 2) 
                        {
                            arr_83 [i_24] [i_22] [i_20] [i_20] [i_8 + 2] = ((/* implicit */unsigned int) 1073739776);
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) 444841593U))));
                            arr_84 [i_8] [i_8] [i_20] [i_8] [i_20] = ((/* implicit */int) (unsigned char)243);
                            arr_85 [i_8] [i_21] [i_20] [i_24] = ((/* implicit */unsigned int) (unsigned char)50);
                        }
                        var_38 ^= ((/* implicit */unsigned long long int) (unsigned char)74);
                        var_39 = ((/* implicit */int) (unsigned char)222);
                        var_40 = ((/* implicit */_Bool) (short)161);
                    }
                } 
            } 
        }
    }
    var_41 = ((/* implicit */short) (unsigned char)3);
}
