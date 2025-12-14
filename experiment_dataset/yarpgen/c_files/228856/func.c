/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228856
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) arr_0 [i_0]);
        var_13 = ((/* implicit */long long int) ((unsigned short) ((signed char) arr_2 [i_0])));
        arr_3 [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_1 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_1]));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((6784218650965242686ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6269)))));
            var_15 = ((/* implicit */signed char) ((long long int) arr_5 [i_2]));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_16 += ((/* implicit */signed char) arr_5 [i_1]);
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((signed char) arr_15 [i_5 - 1] [i_4 + 1] [i_4 - 1]));
                        var_18 = ((((/* implicit */int) arr_15 [i_1] [i_1] [i_4 - 1])) + (((/* implicit */int) arr_15 [i_1] [i_3] [i_4 - 1])));
                        var_19 = ((/* implicit */_Bool) arr_9 [i_5 + 1]);
                        var_20 = ((/* implicit */short) ((arr_11 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_6 = 2; i_6 < 17; i_6 += 4) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            arr_27 [i_1] [i_8] [i_7] [i_7] [i_1] [i_1] = ((/* implicit */short) ((signed char) arr_18 [i_7] [i_7 - 1] [i_6 + 1] [i_6 - 1]));
                            var_21 = ((/* implicit */short) arr_9 [i_7]);
                            arr_28 [i_1] [i_1] [i_7] = ((/* implicit */_Bool) ((unsigned int) arr_7 [i_6 - 1] [i_7 - 1]));
                            arr_29 [i_1] [i_7] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */short) ((long long int) ((_Bool) (signed char)39)));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_7 [i_1] [i_1]))));
        }
        for (short i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
        {
            arr_32 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_30 [i_1])));
            var_23 = ((unsigned short) ((_Bool) arr_20 [i_1] [i_1] [i_1]));
        }
        /* LoopNest 3 */
        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((short) (short)-6269));
                        var_25 = ((/* implicit */signed char) arr_11 [i_11]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_14 = 1; i_14 < 16; i_14 += 1) 
        {
            var_26 = ((/* implicit */_Bool) arr_26 [(short)4]);
            var_27 = ((/* implicit */long long int) ((short) arr_38 [i_14 + 1] [i_14 + 1] [i_14 + 1]));
            var_28 = ((/* implicit */signed char) arr_4 [i_14]);
        }
        for (int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            var_29 = ((/* implicit */_Bool) arr_24 [i_13] [i_15]);
            var_30 = ((/* implicit */int) ((short) ((arr_21 [i_13] [i_13] [i_13] [i_13]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_13]))))));
            var_31 = ((/* implicit */unsigned short) arr_21 [i_13] [i_13] [i_13] [i_15]);
            var_32 = ((/* implicit */unsigned char) arr_36 [i_15]);
            arr_49 [i_13] [i_13] = ((/* implicit */signed char) arr_47 [i_13] [i_15]);
        }
        for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            arr_52 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_16])) > (((/* implicit */int) arr_33 [i_16]))));
            var_33 += ((/* implicit */unsigned char) arr_12 [i_13] [i_13]);
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 2) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_13] [i_13] [i_17] [i_18])) + (((/* implicit */int) arr_50 [i_13]))));
                        arr_59 [i_13] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_16] [i_16] [i_16] [i_16])) != (((/* implicit */int) arr_39 [i_13] [i_16] [i_17] [i_18]))));
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_22 [i_16] [i_16] [i_16] [i_13])) ^ (((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_13])))));
            arr_60 [i_16] [i_13] = ((/* implicit */unsigned char) arr_42 [i_16]);
        }
        for (unsigned int i_19 = 0; i_19 < 17; i_19 += 4) 
        {
            var_36 = ((short) arr_18 [i_13] [i_13] [i_19] [i_19]);
            arr_63 [i_19] = ((/* implicit */unsigned char) arr_9 [i_19]);
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    {
                        var_37 = ((/* implicit */short) arr_1 [i_13]);
                        arr_70 [i_13] [i_13] [i_20] = ((/* implicit */long long int) ((short) arr_44 [i_13] [i_19] [i_20]));
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_26 [i_19]))));
                        var_39 = ((/* implicit */unsigned char) ((arr_68 [i_13] [i_13] [i_20] [i_13] [i_21] [i_21]) != (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_13] [i_19] [i_20])))));
                    }
                } 
            } 
            arr_71 [i_13] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_13 [i_13])) / (((arr_19 [i_13] [i_13]) / (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_13] [i_13] [i_19])))))));
        }
        arr_72 [i_13] = ((/* implicit */unsigned int) ((short) arr_16 [(short)6]));
    }
    var_40 &= var_8;
    var_41 = ((unsigned short) var_0);
    /* LoopSeq 3 */
    for (int i_22 = 4; i_22 < 23; i_22 += 4) 
    {
        arr_75 [i_22] = ((/* implicit */short) arr_74 [i_22]);
        arr_76 [i_22] = ((/* implicit */short) arr_73 [i_22 - 1] [i_22 - 2]);
    }
    for (int i_23 = 1; i_23 < 14; i_23 += 1) 
    {
        var_42 &= ((/* implicit */short) ((arr_16 [4LL]) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_73 [i_23] [i_23 + 1])) + (((/* implicit */int) arr_50 [i_23])))))));
        var_43 = ((/* implicit */unsigned char) ((_Bool) arr_66 [i_23]));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 15; i_24 += 3) 
        {
            for (short i_25 = 0; i_25 < 15; i_25 += 4) 
            {
                {
                    arr_83 [i_23] [i_23] [i_24] [i_23] = ((/* implicit */signed char) ((short) arr_51 [i_23] [i_24] [i_23]));
                    var_44 = ((/* implicit */unsigned long long int) ((short) ((short) arr_7 [i_23] [i_23 + 1])));
                    arr_84 [i_23] [i_23] [i_24] = ((short) ((unsigned long long int) arr_9 [i_23 - 1]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_26 = 0; i_26 < 10; i_26 += 4) 
    {
        var_45 = ((/* implicit */short) ((unsigned char) arr_37 [i_26] [i_26] [i_26]));
        arr_87 [i_26] [i_26] = ((/* implicit */short) ((unsigned long long int) arr_66 [i_26]));
        /* LoopSeq 2 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_46 = ((/* implicit */_Bool) ((unsigned short) arr_51 [i_26] [i_26] [i_26]));
            /* LoopNest 3 */
            for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 3) 
            {
                for (int i_29 = 0; i_29 < 10; i_29 += 2) 
                {
                    for (int i_30 = 0; i_30 < 10; i_30 += 4) 
                    {
                        {
                            var_47 += ((/* implicit */unsigned char) arr_15 [i_26] [i_27] [i_28]);
                            var_48 = ((/* implicit */unsigned long long int) ((_Bool) arr_45 [i_27] [i_28] [i_27]));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_31 = 0; i_31 < 10; i_31 += 1) 
        {
            var_49 = ((/* implicit */unsigned long long int) arr_97 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]);
            /* LoopSeq 1 */
            for (unsigned char i_32 = 0; i_32 < 10; i_32 += 3) 
            {
                arr_104 [i_26] [i_31] [i_32] [i_32] = ((/* implicit */short) ((unsigned char) -935487813));
                var_50 = ((/* implicit */signed char) ((unsigned char) (short)-6297));
                arr_105 [i_26] [i_26] [i_26] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_26] [i_31] [i_32])) >> (((((arr_14 [i_26] [i_31] [i_26] [i_31]) * (((/* implicit */unsigned int) arr_44 [i_32] [i_31] [i_26])))) - (2978284572U)))));
                arr_106 [i_31] [i_31] [i_31] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_32])) ^ (((/* implicit */int) arr_1 [i_26]))));
            }
        }
        arr_107 [i_26] = ((/* implicit */_Bool) arr_51 [i_26] [i_26] [i_26]);
        var_51 = ((/* implicit */signed char) arr_73 [i_26] [i_26]);
    }
}
