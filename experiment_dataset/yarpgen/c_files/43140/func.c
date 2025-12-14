/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43140
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
    var_12 = ((/* implicit */_Bool) max((var_12), ((!(((/* implicit */_Bool) max((((/* implicit */int) ((short) (_Bool)1))), (((((/* implicit */int) (unsigned char)42)) & (((/* implicit */int) (_Bool)0)))))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) min((((/* implicit */signed char) (_Bool)0)), (var_8)))), (var_5)))) ^ (max((((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_1)))), (((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(max((((/* implicit */int) arr_0 [(signed char)6])), (((((/* implicit */int) arr_1 [(signed char)6] [(signed char)6])) << (((/* implicit */int) var_9)))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (var_7))), (min((var_7), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((/* implicit */int) arr_8 [i_1] [i_1] [i_1])), ((+(((/* implicit */int) (_Bool)1)))))))));
            arr_9 [i_2] [i_1] [(_Bool)1] = ((/* implicit */short) var_6);
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_16 -= ((/* implicit */signed char) arr_11 [i_1] [i_1] [2LL] [i_3]);
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!((_Bool)1))))));
                    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [i_4] [(short)4] [i_2] [i_1])) ? ((+(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_10 [i_1] [(unsigned char)8] [i_1] [i_4])))))), (((/* implicit */int) arr_10 [i_4 + 1] [i_4 + 1] [i_1] [i_4 + 1]))));
                    var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1])) | (((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_3] [i_2] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_4] [(_Bool)1] [i_4])) : (((/* implicit */int) arr_0 [i_1])))))));
                }
            }
            var_20 += ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_2])) + (((((/* implicit */_Bool) arr_15 [i_1] [(_Bool)1] [(unsigned char)5] [(signed char)1])) ? ((+(((/* implicit */int) arr_7 [(short)6] [i_2] [(signed char)8])))) : ((+(((/* implicit */int) (unsigned char)90))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
        {
            arr_20 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)239)) + (((/* implicit */int) var_4))))) >= (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_7))))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) ((_Bool) (unsigned char)182))) != (((arr_26 [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_5] [i_6] [(unsigned char)1])))))));
                        var_22 = ((/* implicit */_Bool) ((signed char) ((_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_24 [i_7] [i_6] [i_1] [i_1] [(short)8] [i_1]))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_8 [i_5] [i_5] [i_5]))));
        }
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) min((((/* implicit */int) (((+(((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) arr_10 [i_1] [(_Bool)1] [i_1] [i_1]))))), ((+(((/* implicit */int) arr_22 [i_8] [i_1] [i_1] [i_1]))))));
            var_25 = ((/* implicit */short) max((((/* implicit */int) ((_Bool) 7839433143351533461LL))), ((+(((/* implicit */int) var_1))))));
            arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (-7839433143351533462LL)));
        }
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-106)) ^ (((/* implicit */int) arr_13 [i_1] [i_1] [(_Bool)1] [i_9]))))) ? (((/* implicit */int) ((_Bool) (signed char)-64))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))) ? ((~(((/* implicit */int) arr_28 [i_1])))) : (min((((/* implicit */int) min((((/* implicit */unsigned char) arr_27 [i_1] [i_9])), (arr_8 [(short)9] [(short)9] [i_1])))), (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) arr_29 [i_1] [i_1])) : (((/* implicit */int) var_3)))))))))));
            arr_34 [i_1] = ((/* implicit */_Bool) max((max((arr_16 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_24 [i_9] [i_9] [i_1] [i_1] [i_1] [i_1])))), (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_1]))) & (min((-7839433143351533461LL), (((/* implicit */long long int) var_1))))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_10 = 3; i_10 < 6; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_27 = arr_10 [i_1] [i_10] [i_1] [(unsigned char)6];
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_12])) & (((/* implicit */int) arr_35 [i_12])))))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)23)) && (((/* implicit */_Bool) arr_38 [i_13] [i_1] [i_1] [i_10]))))), ((+(((/* implicit */int) (unsigned char)68)))))) : (((/* implicit */int) ((short) (+(((/* implicit */int) (_Bool)1))))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (((~(((/* implicit */int) var_0)))) & (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_13]))) : (var_7))))))))));
                        }
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_1] [i_12] [i_1] [i_12])) >= (((/* implicit */int) (short)32758))))) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_8 [(unsigned char)6] [i_10 - 1] [i_10 - 1])))))));
                    }
                } 
            } 
        } 
        arr_45 [i_1] [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)104)) ^ (((/* implicit */int) arr_31 [i_1] [i_1] [i_1])))) | (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1])))) / (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), (((unsigned char) var_4))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
}
