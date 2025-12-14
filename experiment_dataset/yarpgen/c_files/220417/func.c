/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220417
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [(short)0]);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_7 [i_3] [i_1] [(unsigned char)3]))));
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_7 [i_0] [(signed char)6] [i_0])))))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_9 [i_0] [i_0] [9ULL]) / (arr_9 [i_0] [i_4] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_4 [i_6] [i_5] [i_4] [i_0]), (((/* implicit */short) var_17)))))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) 
                {
                    {
                        var_24 += ((/* implicit */unsigned int) max((((((/* implicit */int) arr_4 [4LL] [i_9 - 1] [i_9] [i_9])) >> ((((((_Bool)1) ? (((/* implicit */int) arr_4 [(short)8] [i_7] [(short)8] [i_9])) : (((/* implicit */int) var_17)))) - (31552))))), (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))))))));
                        var_25 = ((/* implicit */signed char) min((max((max((arr_2 [i_7] [i_8] [(short)0]), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-5482))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_8] [i_9 + 1])) ? (arr_5 [i_0] [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned char)0] [i_7] [i_8] [i_8]))))))));
                        arr_24 [i_9] [(unsigned char)6] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_9] [i_9 + 1] [i_9 + 2]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_10 [i_9] [i_9 - 1] [i_9 + 2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_27 [i_10] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (~(2305772640469516288ULL)))))));
            arr_28 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) max((var_15), (((/* implicit */short) arr_25 [9ULL]))))) : ((+(((/* implicit */int) arr_21 [i_0] [i_10] [i_0]))))))));
            arr_29 [i_0] = arr_2 [i_0] [6LL] [i_10];
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                for (signed char i_12 = 3; i_12 < 6; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0])) ? (((((/* implicit */int) (unsigned char)222)) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned char) max((((/* implicit */short) (_Bool)0)), (arr_22 [i_11] [i_10] [i_11] [i_12] [(unsigned char)6])))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_31 [(unsigned char)5] [i_0])) ? (((/* implicit */int) arr_20 [i_12])) : (((/* implicit */int) arr_33 [i_10] [i_10])))))) ? (((/* implicit */int) max((arr_22 [i_11] [i_12] [4U] [(signed char)3] [i_12 - 3]), (var_3)))) : (((/* implicit */int) max((((/* implicit */short) ((_Bool) arr_31 [(_Bool)1] [(unsigned char)5]))), (arr_10 [(short)6] [i_12] [i_13]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) (-((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_33 [i_0] [i_0]))))));
                arr_41 [i_15] [9U] [i_15] = ((((/* implicit */_Bool) arr_37 [i_0] [(unsigned char)2] [i_15])) ? (arr_37 [i_0] [i_14] [i_14]) : (arr_37 [i_0] [i_15] [i_15]));
            }
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(arr_35 [i_14]))))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)184)) < (((/* implicit */int) (signed char)92))));
            }
            for (unsigned long long int i_17 = 4; i_17 < 7; i_17 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_17 + 2]))));
                arr_47 [(_Bool)0] [i_0] = ((/* implicit */short) ((((arr_11 [(short)6] [i_14] [(short)6] [i_0]) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_17] [(unsigned char)6] [i_0]))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)150))))))));
            }
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((arr_45 [3ULL] [i_14] [(unsigned char)6] [i_14]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (signed char i_19 = 1; i_19 < 9; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) arr_54 [2U] [i_14] [(unsigned char)5] [i_18] [i_19] [i_19] [i_19 + 1])) == (((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)21)))))))));
                            var_34 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) >> (((var_13) + (4387883910621151424LL))))))));
                        }
                    } 
                } 
            } 
            arr_55 [i_0] = ((/* implicit */_Bool) (short)13501);
        }
    }
    for (long long int i_21 = 1; i_21 < 7; i_21 += 4) 
    {
        arr_58 [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_15)))) ? (((/* implicit */int) max(((unsigned char)10), (max((((/* implicit */unsigned char) (signed char)-79)), ((unsigned char)248)))))) : (((/* implicit */int) var_0))));
        arr_59 [i_21] = ((/* implicit */unsigned long long int) -2460131911301251386LL);
        arr_60 [i_21] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [(unsigned char)1]))) : (max((((/* implicit */long long int) arr_0 [i_21])), (var_4)))))));
        var_35 = ((/* implicit */unsigned long long int) ((short) max((((((/* implicit */_Bool) arr_9 [(unsigned char)7] [(unsigned char)7] [i_21])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    }
    var_36 = var_10;
}
