/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216181
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) 1869780321);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) 1869780321)) ? (((/* implicit */int) (short)-1579)) : (-1869780321)))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (short)1578))));
                    arr_9 [i_0] [i_0] [i_0] = ((((1869780321) == (((/* implicit */int) (short)0)))) ? (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned short)5)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) var_7)))) : (var_1))) : ((((!(((/* implicit */_Bool) arr_2 [i_0] [i_2 + 1])))) ? (var_6) : (var_6))));
                }
            } 
        } 
        var_21 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])), (var_8)))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)34)))))) : (((int) arr_5 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((((/* implicit */int) var_17)) == (((/* implicit */int) arr_1 [i_3])))))));
        arr_13 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_3] [i_3]))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((int) var_2)))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            for (int i_6 = 2; i_6 < 16; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_23 = ((((/* implicit */int) ((unsigned short) arr_4 [i_7] [i_5]))) / ((+(var_15))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned short) (unsigned char)222)))));
                    }
                    for (short i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        var_25 = ((((/* implicit */int) arr_18 [i_6 - 1] [i_5 - 1] [i_5 - 2])) - (((/* implicit */int) (unsigned char)231)));
                        /* LoopSeq 1 */
                        for (int i_9 = 2; i_9 < 13; i_9 += 2) 
                        {
                            var_26 = (~(((/* implicit */int) arr_26 [i_6 - 2] [i_5 + 3] [i_5 - 1])));
                            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)15647)) ? (((/* implicit */int) (short)15654)) : (-1869780327))) / (arr_17 [i_9 - 2] [i_6 + 1])));
                            arr_31 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 - 1] = ((/* implicit */short) var_11);
                        }
                        var_28 = arr_24 [i_5 - 2] [i_5 + 1] [i_5 + 3] [i_5] [i_5 + 3];
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)1574)))))));
                                var_30 -= ((/* implicit */short) arr_32 [i_5 - 2] [i_6 - 1] [i_11 + 1] [i_5] [i_5 - 2] [i_4]);
                            }
                        } 
                    } 
                    arr_36 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned char)142)) - (138)))));
                }
            } 
        } 
        var_31 = (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_23 [(unsigned short)12])) : (20))));
        var_32 = ((/* implicit */short) arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        var_33 = ((/* implicit */int) arr_0 [i_4]);
        var_34 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_4])) >> (((((/* implicit */int) arr_3 [i_4])) - (218)))));
    }
    var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)19129)) : (((/* implicit */int) min((var_3), (var_3)))))) <= (((/* implicit */int) var_13))));
    var_36 = ((/* implicit */unsigned short) var_13);
}
