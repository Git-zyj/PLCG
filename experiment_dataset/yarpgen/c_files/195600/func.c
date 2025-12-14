/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195600
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_1)) != (((/* implicit */int) arr_5 [i_0])))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) arr_1 [(unsigned char)5])) : (((/* implicit */int) var_7)))))) > (((/* implicit */int) (unsigned char)101))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_11 = arr_6 [i_0] [i_1] [i_2] [i_3];
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)242)) | (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1])) | (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)17))) : (((/* implicit */int) var_6))))));
                                var_12 -= ((/* implicit */unsigned char) ((((((/* implicit */int) min((var_3), (arr_3 [i_0])))) % (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3] [(unsigned short)3] [i_0])))) >> (((((/* implicit */int) min(((unsigned char)214), ((unsigned char)80)))) - (72)))));
                                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)20] [(unsigned char)20] [i_0 - 2])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_9))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_19 [i_1] = arr_0 [i_2];
                        var_15 = arr_16 [i_0] [i_1] [i_2] [i_5];
                        arr_20 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_15 [(unsigned char)12] [i_0 + 1] [i_0 - 1] [i_1]), ((unsigned short)19561))))));
                    }
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) max((arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2]), (var_5)))) : (((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 10; i_10 += 3) 
                        {
                            {
                                var_17 = max((((/* implicit */unsigned short) (unsigned char)2)), (((unsigned short) var_1)));
                                arr_34 [i_6] [i_6] [i_6] [(unsigned short)10] [i_8] [i_7] [(unsigned short)3] = ((/* implicit */unsigned short) max(((-((+(((/* implicit */int) arr_25 [i_6] [i_9] [i_10])))))), (min(((+(((/* implicit */int) arr_30 [i_7])))), (((/* implicit */int) (unsigned char)242))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_6] [(unsigned char)3] [i_9] [i_7]), ((unsigned short)7168)))) ? (((/* implicit */int) min((arr_23 [i_7]), (arr_21 [i_7])))) : (((/* implicit */int) (unsigned char)94))))) ? (((/* implicit */int) min((arr_31 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10]), (((/* implicit */unsigned short) arr_18 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10]))))) : (((/* implicit */int) var_0))));
                                arr_35 [(unsigned char)5] [i_7] [i_7] [i_7] [i_9] [i_10 - 1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned char)237)) ^ (((/* implicit */int) arr_29 [i_6] [(unsigned char)0] [i_6] [i_6] [(unsigned short)0] [i_6])))) >> (((((((/* implicit */int) arr_3 [i_6])) | (((/* implicit */int) var_2)))) - (43167))))) ^ (((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) max((var_7), ((unsigned char)162)))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_4)))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((unsigned char) (-(((/* implicit */int) (unsigned char)161))));
                arr_36 [i_7] = ((/* implicit */unsigned short) (unsigned char)177);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        for (unsigned char i_12 = 2; i_12 < 22; i_12 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (unsigned char)197)))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_12 - 1])) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) var_0)))))) > ((+(((/* implicit */int) (unsigned char)252))))));
                arr_42 [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_5)) - (36006)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)164))));
    /* LoopNest 3 */
    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                {
                    arr_51 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_43 [i_13] [i_15])) < (((/* implicit */int) arr_47 [i_13] [i_14] [(unsigned short)13]))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)226)), ((unsigned short)57242)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_6)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 3; i_16 < 23; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 4; i_17 < 22; i_17 += 1) 
                        {
                            {
                                arr_57 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_52 [i_13] [i_14] [i_15] [(unsigned short)7]))));
                                var_24 = ((/* implicit */unsigned short) (unsigned char)255);
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_16 + 1] [(unsigned char)9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((((/* implicit */int) var_10)) > (((/* implicit */int) arr_47 [i_13] [i_15] [i_13])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36021)) ? (((/* implicit */int) (unsigned short)2009)) : (((/* implicit */int) arr_52 [i_13] [i_13] [i_15] [i_15]))))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (((-(((/* implicit */int) var_6)))) % (((/* implicit */int) arr_45 [i_14] [i_13])))))));
                }
            } 
        } 
    } 
}
