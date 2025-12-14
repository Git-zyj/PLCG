/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49513
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [(signed char)4])) ? (((/* implicit */int) arr_13 [i_1] [(short)0] [i_0 + 2] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_13 [i_1] [i_3] [(short)6] [i_2] [i_1]))))) ? (((/* implicit */int) arr_13 [i_1] [i_4 + 2] [i_4] [i_4 + 2] [i_4 - 1])) : ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                                arr_14 [i_1] = ((signed char) arr_4 [i_3 - 1]);
                                arr_15 [i_0] [i_1] [i_2] [(signed char)3] = ((/* implicit */short) min((((/* implicit */int) max((arr_13 [i_1] [i_4 + 2] [i_4] [i_4 + 2] [i_1]), (arr_13 [i_1] [i_4 - 1] [(short)7] [i_4 + 2] [i_4])))), (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)0)), ((short)-13063)))) ? (((/* implicit */int) ((short) arr_0 [i_2] [i_3]))) : (((/* implicit */int) arr_8 [i_0]))))));
                                var_16 = ((short) ((((/* implicit */int) max(((short)21796), (((/* implicit */short) (signed char)-29))))) - (((/* implicit */int) min((((/* implicit */short) (signed char)-117)), (var_3))))));
                                var_17 = ((/* implicit */signed char) max((((/* implicit */int) arr_7 [i_2] [(signed char)6] [(signed char)6])), (((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_4 + 2] [i_3 + 2])) ? (((((/* implicit */int) arr_9 [i_4] [i_2] [i_4] [i_2 - 2])) * (((/* implicit */int) arr_2 [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_4])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 6; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [(short)8] [(short)8] [(short)8] [(short)8] [i_1] = ((/* implicit */signed char) min((arr_6 [i_6 - 1]), (max((arr_6 [i_6 - 1]), (arr_6 [i_6 + 1])))));
                                var_18 = ((/* implicit */signed char) (((~((~(((/* implicit */int) arr_9 [(short)9] [i_2 + 1] [i_5 + 4] [i_6])))))) + (((((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (short)1841)))) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) (signed char)15))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 9; i_7 += 4) 
                    {
                        for (signed char i_8 = 3; i_8 < 8; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_1] [(signed char)4] [i_1] [i_2 + 2] [i_7 - 2] [i_8] = ((/* implicit */signed char) (((((~(((/* implicit */int) ((((/* implicit */_Bool) (short)-21797)) || (((/* implicit */_Bool) (short)-4816))))))) + (2147483647))) << ((((~(((/* implicit */int) (signed char)-6)))) - (5)))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_10 [i_0 - 1] [(signed char)1] [i_7 + 1] [i_1]))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_20 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_7])) : (((/* implicit */int) arr_9 [(short)4] [i_2] [i_7] [i_8 + 1])))))) : (((((/* implicit */int) (short)-29874)) + (((/* implicit */int) (short)3))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 7; i_9 += 1) 
                    {
                        for (signed char i_10 = 2; i_10 < 8; i_10 += 2) 
                        {
                            {
                                arr_34 [i_1] [i_9] [i_9 - 1] [i_10] [i_10 + 2] [(signed char)2] [i_2] = ((/* implicit */signed char) min(((short)-24124), ((short)29892)));
                                var_20 -= min(((short)-12268), (((/* implicit */short) (signed char)-112)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 2; i_11 < 7; i_11 += 4) 
    {
        for (signed char i_12 = 3; i_12 < 9; i_12 += 3) 
        {
            for (short i_13 = 1; i_13 < 7; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 3; i_14 < 8; i_14 += 2) 
                    {
                        for (signed char i_15 = 2; i_15 < 9; i_15 += 2) 
                        {
                            {
                                var_21 = arr_3 [i_15] [i_15 - 2];
                                var_22 = ((short) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_16 = 1; i_16 < 9; i_16 += 1) 
                    {
                        for (signed char i_17 = 1; i_17 < 7; i_17 += 2) 
                        {
                            {
                                var_23 = arr_0 [i_12] [i_16];
                                var_24 = arr_18 [i_11 + 2] [i_12 - 1] [i_16] [i_16];
                                var_25 -= ((/* implicit */short) ((((/* implicit */int) (short)-27279)) | (((/* implicit */int) (signed char)(-127 - 1)))));
                                arr_51 [i_16] [i_16] [i_13] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) (short)0)))) + (2147483647))) >> (((((/* implicit */int) arr_36 [i_11 - 2])) - (18743)))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)26105)))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_3 [i_11 + 3] [i_11])) ^ (((/* implicit */int) arr_46 [i_17] [i_11] [i_17] [i_12] [(short)5]))))))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) arr_31 [i_16] [i_17 + 1])) : ((~(((/* implicit */int) min((arr_32 [(short)6] [i_11] [i_11] [(signed char)5] [i_16]), (arr_24 [i_11 - 1] [i_13] [i_16] [i_17]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 2; i_18 < 9; i_18 += 1) 
                    {
                        for (short i_19 = 2; i_19 < 9; i_19 += 1) 
                        {
                            {
                                arr_56 [i_19 - 2] [i_18] [i_13 - 1] [(short)8] [i_11] &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_27 [i_19] [i_19 - 1] [i_19 - 2] [i_11] [i_19 - 2] [i_19 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_11] [i_11])) ? (((/* implicit */int) arr_35 [i_11] [i_18])) : (((/* implicit */int) arr_31 [i_11] [(short)0]))))) && (((/* implicit */_Bool) ((signed char) arr_33 [i_12]))))))));
                                arr_57 [i_11] [i_13 + 2] [i_11] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_27 [i_11 + 1] [i_11 + 1] [i_12] [i_11] [i_12 - 2] [i_12])) ? (((/* implicit */int) arr_27 [(signed char)2] [i_12] [(signed char)2] [i_11] [i_12 + 1] [i_18 + 1])) : (((/* implicit */int) arr_27 [i_11] [i_12] [i_12] [i_11] [i_12 + 1] [i_13 + 1]))))));
                                var_27 -= ((/* implicit */short) (signed char)31);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_20 = 4; i_20 < 8; i_20 += 2) 
                    {
                        for (short i_21 = 1; i_21 < 9; i_21 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) max((((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_33 [(short)3])))))), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_20])) || (((/* implicit */_Bool) arr_40 [i_13] [i_20] [i_13]))))), (((((/* implicit */int) (short)-256)) % (((/* implicit */int) (signed char)115))))))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) << (((((/* implicit */int) arr_46 [i_11] [(signed char)9] [i_13] [(signed char)9] [i_21 + 1])) + (7769)))))) ? (((/* implicit */int) arr_32 [(signed char)2] [i_12 - 1] [i_13 + 1] [i_11] [i_20])) : (((/* implicit */int) arr_22 [i_21] [i_21 - 1] [i_21 - 1] [i_12 - 3] [i_11]))))) ? ((~(((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_31 [i_20] [i_20])))))) : (((/* implicit */int) ((short) arr_30 [i_11 - 2] [i_12 - 2] [i_20 + 1] [i_20 - 4] [i_11 - 2])))));
                                arr_62 [i_20] [(short)1] [i_20] [i_20] [i_12 - 1] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_5 [i_11] [i_11 + 2]))))));
                                var_30 = ((/* implicit */short) (~((~(((/* implicit */int) max((arr_35 [i_20] [i_20]), (arr_16 [i_11] [i_13] [i_21 - 1] [i_20 - 2] [i_12 - 2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_22 = 1; i_22 < 20; i_22 += 2) 
    {
        for (signed char i_23 = 2; i_23 < 21; i_23 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_24 = 1; i_24 < 20; i_24 += 4) 
                {
                    for (short i_25 = 1; i_25 < 20; i_25 += 3) 
                    {
                        for (short i_26 = 3; i_26 < 21; i_26 += 3) 
                        {
                            {
                                arr_74 [i_23] [i_23 - 2] [i_23] [(signed char)6] [i_23] &= ((/* implicit */short) (~(((/* implicit */int) arr_69 [i_24] [i_25] [i_22] [i_23] [i_26 + 1]))));
                                var_31 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_70 [i_22] [i_22] [i_24] [i_25])) & (((/* implicit */int) arr_72 [i_22] [i_24] [i_24] [i_25 + 2] [i_26 + 1]))))) ? (((((/* implicit */int) (signed char)-122)) ^ (((/* implicit */int) (short)24370)))) : (((((/* implicit */int) (short)-17976)) ^ (((/* implicit */int) arr_67 [i_24 + 2] [i_25 + 2] [i_26 + 1])))))), (((/* implicit */int) arr_72 [i_24] [i_24] [i_22] [i_26 - 2] [i_22]))));
                                var_32 = ((/* implicit */signed char) max((((/* implicit */int) (short)32762)), ((~(((/* implicit */int) (short)-16384))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_27 = 2; i_27 < 19; i_27 += 2) 
                {
                    for (short i_28 = 1; i_28 < 20; i_28 += 4) 
                    {
                        for (signed char i_29 = 4; i_29 < 21; i_29 += 2) 
                        {
                            {
                                arr_85 [i_29 - 1] [i_28 + 2] [i_28] [(signed char)14] [i_23] [i_22 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-29))));
                                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max((((((/* implicit */_Bool) min(((signed char)-40), ((signed char)-122)))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-255)))) : (((/* implicit */int) (short)29966)))), (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (short)17581)) : (((/* implicit */int) (signed char)-56)))))))));
                                var_34 = ((/* implicit */signed char) max((((((/* implicit */int) ((short) (signed char)-82))) % ((~(((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) arr_84 [i_23] [(signed char)18] [(signed char)18] [(signed char)18] [i_23 - 1])) ? (((/* implicit */int) ((signed char) arr_77 [i_28] [i_28 - 1]))) : ((~(((/* implicit */int) arr_79 [i_23] [(signed char)15] [i_28] [(signed char)18]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_30 = 1; i_30 < 20; i_30 += 1) 
                {
                    for (short i_31 = 2; i_31 < 19; i_31 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_80 [(signed char)14] [i_30 + 1] [(short)14]))) + (((/* implicit */int) max((((signed char) arr_87 [i_22] [i_30])), (var_4))))));
                            var_36 = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)56)) >= (((/* implicit */int) (signed char)125))))) < ((~(((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
