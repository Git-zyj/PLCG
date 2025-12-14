/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235988
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
    var_17 = ((/* implicit */short) var_15);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned char) arr_2 [(short)4]);
        arr_3 [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) (signed char)-61)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) (signed char)-61)))));
                    var_19 = ((unsigned char) min((arr_2 [i_2 - 1]), (((/* implicit */short) var_11))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 2])) : (((/* implicit */int) var_0)))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */short) ((unsigned char) (((!(((/* implicit */_Bool) (unsigned char)219)))) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_1 + 3] [i_0] [(unsigned char)10])) : (((((/* implicit */int) (short)-27542)) & (((/* implicit */int) (signed char)-73)))))));
                        arr_15 [(unsigned char)2] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) var_10);
                        var_22 = ((/* implicit */unsigned char) (((((((!(((/* implicit */_Bool) (unsigned char)134)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)61)))) : (((/* implicit */int) var_0)))) + (2147483647))) >> (((((/* implicit */int) var_7)) + (10966)))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) var_2);
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_24 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_15)))));
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 23; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned char) var_5)), ((unsigned char)134))))) && (((/* implicit */_Bool) var_14))));
                    var_26 = var_16;
                }
            } 
        } 
        var_27 ^= (signed char)13;
        var_28 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) (signed char)114))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) var_4)))))) | (((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
    {
        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_23 [i_7] [i_7] [i_7]))))) : (((/* implicit */int) var_7))));
        var_30 = ((/* implicit */short) (~(((/* implicit */int) arr_25 [i_7] [i_7]))));
        /* LoopNest 2 */
        for (signed char i_8 = 2; i_8 < 18; i_8 += 1) 
        {
            for (unsigned char i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                {
                    arr_32 [i_8] [i_8 - 2] = ((/* implicit */signed char) (short)-4157);
                    arr_33 [i_7 + 1] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)104)))) < (((/* implicit */int) var_14))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((signed char) var_4)))));
                    var_32 = arr_23 [i_9] [i_8] [(signed char)6];
                }
            } 
        } 
    }
}
