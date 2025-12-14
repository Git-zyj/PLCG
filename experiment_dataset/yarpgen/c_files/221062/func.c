/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221062
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
    var_15 = (~(((/* implicit */int) var_6)));
    var_16 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (-(var_14));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_9 [i_1] = ((/* implicit */unsigned char) (signed char)-121);
                        arr_10 [i_0] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [13] [i_1] [i_1]))));
                        arr_11 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))));
        }
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_14 [i_4] = ((((((/* implicit */int) var_5)) & (arr_3 [i_4] [i_4]))) >= (((/* implicit */int) var_9)));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_4] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                            var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [6]))) != (var_14)))));
                            arr_26 [(unsigned char)10] [i_4] [i_5] [i_4] [i_7] [i_4] = ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_7]);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 1327225141))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    {
                        arr_33 [i_4] = ((/* implicit */unsigned char) var_14);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [i_8] [i_9])) ? (var_14) : (var_10))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) (+((+(var_14)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_4] [i_10] [i_11] [i_4] [i_12] = ((/* implicit */signed char) var_9);
                            arr_44 [i_4] [i_0] [i_10] [6U] [i_0] [i_0] [i_4] = arr_30 [i_0] [i_0] [i_0];
                            var_22 = ((/* implicit */int) var_12);
                        }
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                        {
                            var_23 -= ((/* implicit */signed char) 4294967295U);
                            arr_48 [i_13] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117)))));
                            var_24 ^= ((/* implicit */unsigned int) ((arr_17 [(signed char)2] [i_4] [i_11] [(_Bool)1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))));
                            arr_49 [i_4] [i_4] [i_10] [i_11] = (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_13 [i_13])) : (((/* implicit */int) var_13)))));
                        }
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_45 [i_11]))));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_9))) < (((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (int i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [(signed char)16])) : (((/* implicit */int) arr_34 [i_15])))))));
                    arr_58 [i_14] [i_15] [i_16] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_13)) >= (-186775102))))));
                    arr_59 [i_16] [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (arr_42 [i_14] [i_16] [i_14] [i_14]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_64 [i_14] [i_14] [i_14] [i_18] = ((/* implicit */int) var_3);
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
                        {
                            {
                                arr_70 [i_14] [i_14] [i_14] [i_14] [i_14] [i_18] = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_62 [i_20] [i_18] [i_18])) * (((/* implicit */int) arr_38 [i_14] [(unsigned char)7] [(_Bool)1] [i_19])))));
                                arr_71 [i_14] [i_17] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) arr_35 [i_18] [i_18] [i_18] [i_18]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 4) 
                    {
                        for (int i_22 = 0; i_22 < 20; i_22 += 4) 
                        {
                            {
                                arr_77 [i_17] [i_18] [i_18] [i_17] [i_17] [i_18] [i_14] = var_9;
                                var_28 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_14] [i_17] [i_18] [i_21])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
                                var_29 = ((/* implicit */int) (unsigned char)43);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_78 [i_14] = var_10;
    }
}
