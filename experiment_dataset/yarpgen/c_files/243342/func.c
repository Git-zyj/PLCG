/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243342
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
    var_12 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 165718286U)) && (((/* implicit */_Bool) (signed char)118))))));
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 3]);
                    var_14 = ((/* implicit */signed char) 4129249024U);
                    var_15 = ((/* implicit */unsigned int) var_1);
                    var_16 = ((/* implicit */int) arr_6 [i_0] [i_0]);
                }
            } 
        } 
        var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0])))) : (min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_2)))));
        var_18 = ((/* implicit */int) 4129249000U);
        var_19 = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    {
                        arr_15 [i_0] [i_4] [i_3] [i_0] = ((/* implicit */int) (unsigned short)23362);
                        arr_16 [i_0 - 3] [i_0] [i_4 - 3] [(unsigned char)1] = ((/* implicit */int) arr_9 [7] [i_0] [i_4]);
                        arr_17 [i_0] [13ULL] [i_0] [i_5] = (unsigned short)16128;
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [(_Bool)1] [i_0] [i_4 - 2] [(_Bool)1]))));
                        arr_19 [i_0] [i_0] [6] [i_3] [i_4 + 1] [i_5] = ((/* implicit */short) (-(-1)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_10);
                            arr_28 [i_0] [i_3] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_3 - 1] [i_0] [i_0])) ? (arr_24 [i_0 - 3] [i_0] [i_8] [i_8]) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_3 + 1]))));
                        }
                    } 
                } 
            } 
        }
        for (int i_9 = 2; i_9 < 16; i_9 += 1) 
        {
            arr_32 [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_4 [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)63)))))));
            var_21 = ((/* implicit */_Bool) arr_9 [i_9 - 1] [(unsigned short)10] [i_9]);
            var_22 = ((((/* implicit */_Bool) (unsigned short)57190)) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0 - 2] [i_9])) ? (arr_24 [i_0] [i_0] [i_0 - 3] [i_0 - 3]) : (((/* implicit */unsigned long long int) -6873345578132013141LL)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))));
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_0] [i_9]))));
        }
    }
    /* vectorizable */
    for (short i_10 = 3; i_10 < 16; i_10 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) arr_2 [i_10 - 1] [i_10]);
        /* LoopNest 2 */
        for (signed char i_11 = 2; i_11 < 16; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                {
                    arr_41 [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) (unsigned char)6);
                    arr_42 [i_10] = ((((/* implicit */_Bool) arr_7 [i_10 - 2] [i_11 - 2] [i_12] [i_10])) ? (arr_7 [i_10 - 2] [i_11] [i_11] [i_10]) : (var_5));
                }
            } 
        } 
    }
    for (short i_13 = 3; i_13 < 16; i_13 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) arr_0 [i_13])))) ? (((/* implicit */unsigned long long int) ((113392930) | (1113866120)))) : (min((2751639740929252883ULL), (((/* implicit */unsigned long long int) (short)25429))))));
        arr_45 [i_13] = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_13] [i_13 - 1]))) : (arr_22 [i_13] [i_13] [i_13] [i_13]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [i_13] [i_13] [i_13] [i_13 - 1]))))), (arr_27 [i_13]))))));
    }
    for (short i_14 = 3; i_14 < 16; i_14 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */int) arr_8 [i_14] [i_14]);
        arr_48 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_14])) ? (arr_4 [(signed char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (arr_0 [14])))))))) ? (((/* implicit */unsigned long long int) (+((-(1893025550)))))) : (min((((/* implicit */unsigned long long int) (signed char)-122)), (15695104332780298736ULL)))));
    }
}
