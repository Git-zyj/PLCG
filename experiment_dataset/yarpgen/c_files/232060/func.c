/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232060
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) 8067929336045527997ULL);
        arr_2 [i_0] [i_0] = ((/* implicit */int) 9167449926204874464LL);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) 10378814737664023619ULL);
                    arr_7 [i_2] [i_1] [i_0] [(unsigned short)14] = 10378814737664023618ULL;
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_17 [i_5] [14U] [14U] = 2322975744U;
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) (signed char)0);
                            var_16 = ((/* implicit */_Bool) (unsigned short)22072);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_17 = (short)32767;
                            var_18 = ((/* implicit */int) 10378814737664023619ULL);
                        }
                        arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)40);
                    }
                } 
            } 
        } 
        arr_25 [i_3] = ((/* implicit */_Bool) (signed char)0);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) -1583668814);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) 8067929336045527997ULL);
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) 4611686018427387872ULL);
                var_22 = ((/* implicit */unsigned int) 5312117795317236562LL);
                var_23 = 10378814737664023618ULL;
            }
            for (int i_12 = 1; i_12 < 14; i_12 += 1) 
            {
                var_24 = ((/* implicit */int) (unsigned short)3540);
                arr_37 [i_10] = ((/* implicit */signed char) 10378814737664023618ULL);
            }
            for (unsigned int i_13 = 1; i_13 < 14; i_13 += 4) 
            {
                arr_40 [i_13] [i_13] [i_13] [i_10] = ((/* implicit */int) 8067929336045527996ULL);
                var_25 = 10378814737664023600ULL;
                var_26 = ((/* implicit */unsigned int) (short)27106);
                arr_41 [i_10] [i_9] [i_9] = ((/* implicit */_Bool) (short)8390);
            }
            var_27 = ((/* implicit */short) (signed char)-1);
            arr_42 [i_10] [i_10] = ((/* implicit */_Bool) (signed char)-10);
        }
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            arr_47 [i_14] [(unsigned short)1] [i_9] = ((/* implicit */unsigned char) (signed char)105);
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                arr_51 [i_9] = ((/* implicit */unsigned long long int) (signed char)105);
                /* LoopSeq 4 */
                for (long long int i_16 = 3; i_16 < 12; i_16 += 1) 
                {
                    arr_55 [i_9] [i_14] [i_15] [i_16] = ((/* implicit */unsigned char) 4294967295U);
                    arr_56 [i_16] [i_16] = ((/* implicit */signed char) 2147483647);
                    arr_57 [i_16] = ((/* implicit */short) 0U);
                    var_28 = ((/* implicit */unsigned char) (signed char)0);
                }
                for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    arr_60 [i_15] = ((/* implicit */unsigned long long int) 8U);
                    arr_61 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) -196925574);
                    arr_62 [i_9] [i_14] [i_15] [(unsigned char)13] [i_17] [i_17] = ((/* implicit */unsigned char) 8067929336045527991ULL);
                    var_29 = ((/* implicit */short) (signed char)0);
                    arr_63 [i_9] [9] [i_9] [i_17] [i_17] [i_9] = ((/* implicit */unsigned int) -797431877);
                }
                for (int i_18 = 3; i_18 < 14; i_18 += 4) 
                {
                    arr_66 [12U] [2ULL] = ((/* implicit */signed char) 10378814737664023618ULL);
                    var_30 = ((/* implicit */unsigned short) (short)15744);
                }
                for (unsigned int i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) (signed char)-1);
                    var_32 = ((/* implicit */unsigned long long int) (signed char)122);
                    var_33 = ((/* implicit */int) (_Bool)0);
                }
                var_34 = ((/* implicit */int) (short)-4269);
                var_35 = ((/* implicit */unsigned short) (signed char)99);
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_36 = ((/* implicit */short) (signed char)0);
                arr_73 [i_9] [i_14] [i_20] [(unsigned short)11] = ((/* implicit */signed char) (_Bool)1);
            }
            var_37 = ((/* implicit */long long int) 274376513U);
        }
        for (signed char i_21 = 0; i_21 < 15; i_21 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_22 = 1; i_22 < 13; i_22 += 1) 
            {
                for (unsigned long long int i_23 = 3; i_23 < 14; i_23 += 3) 
                {
                    {
                        arr_84 [i_23] [i_21] [i_23] [i_23] = ((/* implicit */unsigned long long int) 1770893727U);
                        arr_85 [13U] [i_23] [i_23] [i_9] = 10378814737664023613ULL;
                        arr_86 [i_23] = ((/* implicit */int) (short)8802);
                        arr_87 [i_23] = ((/* implicit */short) 3ULL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (signed char i_25 = 0; i_25 < 15; i_25 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_26 = 0; i_26 < 15; i_26 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned short) (signed char)-55);
                            arr_96 [i_26] [(signed char)11] [i_26] [i_26] [(signed char)11] [i_25] [i_26] = ((/* implicit */short) 10378814737664023619ULL);
                        }
                        /* vectorizable */
                        for (unsigned char i_27 = 0; i_27 < 15; i_27 += 3) /* same iter space */
                        {
                            arr_100 [i_27] [i_27] [i_27] [i_27] = ((/* implicit */_Bool) 3583803672052778260ULL);
                            var_39 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        arr_101 [(signed char)12] [i_21] = ((/* implicit */short) 4064U);
                    }
                } 
            } 
            var_40 = ((/* implicit */_Bool) 4294963232U);
            arr_102 [i_9] = ((/* implicit */unsigned long long int) (signed char)17);
            var_41 = ((/* implicit */unsigned char) (signed char)-105);
        }
        for (signed char i_28 = 0; i_28 < 15; i_28 += 1) 
        {
            arr_105 [i_28] = ((/* implicit */unsigned short) 8067929336045528003ULL);
            /* LoopSeq 3 */
            for (unsigned int i_29 = 1; i_29 < 13; i_29 += 1) 
            {
                arr_109 [i_9] [i_28] [i_29] [i_29] = ((/* implicit */short) 10378814737664023638ULL);
                var_42 = ((/* implicit */unsigned int) (signed char)0);
                var_43 = ((/* implicit */unsigned int) (short)30296);
                arr_110 [i_28] [i_28] [i_28] [i_28] = ((/* implicit */unsigned short) (signed char)0);
            }
            for (unsigned short i_30 = 0; i_30 < 15; i_30 += 3) /* same iter space */
            {
                arr_114 [i_9] [i_9] [i_28] [i_28] = ((/* implicit */unsigned short) -1419468540);
                arr_115 [i_9] [i_9] [i_28] [i_28] = ((/* implicit */_Bool) (signed char)8);
                /* LoopSeq 1 */
                for (unsigned char i_31 = 0; i_31 < 15; i_31 += 1) 
                {
                    arr_119 [i_28] = ((/* implicit */signed char) (short)11444);
                    arr_120 [i_9] [i_28] [i_9] [i_28] = ((/* implicit */short) (signed char)-27);
                    var_44 = ((/* implicit */short) (signed char)-27);
                }
                arr_121 [i_28] = ((/* implicit */unsigned long long int) (short)4269);
            }
            for (unsigned short i_32 = 0; i_32 < 15; i_32 += 3) /* same iter space */
            {
                arr_124 [i_32] [i_28] [i_9] = 8726919205695537468ULL;
                arr_125 [i_9] [i_28] [i_28] = ((/* implicit */short) (signed char)-18);
            }
        }
        var_45 = ((/* implicit */unsigned int) (signed char)18);
        arr_126 [11U] = ((/* implicit */unsigned long long int) (signed char)-105);
    }
    var_46 = ((/* implicit */unsigned long long int) var_8);
}
