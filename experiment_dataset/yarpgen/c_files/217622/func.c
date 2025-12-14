/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217622
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (-1901254054)));
                var_16 = arr_2 [i_0];
                var_17 = (~((((+(arr_0 [i_0]))) / (min((var_3), (arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_18 = min(((~(2147483647))), (max((var_8), (max(((-2147483647 - 1)), (1006632960))))));
                                var_19 = var_6;
                            }
                        } 
                    } 
                    var_20 = ((int) ((((((/* implicit */_Bool) -631893842)) ? (678704378) : (var_9))) / (((((/* implicit */_Bool) arr_11 [i_4] [i_3])) ? (-1033729553) : (var_11)))));
                    arr_21 [i_2] [i_2] [i_2] = min(((+(var_9))), (639523589));
                    var_21 = ((/* implicit */int) min((var_21), ((+(arr_11 [6] [i_4])))));
                }
            } 
        } 
        var_22 = 631893842;
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_23 = -631893843;
        var_24 = max((var_1), (min((16744448), (((int) -1033729568)))));
        var_25 = ((((/* implicit */_Bool) max((arr_23 [i_7]), ((~(2147483647)))))) ? (arr_24 [i_7]) : (((int) -1379918386)));
    }
    for (int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        arr_28 [i_8] = (((+(631893842))) >> ((((-(-987803240))) - (987803235))));
        /* LoopSeq 2 */
        for (int i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 19; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    for (int i_12 = 1; i_12 < 21; i_12 += 2) 
                    {
                        {
                            var_26 &= var_1;
                            arr_42 [i_10] [i_9] [20] = ((int) ((((/* implicit */_Bool) var_12)) ? ((-(1895229923))) : ((~(-1010712964)))));
                        }
                    } 
                } 
            } 
            var_27 = min((508237675), (var_13));
        }
        for (int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            arr_45 [i_8] [i_8] = ((((/* implicit */_Bool) (~(arr_34 [i_8] [i_8] [i_13] [i_8])))) ? (min((arr_40 [i_8] [i_13] [i_13] [2] [i_8]), (((2147483643) + (arr_8 [i_8]))))) : (max((arr_18 [i_13] [i_13] [19]), (((1033729575) | (935242696))))));
            var_28 = ((-34964352) / (arr_41 [i_8] [i_8] [i_8] [i_13] [i_13]));
            arr_46 [i_8] |= var_9;
        }
        var_29 = var_14;
        var_30 = -1938340689;
    }
    var_31 = var_8;
}
