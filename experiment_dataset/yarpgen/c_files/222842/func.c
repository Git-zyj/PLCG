/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222842
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            arr_5 [i_0] = ((short) arr_0 [i_0 - 1]);
            var_20 = ((/* implicit */int) arr_3 [2U] [i_0] [i_1]);
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 7ULL))));
                            var_22 |= ((/* implicit */int) arr_3 [i_0 - 3] [(_Bool)1] [i_0]);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) arr_1 [i_2]);
            arr_18 [i_0] [i_0] = ((unsigned int) arr_6 [i_0 - 1]);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((unsigned short) (short)21));
                        var_25 = ((/* implicit */short) (_Bool)1);
                        var_26 |= arr_4 [i_0] [i_2] [i_7];
                        arr_23 [i_0] [i_6] [i_6] [i_7] [i_7] [i_2] = ((/* implicit */unsigned int) (short)1333);
                    }
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            arr_26 [i_0] [i_8] [i_8] = ((/* implicit */short) ((unsigned short) ((unsigned int) ((unsigned long long int) 3948472393689399863ULL))));
            arr_27 [i_8] [i_8] = ((/* implicit */short) arr_11 [i_0 - 3] [i_8] [i_0] [i_8]);
        }
        var_27 *= ((/* implicit */unsigned long long int) 869275999);
        var_28 = ((/* implicit */short) 958320386U);
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            var_29 = ((/* implicit */unsigned short) ((short) ((_Bool) arr_11 [i_9] [i_9] [i_0] [i_0 + 1])));
            var_30 = ((/* implicit */unsigned long long int) ((unsigned short) ((int) arr_10 [i_9] [i_9] [i_9] [i_0])));
            /* LoopSeq 4 */
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_31 = ((/* implicit */unsigned short) ((short) ((unsigned long long int) arr_14 [i_0])));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_0 [i_0 + 1]))))));
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)60963);
                var_33 = ((/* implicit */int) ((short) arr_21 [i_0 + 1] [i_0] [i_0 - 3] [i_0]));
            }
            for (unsigned long long int i_11 = 3; i_11 < 21; i_11 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned short) arr_19 [i_9]);
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        {
                            arr_44 [21] [i_9] [i_9] [i_12] [23U] = ((/* implicit */int) ((long long int) arr_19 [i_0 + 3]));
                            var_35 = ((/* implicit */unsigned long long int) -1138142421);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_14 = 3; i_14 < 21; i_14 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */int) 4294967295U);
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        {
                            arr_53 [i_0] [i_15] [i_16] = ((long long int) arr_11 [i_16] [i_9] [19U] [i_15]);
                            arr_54 [i_0] [i_9] [i_9] [i_15] [i_16] &= ((/* implicit */signed char) arr_39 [i_0] [i_0 + 2] [i_0 + 2] [i_0]);
                            var_37 = arr_15 [7ULL] [i_0];
                        }
                    } 
                } 
                var_38 |= ((/* implicit */unsigned long long int) arr_39 [i_0] [(short)6] [i_14] [i_14]);
                arr_55 [i_14] [i_9] [i_14 - 3] |= ((/* implicit */unsigned int) arr_36 [i_14 + 3] [i_9] [i_0 + 3]);
            }
            for (int i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                var_39 = ((/* implicit */short) ((unsigned long long int) arr_40 [(signed char)11] [i_9] [i_17] [i_9] [i_0 + 1] [i_17] [i_17]));
                var_40 *= ((/* implicit */unsigned int) arr_57 [i_0 - 3] [16LL] [i_17]);
                var_41 = ((/* implicit */_Bool) ((int) (short)8849));
            }
            var_42 = ((/* implicit */long long int) ((int) arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1]));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            var_43 = ((/* implicit */long long int) arr_36 [i_0] [i_0] [i_18]);
            var_44 |= ((/* implicit */_Bool) (signed char)-84);
            var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((_Bool) ((unsigned int) arr_59 [i_0]))))));
            var_46 = (short)-27380;
            var_47 ^= arr_22 [i_0 + 3] [i_18] [i_18] [i_0];
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            var_48 *= ((/* implicit */unsigned long long int) 3254441707U);
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                for (short i_21 = 2; i_21 < 22; i_21 += 2) 
                {
                    {
                        var_49 = ((/* implicit */unsigned long long int) (short)13535);
                        arr_69 [9ULL] = ((/* implicit */int) arr_11 [i_0] [i_21 - 2] [i_20] [i_0 + 2]);
                    }
                } 
            } 
            var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) arr_40 [i_0] [i_0] [i_19] [i_0 + 3] [i_0 - 3] [i_0 + 3] [4LL]))));
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_22 = 0; i_22 < 15; i_22 += 1) 
    {
        for (int i_23 = 3; i_23 < 13; i_23 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 2; i_24 < 14; i_24 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 3; i_25 < 13; i_25 += 3) 
                    {
                        for (int i_26 = 3; i_26 < 12; i_26 += 3) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) arr_67 [i_22] [i_22] [i_24] [3U])));
                                arr_84 [i_26] [i_26] |= ((/* implicit */_Bool) ((int) 16783244137359572749ULL));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) arr_75 [i_22] [i_23 + 2] [i_24]))));
                    arr_85 [i_22] [i_22] [i_23 - 1] [14U] = ((int) ((short) ((long long int) arr_51 [i_23 - 1] [i_22] [10] [i_24] [i_22])));
                }
                var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) (signed char)-100))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_27 = 1; i_27 < 11; i_27 += 2) 
                {
                    arr_88 [i_22] [i_27] [i_27] = ((/* implicit */unsigned long long int) arr_33 [i_22] [i_23 - 1] [i_27]);
                    arr_89 [i_27] = ((/* implicit */short) ((unsigned long long int) (short)-26));
                    var_54 += ((/* implicit */short) ((signed char) 3634138818U));
                    var_55 = arr_22 [i_22] [(signed char)7] [i_27] [i_27 + 3];
                }
            }
        } 
    } 
}
