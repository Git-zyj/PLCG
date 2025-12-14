/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193256
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
    var_19 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))) ? (0U) : (min((((/* implicit */unsigned int) -1680592796)), (2248562060U))));
        var_21 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    /* LoopSeq 4 */
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) arr_1 [i_1]);
        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) && (((/* implicit */_Bool) ((arr_0 [i_1] [i_1 - 2]) ? (max((arr_1 [i_1 - 2]), (((/* implicit */long long int) (_Bool)1)))) : (arr_2 [i_1 + 2]))))));
    }
    for (short i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) arr_6 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned int i_4 = 4; i_4 < 16; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) arr_12 [i_2 + 2])), (arr_13 [i_2 + 2] [i_2 + 1] [i_2] [i_4 - 4]))), (((/* implicit */unsigned short) var_18))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((((((/* implicit */long long int) 2248562060U)) > (arr_11 [i_2 + 1] [i_2] [i_4 - 4]))) || (((/* implicit */_Bool) (unsigned char)243))))));
                        var_27 = ((/* implicit */signed char) arr_14 [i_4 + 1] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 4]);
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_19 [i_2 + 1] [i_3] [i_2 + 1] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2 + 2]))));
                        arr_20 [i_2] [i_3] [i_4 + 1] [14] = ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2 + 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 3])) ? (((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [i_4 + 2] [i_4 - 3] [(signed char)17] [i_4 - 1])) : (var_11));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_23 [i_7] = ((/* implicit */long long int) ((arr_10 [i_2]) > (((/* implicit */unsigned long long int) 2248562060U))));
                            arr_24 [i_2 - 1] [i_2] [i_2] [(signed char)10] [i_2] [i_2] = ((/* implicit */_Bool) var_14);
                        }
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_28 -= ((/* implicit */unsigned int) arr_22 [i_2 + 1] [i_2 + 1] [i_3] [i_3] [i_4 - 3] [i_6] [i_8]);
                            arr_27 [i_2 + 2] [i_2 + 2] [i_4 + 2] [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_2 - 1]));
                            arr_28 [i_2 + 2] [i_6] [i_6] [i_2 + 1] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_4 - 3] [i_4 - 4] [i_4 - 4] [i_2 + 2] [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */int) arr_22 [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_2 - 1] [i_2 + 2] [i_2] [i_2])) : (((/* implicit */int) arr_22 [i_4 - 2] [i_4 + 2] [i_4 + 2] [i_2 + 1] [i_2] [i_2] [i_2]))));
                            var_29 = ((/* implicit */unsigned int) arr_21 [3ULL] [i_2 - 1] [i_4] [i_4] [i_3] [i_2 - 1] [i_2]);
                        }
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 307869002))));
                            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)234))));
                        }
                    }
                    for (int i_10 = 3; i_10 < 15; i_10 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_32 [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 2] [i_2])) ? (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_32 [i_2 + 2] [i_3] [i_3] [i_4 + 2] [i_3]))), (((/* implicit */unsigned int) ((unsigned char) arr_32 [i_2 + 1] [i_3] [i_4] [i_10 - 2] [i_3])))));
                        arr_33 [(_Bool)1] [i_2] [i_3] [i_4 - 2] [i_4 + 2] [i_2] = ((/* implicit */unsigned long long int) max((((arr_31 [i_10 + 1] [i_4 - 1] [i_2] [i_2]) << (((arr_32 [i_2] [i_3] [i_4 + 1] [i_3] [5]) - (543079081U))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)13))))));
                        var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_21 [i_10] [i_10] [9U] [i_3] [(signed char)2] [i_2] [i_2])) : (((/* implicit */int) arr_21 [i_2] [i_3] [i_4] [i_3] [i_2 - 1] [i_10 + 3] [i_3])))) / (((arr_9 [i_3] [i_3] [i_4 - 4]) & (((/* implicit */int) arr_21 [i_2] [i_3] [i_3] [i_10 - 1] [i_10 - 3] [i_10 - 3] [i_3]))))));
                    }
                    for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        var_34 += arr_25 [i_3] [(_Bool)1] [i_3];
                        var_35 -= ((/* implicit */signed char) (unsigned char)13);
                        var_36 &= ((unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)43)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        for (int i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-307869003), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1]))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (var_4) : (((/* implicit */long long int) 12U))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_32 [i_2] [i_3] [i_13] [i_12] [i_12])) ? (((/* implicit */int) arr_41 [i_2] [i_3] [i_4] [i_4] [i_12] [i_13] [i_13])) : (((/* implicit */int) arr_40 [i_2 + 2] [i_3] [i_4] [i_12] [i_13]))))))) : ((~(arr_32 [(short)1] [11] [i_4 - 1] [i_13] [(short)1])))));
                                var_38 = ((((/* implicit */_Bool) max((((arr_39 [(unsigned short)0] [i_12] [i_4] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_2] [i_12] [i_13]))))), (((/* implicit */unsigned int) arr_16 [i_2]))))) ? (max((307869002), (((/* implicit */int) (unsigned short)32768)))) : (((/* implicit */int) arr_40 [i_12] [i_12] [i_4] [i_13] [i_13])));
                                arr_42 [i_2 + 1] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)10))))));
                                arr_43 [i_2 - 1] [i_3] [i_4] [i_12] [14ULL] = arr_40 [i_2] [(unsigned short)7] [(unsigned short)7] [i_12] [i_12];
                                var_39 = ((/* implicit */long long int) arr_15 [i_4 + 2] [i_2 + 1] [i_2 + 1] [i_4 + 1] [i_2 + 1]);
                            }
                        } 
                    } 
                    arr_44 [i_2 - 1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_35 [i_2] [i_3] [(_Bool)0] [i_3] [i_3] [i_2])) >= (arr_34 [i_2] [i_3] [i_4] [i_2])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 3) 
    {
        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (!(arr_46 [i_14]))))));
        var_41 += ((/* implicit */unsigned long long int) arr_45 [i_14] [i_14]);
        arr_47 [i_14] = arr_45 [i_14] [i_14];
    }
    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        var_42 = ((/* implicit */signed char) ((int) var_4));
        arr_52 [i_15] = ((/* implicit */unsigned char) arr_48 [i_15] [i_15]);
    }
}
