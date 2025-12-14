/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21792
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 4 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) max((5375162944066190039ULL), ((+(arr_3 [i_1] [i_1 + 1])))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) 1894005733U);
                            var_18 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_4]);
                            var_19 = ((/* implicit */signed char) 18446744073709551615ULL);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 1]);
            arr_11 [i_1] [i_1 + 2] [i_1] = 70368744177664ULL;
        }
        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(4294967287U))))));
            arr_14 [i_5] = ((/* implicit */signed char) 8796093022204ULL);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) 0ULL);
            arr_17 [i_6] = ((/* implicit */unsigned int) arr_1 [i_0]);
            var_23 = ((/* implicit */_Bool) max((var_23), (arr_5 [i_6] [i_6] [20U] [i_0])));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_21 [i_7] = ((/* implicit */unsigned long long int) (~(min((arr_10 [i_0] [i_0] [i_0] [i_7] [i_0]), (((/* implicit */unsigned int) arr_18 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) 0ULL);
                            var_25 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_9]))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_7 [(_Bool)0] [i_8 - 3] [i_9 + 1]))));
                            arr_29 [i_0] [i_0] [i_8] [i_9] [(unsigned char)3] = ((/* implicit */signed char) 14556463262790817445ULL);
                        }
                        arr_30 [i_0] [i_0] [i_8] [i_9 + 1] = (!(arr_25 [i_0] [i_8] [4U] [i_9 + 1]));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            arr_35 [i_0] = ((/* implicit */unsigned long long int) 754493095U);
                            arr_36 [i_0] = max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (3540474200U));
                            var_27 += ((/* implicit */unsigned int) (-((-(7891963779772953167ULL)))));
                        }
                        arr_37 [i_0] [i_7] [i_8 - 3] [i_9] = min((1152921504606846975ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 4) 
    {
        arr_40 [1ULL] [i_12] = ((/* implicit */unsigned long long int) arr_33 [i_12] [i_12] [i_12] [i_12 + 1] [i_12]);
        /* LoopSeq 4 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) arr_32 [(_Bool)1] [i_12] [i_13] [i_12] [i_13]);
            arr_45 [(signed char)11] [(signed char)11] [i_13] = ((/* implicit */_Bool) arr_42 [i_13] [i_12 + 2] [i_12 - 1]);
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_29 *= ((/* implicit */_Bool) arr_23 [i_12 - 1] [i_12 + 2] [i_12 + 1] [i_12 + 1]);
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                var_30 = ((/* implicit */unsigned long long int) min((max((arr_23 [i_12] [i_12 - 1] [6U] [i_12 + 2]), (arr_23 [9U] [i_12 - 1] [i_12] [i_12 + 2]))), (arr_23 [i_12] [i_12 - 1] [i_12] [i_12 + 2])));
                arr_52 [i_15] [i_14] [i_14] [i_12] = ((/* implicit */_Bool) max((1767757558U), (min((arr_43 [i_12 + 2] [i_12 + 2]), (arr_43 [i_12 - 1] [i_12 + 2])))));
                arr_53 [i_14] = ((/* implicit */signed char) 9765651959845806359ULL);
                arr_54 [i_15] [i_14] [6U] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!((_Bool)1)))), (1451984065U)));
            }
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_61 [i_12] [i_14] [i_14] [i_14] [i_16] [i_17] = 11ULL;
                        arr_62 [3ULL] [i_14] [i_16] [i_17] = ((/* implicit */unsigned long long int) arr_47 [i_12 + 2] [i_12 + 2] [i_12 + 1]);
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (min((max((((/* implicit */unsigned long long int) (signed char)103)), (arr_16 [4ULL]))), (arr_16 [8U])))));
                    }
                } 
            } 
            arr_63 [i_12 - 1] [i_14] = ((/* implicit */unsigned int) (~(max((arr_26 [i_12 + 2] [i_14] [i_14] [i_14] [i_14]), (arr_26 [i_12 + 1] [i_12] [i_12] [i_12 + 2] [i_14])))));
            var_32 = ((/* implicit */_Bool) 1725885121U);
        }
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) 
            {
                for (unsigned int i_20 = 0; i_20 < 13; i_20 += 4) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_12 + 2] [i_12 + 1] [i_12 + 1]))));
                        arr_73 [i_12] [i_18] [i_19] [i_20] = (!(((/* implicit */_Bool) arr_47 [i_12 - 1] [i_12 + 1] [(_Bool)1])));
                        /* LoopSeq 2 */
                        for (signed char i_21 = 2; i_21 < 12; i_21 += 4) /* same iter space */
                        {
                            arr_78 [i_12] [i_12 + 1] |= ((/* implicit */_Bool) (-(4170091236883161876ULL)));
                            arr_79 [i_12 - 1] [i_21] [i_19] [(_Bool)1] [i_21 + 1] [1U] [i_21 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_49 [i_12 + 1] [i_12] [i_21]))));
                            var_34 = ((/* implicit */_Bool) max((var_34), ((_Bool)1)));
                            arr_80 [(signed char)1] [i_20] [i_19] [i_20] [i_21 - 1] = ((/* implicit */_Bool) arr_77 [i_12 - 1] [i_21] [i_21 - 1] [i_21 - 1] [(_Bool)1]);
                        }
                        for (signed char i_22 = 2; i_22 < 12; i_22 += 4) /* same iter space */
                        {
                            var_35 = arr_15 [i_20] [i_18] [i_12 + 1];
                            var_36 -= ((/* implicit */signed char) 3032171042U);
                        }
                        arr_84 [i_12 + 1] [i_20] = arr_6 [i_12 + 2] [i_12] [i_12 + 2];
                    }
                } 
            } 
            arr_85 [(_Bool)1] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_49 [i_12 + 2] [i_18] [8U]))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            var_37 += ((/* implicit */_Bool) (-(min((arr_39 [i_12 + 2]), (((/* implicit */unsigned int) (_Bool)1))))));
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_26 [i_12 + 1] [i_12] [i_12 + 2] [i_12 + 1] [i_23]))))))));
            var_39 = arr_48 [i_23] [i_23];
            arr_88 [i_12] [i_23] = ((/* implicit */unsigned long long int) arr_47 [i_12 - 1] [i_12 - 1] [i_12 - 1]);
        }
        arr_89 [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    }
}
