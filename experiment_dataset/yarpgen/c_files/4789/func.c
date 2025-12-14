/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4789
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(_Bool)1] [(signed char)19])) : (((/* implicit */int) arr_2 [15ULL] [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_9));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [17] [i_1] [(unsigned char)13] [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_0] [i_2 - 1] [i_3 + 1] [i_2 - 1] [i_1 - 1] [(unsigned short)1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)41)))))));
                                var_17 &= ((/* implicit */signed char) (_Bool)1);
                                arr_15 [i_0] [i_1] [i_3 - 1] [(signed char)11] [i_4] = ((/* implicit */signed char) (((((_Bool)0) ? (arr_8 [i_3] [(_Bool)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2 - 1] [(short)7] [i_3] [i_3] [12LL]))))) < (((/* implicit */long long int) ((/* implicit */int) (short)29669)))));
                                var_18 = ((/* implicit */unsigned short) ((long long int) arr_10 [i_1 - 1] [i_1 - 1] [i_2 - 1]));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_13 [(unsigned char)6] [i_1 + 1] [i_1] [i_2 - 1] [i_2 - 1] [i_2] [(signed char)5]))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((_Bool) arr_14 [i_1 + 1] [i_1] [(unsigned short)11] [i_1 - 1] [14U] [i_1])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_24 [(unsigned short)17] [i_5 - 1] [(short)7] [i_6] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) var_10)));
                        arr_25 [i_6] = ((/* implicit */unsigned char) ((var_15) ? (((/* implicit */int) var_9)) : (arr_7 [i_5 - 1] [i_5 + 1] [i_5 - 1])));
                        var_20 = ((/* implicit */unsigned int) ((var_11) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(unsigned char)7] [(signed char)2] [(unsigned char)7] [i_7])) ? (((/* implicit */long long int) 330719508U)) : (arr_8 [i_0] [i_5]))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((max((arr_1 [i_8]), (((/* implicit */unsigned int) arr_22 [i_8] [8U] [i_8] [(unsigned char)12] [i_8])))), (((/* implicit */unsigned int) (short)0))));
        arr_28 [15ULL] [10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_21 [(unsigned char)10] [(short)11] [(short)11] [3ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [13LL] [i_8] [i_8]))))) : (((/* implicit */long long int) arr_18 [i_8] [i_8]))))) || (((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [(signed char)12]))) : (((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_21 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_37 [i_8] [(_Bool)1] [i_8] [i_11] [i_8] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (max((((/* implicit */int) (unsigned char)99)), (((((/* implicit */int) arr_0 [i_8] [(short)0])) >> (((/* implicit */int) (_Bool)0))))))));
                        /* LoopSeq 2 */
                        for (short i_12 = 4; i_12 < 18; i_12 += 1) /* same iter space */
                        {
                            arr_40 [(unsigned short)16] [i_9] |= ((/* implicit */unsigned char) arr_9 [(unsigned char)10] [(unsigned char)10] [i_11]);
                            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-1)) : (arr_12 [(short)18] [(unsigned char)15] [i_10] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned short)10] [(_Bool)1] [i_12] [(unsigned short)10] [i_9] [i_11]))) : (((((/* implicit */_Bool) arr_36 [(unsigned char)17] [i_10] [i_11] [i_12])) ? (arr_38 [i_11] [(_Bool)1] [i_11] [i_10] [(unsigned char)8] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)193)))) : (((/* implicit */int) arr_39 [i_12 - 1] [i_12 - 1] [(unsigned char)7] [i_11] [(_Bool)1])))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_12 [1ULL] [(unsigned char)10] [(unsigned char)10] [i_12 + 1]) >= (((/* implicit */int) var_8))))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [(unsigned short)6] [i_11] [i_10] [i_10] [i_10] [(unsigned short)18] [i_8])) : (((/* implicit */int) arr_34 [i_8] [i_8] [i_10] [i_11]))))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) : (((/* implicit */int) (unsigned char)3)))))));
                        }
                        for (short i_13 = 4; i_13 < 18; i_13 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_11))));
                            arr_45 [i_8] [i_8] [i_11] [15] [i_13] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((arr_34 [i_13 + 2] [i_13] [18] [i_13 + 1]), (arr_34 [i_13 - 3] [i_13 - 4] [(unsigned char)8] [i_13 + 1])))), (((var_11) * (((arr_11 [i_8] [12U] [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8])))))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_14 [i_13] [i_13 + 2] [(unsigned short)6] [(_Bool)1] [i_13 - 2] [i_13 - 2]) ? (((/* implicit */int) arr_13 [i_13] [i_13 + 2] [i_13] [(_Bool)1] [7] [i_13 - 2] [(_Bool)1])) : (((/* implicit */int) (signed char)1))))) ? (((arr_14 [i_13 + 2] [i_13 + 2] [4LL] [(unsigned short)18] [13U] [i_13 - 2]) ? (((/* implicit */int) arr_13 [(short)19] [i_13 + 2] [i_13 + 2] [i_13] [i_13] [i_13 - 2] [(_Bool)1])) : (((/* implicit */int) arr_13 [12U] [i_13 + 2] [i_13] [i_13 + 1] [i_13] [i_13 - 2] [i_13 - 4])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)62)) < (((/* implicit */int) (_Bool)1))))))))));
                        }
                    }
                } 
            } 
        } 
        arr_46 [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [(unsigned short)15] [i_8])) ? (((/* implicit */int) arr_36 [17] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_36 [i_8] [i_8] [(unsigned char)19] [i_8])))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((var_4) || (((/* implicit */_Bool) var_3)))))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), ((((_Bool)0) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))))) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15)))))) : (((/* implicit */int) max((((unsigned char) var_12)), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_0))))))))));
}
