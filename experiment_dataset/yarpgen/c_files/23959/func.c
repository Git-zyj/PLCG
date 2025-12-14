/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23959
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = (+((~(9223372036854775807LL))));
                    var_14 = ((/* implicit */signed char) (short)6624);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 2; i_3 < 21; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) (((+((-(((/* implicit */int) var_0)))))) << (((min((((/* implicit */long long int) (signed char)-122)), (7020706525295739514LL))) + (139LL)))));
                        arr_23 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) 7020706525295739504LL)) ? (((/* implicit */int) arr_9 [i_3] [i_3 + 2])) : (((/* implicit */int) var_4))))));
                        var_16 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_6]))))), (((long long int) ((unsigned int) var_11)))));
                        var_17 = var_3;
                    }
                    var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_4] [i_5]))));
                }
            } 
        } 
        var_19 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_20 [i_3 - 2] [i_3] [i_3] [i_3]))), (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_15 [i_3] [i_3 + 1]))))));
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_20 = ((unsigned char) var_12);
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 21; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_21 |= ((/* implicit */long long int) (short)32751);
                            arr_37 [i_3] [i_7] [5LL] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-11545)) - ((-(((/* implicit */int) var_6))))));
                            arr_38 [i_3 - 2] [i_7] [i_8] [i_9] [i_7] [i_8] [i_3 + 1] = (+(var_10));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) max((var_4), (((/* implicit */short) arr_28 [i_10] [3U] [(_Bool)1] [i_3]))))) ? (((((/* implicit */_Bool) arr_16 [i_10])) ? (((/* implicit */int) arr_31 [(_Bool)0] [i_10] [i_8])) : (((/* implicit */int) (unsigned char)162)))) : ((~(((/* implicit */int) (short)-23535)))))))))));
                        }
                    } 
                } 
            } 
            var_23 *= ((/* implicit */short) max(((((((_Bool)1) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) arr_18 [i_3] [i_3] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_36 [i_7] [i_3] [i_7] [i_7] [i_3] [i_3]), (((/* implicit */short) (_Bool)0))))))))));
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
        {
            arr_43 [i_11] = ((/* implicit */signed char) (short)6632);
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                for (unsigned int i_13 = 2; i_13 < 22; i_13 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 3; i_14 < 22; i_14 += 2) 
                        {
                            arr_52 [i_3 + 2] [i_11] [(unsigned short)13] [i_13] [i_14] = ((/* implicit */short) (-(((long long int) var_0))));
                            var_24 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                            arr_53 [i_3] [i_3] [i_3 + 2] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-23545))));
                        }
                        var_25 |= ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
        }
        for (long long int i_15 = 0; i_15 < 23; i_15 += 4) /* same iter space */
        {
            var_26 *= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_34 [i_15] [i_15] [i_15] [i_3]))))));
            var_27 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) var_10)))))) / (((unsigned int) ((long long int) arr_12 [i_15] [i_15])))));
            var_28 = ((/* implicit */long long int) (signed char)-7);
        }
        arr_57 [i_3] |= ((/* implicit */short) (signed char)19);
        var_29 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (short i_16 = 2; i_16 < 21; i_16 += 2) /* same iter space */
    {
        arr_62 [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        arr_63 [i_16] [i_16] = ((/* implicit */unsigned int) ((arr_47 [i_16 + 2]) ? (((/* implicit */int) (short)12)) : (((/* implicit */int) (unsigned short)45349))));
        var_30 = ((/* implicit */signed char) (short)21291);
        /* LoopSeq 2 */
        for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
        {
            var_31 = ((arr_18 [i_16 + 1] [i_16] [i_16 + 2]) ? (-6153483662877145370LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))));
            var_32 = ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
        }
        for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            arr_69 [i_16] = var_11;
            /* LoopNest 2 */
            for (signed char i_19 = 3; i_19 < 21; i_19 += 4) 
            {
                for (unsigned char i_20 = 2; i_20 < 22; i_20 += 3) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-83))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) -9223372036854775803LL))));
                        var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -6153483662877145373LL))));
                        arr_75 [i_20] [i_20] [i_19] [i_20] [i_20] = ((/* implicit */unsigned int) (-(17179869183LL)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_21 = 1; i_21 < 22; i_21 += 4) 
            {
                for (signed char i_22 = 1; i_22 < 20; i_22 += 2) 
                {
                    {
                        var_36 *= ((signed char) var_10);
                        arr_81 [i_21] [i_21 + 1] [i_21] [i_21] [i_22] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-58))));
                        arr_82 [(signed char)0] [i_21] = ((/* implicit */signed char) (-(arr_78 [i_22] [i_18] [i_16])));
                    }
                } 
            } 
        }
    }
}
