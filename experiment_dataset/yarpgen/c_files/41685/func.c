/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41685
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) & (((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_8)))) | (((((/* implicit */int) var_3)) | (((/* implicit */int) var_0))))))));
    var_12 = ((/* implicit */unsigned char) var_2);
    var_13 -= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_8))))) == (var_9));
                        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)32292)) - (((/* implicit */int) (unsigned short)33244)))) % (((/* implicit */int) var_1))));
                    }
                } 
            } 
            var_16 ^= ((/* implicit */long long int) var_6);
        }
        var_17 += ((/* implicit */unsigned char) var_4);
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_18 = ((/* implicit */_Bool) ((var_10) >> (((/* implicit */int) var_2))));
                arr_16 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_10))))));
            }
            arr_17 [i_4] = ((/* implicit */signed char) var_0);
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_19 = ((/* implicit */short) var_7);
            arr_21 [i_7] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32292)) >> (((((/* implicit */int) var_1)) - (15737)))))) | (var_10)));
        }
        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
        {
            var_20 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_4))))) ^ (var_10))) < (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            arr_25 [i_4] [i_8] [i_8] = ((/* implicit */unsigned char) var_10);
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                var_21 = var_8;
                var_22 = ((/* implicit */short) var_7);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_32 [i_4] [i_8] [i_10] [i_10] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_4))))) >> (((var_9) + (6547999198201923833LL))))) ^ (((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_5)))) / (((/* implicit */int) var_7))))));
                var_23 = ((/* implicit */long long int) var_6);
            }
        }
        var_24 -= ((/* implicit */long long int) var_8);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_12 = 1; i_12 < 16; i_12 += 3) 
        {
            arr_40 [i_11] = ((/* implicit */_Bool) var_4);
            var_25 = ((/* implicit */int) var_3);
        }
        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) < (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_8))))))))));
                var_27 = var_5;
                arr_45 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)33244)) * (((/* implicit */int) (unsigned short)32292)))) ^ (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_4))))))) / (((/* implicit */int) var_1))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_1))));
                /* LoopSeq 4 */
                for (short i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_6)))))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 3; i_17 < 14; i_17 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (var_9)));
                        var_31 = ((/* implicit */unsigned short) var_7);
                    }
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_3)) - (15967)))));
                }
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) 
                {
                    arr_57 [i_11] = ((/* implicit */_Bool) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_33 = ((/* implicit */_Bool) var_5);
                    arr_58 [i_15] [i_11] [i_11] [i_11] = ((/* implicit */signed char) var_0);
                    var_34 = ((/* implicit */int) var_3);
                }
                for (unsigned char i_19 = 1; i_19 < 16; i_19 += 2) 
                {
                    var_35 = ((/* implicit */short) var_10);
                    var_36 += ((/* implicit */_Bool) ((var_10) & (var_10)));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) var_7))));
                    var_38 = ((/* implicit */_Bool) var_0);
                    var_39 = ((/* implicit */short) var_2);
                }
                for (signed char i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_21 = 2; i_21 < 14; i_21 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned char) var_5);
                        var_41 = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) | (((/* implicit */int) var_8)))) * (((/* implicit */int) var_1))));
                        var_42 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))) == (((((/* implicit */int) var_1)) * (((/* implicit */int) var_3))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 18; i_22 += 4) 
                    {
                        arr_70 [i_11] [i_20] [i_11] [i_11] = ((/* implicit */unsigned short) var_8);
                        arr_71 [i_11] [i_11] [i_13] [i_15] [i_20] [i_22] = ((/* implicit */unsigned short) var_10);
                    }
                    for (short i_23 = 3; i_23 < 16; i_23 += 4) 
                    {
                        var_43 = var_1;
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33243)) << (((/* implicit */int) var_2)))))));
                        var_45 = ((/* implicit */long long int) var_8);
                        var_46 += ((/* implicit */unsigned short) ((((var_10) >> (((((/* implicit */int) var_5)) - (18778))))) < (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                    arr_74 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33244)) ^ (((/* implicit */int) (unsigned short)33246))));
                }
                arr_75 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) var_9);
                var_47 = var_5;
            }
        }
        for (long long int i_24 = 3; i_24 < 17; i_24 += 4) 
        {
            var_48 += ((/* implicit */unsigned short) ((var_8) && (((/* implicit */_Bool) var_1))));
            /* LoopSeq 1 */
            for (short i_25 = 4; i_25 < 16; i_25 += 4) 
            {
                var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2)))) * (((/* implicit */int) var_0)))))));
                arr_82 [i_25] [i_24 + 1] [i_24 + 1] [i_11] = ((/* implicit */short) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_5))));
                var_50 += var_0;
                var_51 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)33243)) - (((/* implicit */int) (unsigned short)33244))));
            }
            /* LoopSeq 4 */
            for (unsigned char i_26 = 1; i_26 < 15; i_26 += 2) 
            {
                var_52 -= ((/* implicit */unsigned char) ((var_9) & (((var_10) & (var_10)))));
                var_53 = ((/* implicit */unsigned short) var_8);
            }
            /* vectorizable */
            for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
            {
                var_54 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (signed char i_28 = 0; i_28 < 18; i_28 += 3) 
                {
                    arr_90 [(unsigned char)15] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) var_4);
                    var_55 = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) | (((/* implicit */int) var_6)))) - (((/* implicit */int) var_6))));
                    var_56 = var_7;
                }
                var_57 = ((/* implicit */short) var_1);
                arr_91 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            }
            for (int i_29 = 0; i_29 < 18; i_29 += 2) 
            {
                arr_94 [i_11] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)32268)) & (((/* implicit */int) (unsigned short)33273))));
                var_58 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (var_10)))) / (((/* implicit */int) ((((((/* implicit */int) var_4)) | (((/* implicit */int) var_3)))) < (((/* implicit */int) var_1)))))));
                var_59 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((((/* implicit */int) (unsigned short)32296)) ^ (((/* implicit */int) (unsigned short)32296))))));
            }
            for (signed char i_30 = 0; i_30 < 18; i_30 += 1) 
            {
                arr_98 [i_11] [i_11] [i_24 - 1] [i_11] = ((((/* implicit */int) var_2)) != (((/* implicit */int) var_0)));
                var_60 *= ((/* implicit */signed char) ((((/* implicit */int) var_4)) % (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)32274)) != (((/* implicit */int) var_5))))) <= (((/* implicit */int) var_7)))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_31 = 0; i_31 < 18; i_31 += 3) 
        {
            arr_102 [i_11] [i_31] = ((/* implicit */unsigned short) ((((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_7))))) / (((((var_9) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (170)))))));
            arr_103 [i_11] = ((/* implicit */int) ((((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_1))))) | (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            /* LoopSeq 1 */
            for (signed char i_32 = 0; i_32 < 18; i_32 += 2) 
            {
                var_61 = ((/* implicit */short) var_8);
                var_62 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32268)) * (((/* implicit */int) (unsigned short)33243))));
                var_63 -= ((/* implicit */signed char) var_2);
                /* LoopSeq 1 */
                for (unsigned short i_33 = 0; i_33 < 18; i_33 += 4) 
                {
                    var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) var_2))));
                    var_65 += ((/* implicit */_Bool) var_0);
                }
                arr_108 [i_11] [i_11] [i_32] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) - (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_10))))));
            }
            arr_109 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_6))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_10)))));
        }
        arr_110 [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) var_2)) + (((/* implicit */int) var_1)))) < (((/* implicit */int) var_2))))) > (((/* implicit */int) var_7))));
        arr_111 [i_11] [i_11] = ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_7)) / (((((/* implicit */int) var_7)) / (((/* implicit */int) var_0)))))));
    }
}
