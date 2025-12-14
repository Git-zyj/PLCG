/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25717
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
    for (long long int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0] [i_0])) : ((-(((/* implicit */int) (signed char)70))))));
                        arr_13 [i_3] [i_2] [i_2] [i_2] [i_0 + 3] = arr_11 [i_0] [i_3] [i_2] [i_3] [i_0 - 3];
                    }
                    var_12 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_7))))) : (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) == ((~(((unsigned long long int) var_4))))));
                }
            } 
        } 
        var_13 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) arr_10 [i_0 + 4] [i_0] [i_0] [i_0] [i_0 - 2] [i_0])) : (var_0))), (((((/* implicit */_Bool) max((var_0), (10694798482959957673ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (((unsigned long long int) arr_8 [i_0 + 1] [i_0 - 2] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) arr_16 [i_4 + 1])) : (((((/* implicit */int) var_6)) & (((/* implicit */int) var_1)))))))));
        arr_18 [i_4] [i_4 + 2] = ((/* implicit */int) ((unsigned short) var_1));
        arr_19 [i_4] [i_4 - 1] |= ((/* implicit */int) arr_17 [i_4 + 1]);
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_24 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_5])), (var_0)))))))) : ((+(var_9)))));
        arr_25 [i_5] = ((/* implicit */unsigned short) ((((_Bool) ((unsigned int) arr_23 [i_5] [i_5]))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_3)), (arr_14 [i_5] [i_5]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1204849580)) ? (((/* implicit */int) (unsigned short)29846)) : (1032819794))))))) : ((~(((arr_20 [i_5]) & (11749535022092329673ULL)))))));
        arr_26 [i_5] = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_5]);
    }
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_34 [i_6 - 1] [i_7] = ((/* implicit */unsigned short) arr_27 [i_6] [i_8]);
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8)))))));
                    arr_35 [i_8] [i_7] [i_6] = ((/* implicit */_Bool) arr_17 [i_6 - 2]);
                }
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_41 [i_6] [i_10] = ((/* implicit */short) var_0);
                        var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6 + 2] [i_10])))))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        arr_44 [i_6] [i_7] = (+(((/* implicit */int) ((unsigned char) arr_39 [i_6] [i_9] [i_9] [i_11 + 2]))));
                        arr_45 [i_6] [i_7] [i_9] [i_11 + 1] = ((/* implicit */short) (-(((/* implicit */int) arr_15 [i_11 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_29 [i_6 + 2] [i_7] [i_9]))));
                                var_19 = ((/* implicit */unsigned char) ((_Bool) ((signed char) var_3)));
                                arr_52 [i_6] [i_6] [i_6 - 1] [i_12] = ((/* implicit */signed char) arr_48 [i_12]);
                                var_20 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_9])))));
                                arr_53 [i_12] [i_12] [i_9] [i_7] [i_12] = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                    arr_54 [i_6] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 589712675)))));
                    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                }
                arr_55 [i_6 + 1] [i_6] [i_7] = ((/* implicit */unsigned short) (-(2340238523959565928ULL)));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (-(((unsigned long long int) var_6))));
    var_23 = ((/* implicit */short) ((((unsigned int) (+(((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) (+(((int) var_6)))))));
}
