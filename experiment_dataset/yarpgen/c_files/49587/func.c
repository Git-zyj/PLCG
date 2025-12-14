/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49587
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = (-((+(var_11))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_17 = var_10;
                        var_18 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                    }
                } 
            } 
            arr_10 [i_0] [13] [10] = (+(var_6));
            var_19 = (-((~(var_0))));
            var_20 |= (-(((/* implicit */int) ((var_8) > (var_5)))));
        }
        var_21 = ((/* implicit */int) min((var_21), ((((-(var_1))) & ((~(var_2)))))));
    }
    var_22 = var_8;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            var_23 = ((var_0) ^ (var_6));
            var_24 = var_2;
        }
        var_25 = (-(var_12));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11))));
                }
            } 
        } 
        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
    }
    /* LoopSeq 2 */
    for (int i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 9; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        var_29 = var_5;
                        var_30 |= (~((~(var_1))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) && (((/* implicit */_Bool) (+(var_14))))));
                        arr_29 [i_8] [2] [i_8] [i_11] [4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) % (((/* implicit */int) ((var_12) > (var_8)))))))));
                        var_32 = (+((-(var_5))));
                    }
                } 
            } 
        } 
        var_33 = var_7;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            for (int i_13 = 2; i_13 < 9; i_13 += 1) 
            {
                {
                    var_34 = ((/* implicit */int) (!(((var_5) >= (var_6)))));
                    var_35 = (+(((/* implicit */int) ((var_1) < (var_12)))));
                }
            } 
        } 
        var_36 = (((~(var_6))) % ((~(var_0))));
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 20; i_14 += 3) 
    {
        arr_37 [i_14] = ((var_8) | (var_9));
        arr_38 [i_14] = var_13;
    }
    var_37 = var_4;
}
