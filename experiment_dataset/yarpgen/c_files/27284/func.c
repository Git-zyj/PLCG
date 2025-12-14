/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27284
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = arr_1 [i_0 + 1];
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [13U])) | (((/* implicit */int) arr_0 [i_0]))))) ? (((unsigned int) arr_1 [i_0 + 1])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7)))))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_4 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))), (((long long int) var_4))));
        arr_9 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_4 [i_1]))))), ((+(1940530010U)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            arr_15 [i_2] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) var_2))));
            arr_16 [i_2 + 1] [i_2 + 1] [i_3] = ((/* implicit */_Bool) ((arr_5 [i_2 + 3]) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 3]))));
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            arr_19 [i_2] [i_4] = ((/* implicit */_Bool) (signed char)-60);
            arr_20 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) + (((/* implicit */int) ((signed char) min((var_2), (var_6)))))));
        }
        /* LoopSeq 3 */
        for (long long int i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    arr_28 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        arr_31 [i_6] = ((/* implicit */unsigned char) ((arr_12 [i_2] [i_5 - 2]) ? (((/* implicit */int) arr_29 [i_8] [i_5 - 2] [i_8] [i_5 - 2] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_2] [i_5 + 1] [i_2] [i_7] [i_7] [i_8] [i_7])))))));
                        arr_32 [i_2] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_30 [i_2] [(_Bool)1] [i_2] [i_2 + 2] [i_5] [(unsigned char)12] [i_5 - 1])));
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_11))));
                        var_15 = ((/* implicit */unsigned char) arr_30 [8LL] [i_2] [i_5] [i_5 + 1] [i_6] [i_5] [18U]);
                        var_16 = ((/* implicit */signed char) var_4);
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~((+(((/* implicit */int) arr_29 [i_2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 1])))))))));
                        arr_39 [i_2] [i_2 + 1] [i_5] [i_6] [i_6] [i_7] [(signed char)7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_2] [i_5] [i_6] [i_7] [i_6]))));
                        arr_40 [i_2] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned char)255))));
                    }
                    arr_41 [i_6] [i_5] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0)))) || (((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (arr_14 [i_5] [i_7])))));
                }
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) ((arr_6 [i_6]) == (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2 - 1])))));
                    arr_46 [i_6] [i_6] = ((/* implicit */_Bool) ((var_4) ? (arr_38 [i_2] [i_2 + 3] [i_6] [(_Bool)1] [i_6]) : (arr_38 [(_Bool)1] [i_2 - 1] [i_6] [i_6] [i_11])));
                }
                arr_47 [i_2] [(signed char)3] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) < (((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))));
            }
            var_19 = ((/* implicit */unsigned char) arr_44 [(signed char)14] [i_2] [i_2 - 1] [i_2] [i_5 - 1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_12] [i_2] [i_2] [i_2])) >> (((/* implicit */int) ((arr_14 [i_5 - 2] [i_12]) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12]))))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_5 - 1] [i_5] [i_2 - 1])) ? (arr_48 [i_5 - 1] [(_Bool)1] [i_2 + 3]) : (arr_48 [i_5 + 1] [i_2] [i_2 - 1])));
                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_13)))));
            }
            arr_52 [i_2] [i_5] [i_5] = arr_35 [i_5] [i_5 + 1] [i_2];
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((_Bool) 4109580231U))), ((-(var_10)))));
            arr_57 [i_13] [i_13 + 1] [i_13] = ((/* implicit */_Bool) arr_11 [i_13 + 1] [i_13 + 1]);
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                arr_60 [i_13] [i_13 + 1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((arr_38 [i_2] [8LL] [i_13] [i_13] [i_14]) + (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)121))))))) : (((/* implicit */long long int) ((var_8) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_14])) ? (((/* implicit */int) arr_44 [i_2] [i_14] [i_14] [(unsigned char)11] [(unsigned char)11])) : (((/* implicit */int) arr_50 [i_14] [i_13] [(unsigned char)5] [i_2]))))))))));
                var_24 = var_6;
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_2] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_14]))) : (var_13)))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_45 [i_13 + 1] [i_13 + 1] [(_Bool)1] [i_13 + 1] [i_2 + 2]))))));
            }
        }
        /* vectorizable */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_27 = (!(((/* implicit */_Bool) (unsigned char)75)));
            arr_63 [(_Bool)1] [i_15 - 1] [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [19U] [i_15] [i_2 + 3] [19U]))));
        }
        var_28 = ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)6)));
        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_42 [i_2 + 3] [i_2] [(unsigned char)16] [i_2 + 1]))));
    }
    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_18 = 1; i_18 < 24; i_18 += 3) 
            {
                var_30 = ((((/* implicit */_Bool) arr_66 [i_18 + 1])) ? (arr_67 [i_18 - 1] [i_18 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_18 + 1]))));
                /* LoopSeq 1 */
                for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_78 [i_20] [i_18 - 1] [i_17] [i_16]))));
                        var_32 = ((/* implicit */_Bool) arr_69 [i_16] [i_17] [i_18]);
                        arr_79 [i_16] [i_17] [i_18] [i_19] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    arr_80 [(_Bool)1] [(unsigned char)24] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_74 [(_Bool)1] [i_17]))))));
                    var_33 = ((/* implicit */signed char) ((_Bool) arr_69 [i_16] [i_16] [i_19]));
                }
                arr_81 [i_18] [i_18] [i_17] [i_18] = ((/* implicit */unsigned int) var_1);
                arr_82 [i_17] [i_17] [i_16] |= ((/* implicit */long long int) (+((((_Bool)0) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (_Bool)1))))));
                arr_83 [i_18] [i_17] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_68 [i_18 - 1]))));
            }
            var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_73 [i_16] [i_17] [i_17] [i_16]))))) ? (arr_67 [i_17] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [22U] [i_17] [i_16] [(_Bool)1])))));
        }
        arr_84 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_12)) << (((var_10) + (1839486106194725762LL)))))))) / (max((((((/* implicit */_Bool) var_8)) ? (var_13) : (var_0))), (((/* implicit */unsigned int) var_9))))));
        arr_85 [i_16] = var_6;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_21 = 1; i_21 < 24; i_21 += 3) 
    {
        arr_90 [i_21 - 1] = ((/* implicit */unsigned int) var_12);
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_65 [i_21]) << (((((/* implicit */int) arr_75 [i_21] [(unsigned char)14] [(unsigned char)14] [i_21])) - (82)))))) ? (arr_74 [i_21] [i_21 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_36 = ((/* implicit */unsigned char) arr_64 [i_21 - 1] [i_21]);
    }
}
