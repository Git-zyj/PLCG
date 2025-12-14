/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25264
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0]) >> (((arr_3 [i_0]) - (1338919311)))))) ? (((/* implicit */int) ((2138677217U) <= (((/* implicit */unsigned int) arr_1 [i_1]))))) : (arr_1 [i_0])));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) -10);
                        arr_11 [8U] [8U] [i_2] [8U] [8U] [8U] &= ((unsigned int) min((arr_5 [14U]), (2204412386U)));
                    }
                }
            } 
        } 
        var_11 = ((unsigned int) ((arr_5 [0]) >> (((var_9) - (129852000)))));
        var_12 = ((/* implicit */unsigned int) ((int) ((var_0) + (var_8))));
        /* LoopSeq 4 */
        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_4] = ((/* implicit */unsigned int) -10);
            var_13 = ((/* implicit */int) min((var_13), (((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1215434854)) ? (var_1) : (arr_12 [15U] [i_0])))) != (2330202014U))) ? (var_0) : (var_0)))));
            var_14 = ((/* implicit */unsigned int) max((var_14), (min((((unsigned int) arr_2 [0U] [i_4 - 1])), (((((/* implicit */_Bool) (~(-1150084679)))) ? (((/* implicit */unsigned int) arr_1 [i_4 + 1])) : (max((1380930370U), (((/* implicit */unsigned int) -28))))))))));
        }
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
        {
            arr_17 [i_5] [15U] [i_5 - 1] = ((/* implicit */unsigned int) (~(var_2)));
            var_15 = ((/* implicit */int) min((var_15), ((+(((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0]) : (arr_3 [i_5 - 1])))))));
            var_16 = (+(var_6));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    {
                        arr_22 [14] [i_5] [i_5] [14] = ((/* implicit */unsigned int) max(((-(((arr_16 [i_0] [16U]) | (var_9))))), (min((((/* implicit */int) ((arr_3 [i_0]) >= (1215434835)))), (((arr_16 [i_0] [i_0]) + (var_2)))))));
                        arr_23 [i_7] [i_6] [2U] [i_5] [i_0] |= ((/* implicit */int) arr_9 [i_0] [i_0] [i_5] [i_6] [i_7]);
                        arr_24 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) -1751672465);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                arr_28 [20U] [i_5 + 1] [i_5] = ((unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        {
                            arr_35 [i_5] [7] [7] [7] [i_5] = var_4;
                            arr_36 [i_8] [14] [i_8] [i_9] |= max((var_5), (arr_1 [i_9]));
                            var_17 &= ((/* implicit */unsigned int) (-(((arr_0 [i_10]) - (arr_0 [5])))));
                            var_18 = var_1;
                        }
                    } 
                } 
                var_19 *= ((/* implicit */unsigned int) arr_33 [i_0] [3] [i_8] [i_0] [i_0] [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned int) (-(var_7)));
            }
        }
        for (int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            arr_39 [i_0] = ((unsigned int) ((((/* implicit */_Bool) 1042384063)) ? (max((721253838U), (arr_38 [13] [13] [i_0]))) : (arr_21 [i_0] [i_11] [i_0] [i_11])));
            var_21 = ((((((/* implicit */_Bool) arr_25 [6U])) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (1233282739U) : (1451731907U))) : (((/* implicit */unsigned int) max((arr_0 [i_0]), (var_2)))))) ^ (((/* implicit */unsigned int) min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [12U] [12U] [6U])) || (((/* implicit */_Bool) var_7)))))))));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 19; i_12 += 1) 
        {
            var_22 = ((int) 4147722033U);
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) 568812549U))));
            arr_43 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) arr_37 [i_0] [i_12] [i_12 + 2]));
            arr_44 [3] [3] = ((/* implicit */unsigned int) ((int) ((unsigned int) 1450753287)));
            arr_45 [16U] [16U] = ((/* implicit */int) ((arr_21 [i_0] [i_0] [i_12 - 1] [i_0]) * (((/* implicit */unsigned int) arr_1 [i_12 + 2]))));
        }
    }
    for (int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
    {
        arr_50 [i_13] = ((/* implicit */unsigned int) ((var_9) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-1215434856) : (2016606474)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_13] [i_13] [i_13])) ? (arr_33 [i_13] [i_13] [i_13] [i_13] [3U] [i_13] [i_13]) : (-1215434835)))))))));
        var_24 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_7 [i_13] [i_13] [i_13] [20U]) != (arr_7 [i_13] [16] [i_13] [i_13])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_13])) ? (518692210U) : (((/* implicit */unsigned int) 1215434835))))) && (((/* implicit */_Bool) ((int) var_8))))))));
        arr_51 [i_13] [i_13] = ((((var_3) - (((/* implicit */unsigned int) (+(-1622851534)))))) * (max(((+(arr_5 [2]))), (((((/* implicit */_Bool) arr_41 [i_13] [i_13])) ? (arr_31 [16] [i_13] [16]) : (((/* implicit */unsigned int) -840131584)))))));
        var_25 = min((((((/* implicit */_Bool) (+(-1215434835)))) ? (((/* implicit */unsigned int) (+(var_1)))) : (arr_8 [i_13] [i_13] [6] [i_13] [0U] [6]))), (((((((/* implicit */unsigned int) arr_48 [i_13])) % (arr_32 [i_13] [i_13]))) | (1814840074U))));
        arr_52 [6] [i_13] = ((/* implicit */unsigned int) (~((+(min((-1215434854), (var_7)))))));
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_8)))) ? ((+(-189390848))) : ((-(var_2))))))))));
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((max((2764234027U), (((/* implicit */unsigned int) 903142553)))) << (((max((((/* implicit */unsigned int) 1665145543)), (817154908U))) - (1665145530U))))))));
}
