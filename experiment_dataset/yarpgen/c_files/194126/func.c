/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194126
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
    var_18 = ((/* implicit */unsigned short) var_7);
    var_19 = var_8;
    var_20 = ((/* implicit */unsigned int) min(((unsigned short)28690), ((unsigned short)28690)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_21 = (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])));
            arr_6 [i_0] [i_0] = (_Bool)1;
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_11 [i_0] [i_0] [4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))))) ? ((+(arr_1 [i_0]))) : (((/* implicit */int) var_6))));
            /* LoopSeq 4 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (841621814U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_2)), (3373310987U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_4] [i_0])))))))) ? (arr_2 [(unsigned short)14]) : (((/* implicit */int) min((arr_15 [i_0] [i_3 - 1] [i_4] [i_4] [i_4 + 2] [i_4]), (arr_14 [(_Bool)1] [i_3 - 1] [(_Bool)1] [(_Bool)1] [i_4 + 2] [i_0]))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (arr_2 [i_2]))) : (((/* implicit */int) (unsigned short)61064))))));
                }
                for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_23 = (!(arr_7 [i_0] [i_0] [i_0]));
                    arr_20 [i_0] [i_0] [i_0] [i_5] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)61064)) - (var_14)))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4186112U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50656)))))) && (((/* implicit */_Bool) ((unsigned short) (_Bool)1))))))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) (((!(arr_8 [i_2] [(_Bool)1]))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_2] [i_0] [i_6])))));
                    var_26 *= ((/* implicit */unsigned int) (-(424332004)));
                    arr_25 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1152791877)) ? (335879479U) : (335879479U)));
                    arr_26 [i_3] [(_Bool)1] [i_0] [i_3] = (_Bool)0;
                }
                arr_27 [i_0] [i_3] [4] = min((((((/* implicit */_Bool) min((arr_9 [i_3]), (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) arr_21 [i_0])))), (var_8));
                arr_28 [i_0] [i_0] [(unsigned short)10] [i_0] = ((arr_13 [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)59416)) : (min(((~(((/* implicit */int) (unsigned short)36846)))), (((/* implicit */int) (unsigned short)6106)))));
                arr_29 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (arr_2 [i_7 - 1]) : (((((/* implicit */_Bool) 78684825U)) ? (806209109) : (((/* implicit */int) arr_8 [i_0] [i_0])))))), (((arr_24 [i_0] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_0]) ? ((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_19 [i_7] [i_7 - 1] [i_0] [i_7 - 1]))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 3; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) -424332017);
                            arr_38 [i_0] [i_7] [(unsigned short)8] &= ((/* implicit */_Bool) (unsigned short)2047);
                            arr_39 [(_Bool)1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 2392250464U))));
                            arr_40 [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) min((arr_33 [i_0] [i_0]), (((/* implicit */int) arr_13 [i_8] [i_0]))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_7 - 1])))) ? (min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) arr_14 [i_9] [i_9] [i_9] [i_9 - 3] [i_9 - 1] [i_0])))) : (min((arr_35 [i_0] [i_7 - 1]), (var_11)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_29 = (_Bool)1;
                var_30 = ((/* implicit */int) (_Bool)1);
            }
            /* vectorizable */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_47 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))));
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            for (unsigned int i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                {
                    arr_54 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_22 [i_0] [3U] [3U] [4] [i_0]), (arr_41 [i_13] [i_13 - 2] [i_13 - 1])))) ? (((/* implicit */int) (_Bool)1)) : (arr_37 [i_0] [i_0] [i_13] [i_12] [i_0] [12U] [i_12])));
                    var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_11)))) ? ((~(((/* implicit */int) var_9)))) : (-1081180859)));
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (~(var_16))))));
                    var_34 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_33 [i_0] [i_12]) & (((/* implicit */int) (unsigned short)43949)))))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((var_2) ? (arr_50 [i_13] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_58 [15] [15] = ((/* implicit */int) ((1693088551U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3507880904U)) ? (((/* implicit */int) arr_14 [i_14] [i_14] [(_Bool)1] [i_14] [(_Bool)1] [(_Bool)1])) : (((((/* implicit */_Bool) arr_35 [6U] [i_14])) ? (((/* implicit */int) (unsigned short)8881)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_59 [(_Bool)1] [i_14] = ((arr_5 [2U] [2U] [i_14]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
        arr_60 [i_14] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1234797)) ? (arr_35 [(unsigned short)6] [i_14]) : (arr_35 [(unsigned short)10] [i_14]))), (((((/* implicit */_Bool) arr_35 [12] [i_14])) ? (arr_35 [8U] [i_14]) : (arr_35 [14U] [i_14])))));
        var_35 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_31 [i_14] [i_14] [i_14] [i_14])), (var_11)))), (((arr_31 [i_14] [19U] [i_14] [i_14]) ? (var_0) : (((/* implicit */unsigned int) var_7))))));
    }
}
