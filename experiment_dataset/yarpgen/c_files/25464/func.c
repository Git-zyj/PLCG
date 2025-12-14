/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25464
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
                            var_19 = ((((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [(short)5] [i_1] [i_1] [(short)5]))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_3 [i_2]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) arr_3 [i_0]))));
        }
        for (short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [(unsigned char)13] [i_5] [i_5] [11LL]) : (arr_5 [i_0] [9LL] [9LL] [(short)1])));
            var_23 = ((/* implicit */long long int) max((var_23), (3171082158643521587LL)));
        }
        for (short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_13 [i_0] [(short)4] [i_6] [i_0] [i_6] [i_0] [i_0]))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6] [6LL] [(unsigned char)8])))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_8 [(short)12] [i_0] [i_0] [5LL] [(short)12] [(short)7]))))) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_4 [i_0]))))))));
        }
        var_26 = ((/* implicit */short) min((var_26), (((short) var_2))));
        var_27 = arr_18 [i_0] [i_0];
        var_28 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_14 [i_0] [8LL] [8LL] [(short)6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
        var_29 = ((/* implicit */short) ((((((/* implicit */int) arr_15 [i_0] [(unsigned char)6] [i_0])) == (((/* implicit */int) var_16)))) ? ((-(((/* implicit */int) arr_8 [i_0] [(short)11] [(short)14] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* LoopNest 3 */
    for (long long int i_7 = 1; i_7 < 23; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    var_30 = ((/* implicit */short) ((long long int) max((((/* implicit */long long int) (unsigned char)251)), ((~(arr_25 [(short)19] [i_8] [i_9]))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (long long int i_11 = 3; i_11 < 22; i_11 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6091118754535274542LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)15642)) || (((/* implicit */_Bool) var_4))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_9] [(unsigned char)16])) * (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)28865)) : (((/* implicit */int) arr_28 [3LL] [i_7] [i_7] [(unsigned char)7] [(short)11]))))))))));
                                var_32 = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (max((arr_31 [i_7] [i_8] [i_9] [i_8] [i_11 - 3]), (arr_31 [i_7 - 1] [i_8] [(short)3] [i_7 - 1] [i_11 - 2])))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_9] [i_7])) ? (((/* implicit */int) arr_27 [i_7] [i_7])) : (((/* implicit */int) arr_27 [i_7] [i_9]))))) ? (((((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_9])) ? (((/* implicit */int) arr_28 [i_7 + 1] [i_7] [i_9] [i_7 + 1] [i_8])) : (((/* implicit */int) arr_23 [i_7 - 1] [i_7 - 1])))) : (((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_7] [i_9] [i_7 - 1] [i_7])) ? (((/* implicit */int) arr_28 [i_7] [i_7] [i_8] [i_8] [i_9])) : (((/* implicit */int) (unsigned char)15))))));
                }
            } 
        } 
    } 
}
