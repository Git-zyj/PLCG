/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196755
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((signed char) arr_2 [i_0])));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((unsigned short) 2147483647))));
                var_19 = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]);
            }
            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                arr_15 [i_1] [i_1] [i_1] [i_1] = ((long long int) ((long long int) arr_5 [i_1]));
                /* LoopSeq 1 */
                for (signed char i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    arr_20 [i_1] [i_1] = (unsigned short)15;
                    var_20 = ((/* implicit */signed char) arr_1 [i_1] [i_1]);
                }
                arr_21 [i_1] = ((/* implicit */unsigned short) ((_Bool) ((long long int) arr_12 [i_1] [i_2] [i_4])));
                arr_22 [i_1] [i_2] [i_2] = ((unsigned short) (short)12224);
            }
            arr_23 [14U] [14U] [i_1 + 2] &= ((/* implicit */long long int) (unsigned short)65519);
            arr_24 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) ((unsigned char) 4294967288U))));
        }
        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) arr_14 [i_1] [i_1 - 1] [i_1] [(signed char)7]);
            arr_28 [i_1] [i_1] = (unsigned short)51618;
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned long long int) arr_26 [i_1])))));
        }
        for (unsigned short i_7 = 1; i_7 < 14; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) (unsigned char)109);
            arr_31 [i_1] [i_7 + 2] [(unsigned short)4] = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned int) 18446744073709551607ULL)))));
        }
        arr_32 [i_1] = ((/* implicit */unsigned int) ((_Bool) arr_7 [i_1] [5U]));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                {
                    arr_40 [i_8] [i_8] [i_10] [i_10] = ((/* implicit */int) 1224225678U);
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        arr_43 [i_9] [i_9] = ((/* implicit */signed char) 3478689469U);
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 15; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) ((signed char) ((unsigned int) arr_47 [i_12] [i_12 + 1] [i_12] [i_12] [i_10])));
                            var_26 = ((/* implicit */unsigned int) 2147483647);
                            var_27 = ((unsigned short) ((unsigned long long int) arr_0 [i_11]));
                            var_28 -= (_Bool)1;
                        }
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned int) arr_2 [i_8])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        arr_50 [10ULL] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_48 [i_8 - 1] [i_9] [i_10] [i_8 - 1] [(_Bool)1]);
                        arr_51 [i_13] [i_13] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */unsigned short) ((int) arr_44 [i_8] [i_8 - 1] [(unsigned short)5] [(unsigned short)5] [i_8 - 1] [i_8]));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((unsigned short) arr_1 [i_8 - 1] [i_8 - 1]))));
                    }
                    var_31 = ((/* implicit */unsigned char) (unsigned short)65518);
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_34 [10] [10]))));
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) ((_Bool) ((long long int) arr_33 [i_8 - 1])));
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    {
                        arr_59 [i_8] [i_8] = ((/* implicit */unsigned short) 4294967292U);
                        arr_60 [12U] [i_14] [12U] [i_14] [i_14] = ((/* implicit */unsigned int) (short)-8151);
                        arr_61 [i_14] [i_14] [10LL] [i_14] = ((/* implicit */unsigned char) ((long long int) arr_57 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]));
                        var_34 = ((/* implicit */unsigned int) arr_53 [i_14]);
                    }
                } 
            } 
        } 
        arr_62 [i_8] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) (unsigned char)128)));
    }
    /* LoopNest 3 */
    for (signed char i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            for (signed char i_19 = 1; i_19 < 16; i_19 += 1) 
            {
                {
                    var_35 = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((int) arr_2 [12U])))));
                    var_37 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) (signed char)42)));
                    var_38 = ((/* implicit */unsigned char) arr_63 [i_17] [i_17]);
                }
            } 
        } 
    } 
}
