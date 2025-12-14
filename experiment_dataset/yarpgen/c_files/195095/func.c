/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195095
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
    var_10 -= ((/* implicit */unsigned int) ((signed char) ((unsigned int) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) (signed char)13))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [16LL] [i_0] = ((/* implicit */_Bool) 16777215U);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_11 = (!(((arr_7 [i_2 + 1] [i_1] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (+(2934592612U))))));
                            arr_13 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_1] [i_2 + 1])))));
                        }
                        var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 435503660U)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_1] [i_2]))))) ? (var_8) : (((/* implicit */long long int) (+(arr_7 [i_0] [i_3] [i_2])))))) & (6752051579168277413LL)));
                    }
                } 
            } 
        } 
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 23; i_7 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((16777215U) - (4278190080U)));
                        arr_25 [i_7] [i_8] [i_7] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_16 [i_5] [i_7 - 1])) ? (((/* implicit */int) arr_16 [i_6] [i_7 - 2])) : (((/* implicit */int) arr_16 [i_6] [i_7 + 1])))) - ((+(((/* implicit */int) arr_16 [i_5] [i_7 - 1]))))));
                        arr_26 [i_5] [i_5] [i_5] [i_5] [(signed char)18] [i_7] = ((/* implicit */signed char) (+((-(min((((/* implicit */unsigned int) arr_9 [i_5] [i_6])), (var_1)))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_29 [i_7] [i_6] [4U] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_17 [i_6 - 1] [i_9 - 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_6 - 1] [i_9 - 1]))))) ? (((unsigned int) 2550095249U)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5])))));
                        var_17 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((/* implicit */signed char) arr_10 [i_9] [i_9 - 1] [i_7 - 1] [i_6 - 1])), (arr_9 [i_7 - 1] [i_6 - 1])))), (min((((/* implicit */unsigned int) arr_9 [i_7 - 1] [i_6 - 1])), (1360374671U)))));
                    }
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_18 = max((arr_20 [i_5] [i_6 - 1]), (((/* implicit */unsigned int) (signed char)124)));
                        var_19 += arr_3 [i_6];
                        arr_34 [20U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_27 [(signed char)8] [i_7 - 2] [8U]), (((/* implicit */unsigned int) arr_12 [i_7 - 1] [i_7] [i_7] [i_7] [i_7] [i_7] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_7 - 1] [i_7] [i_7] [i_7] [(signed char)14] [i_7] [i_6]), (arr_12 [i_7 - 2] [i_7] [0LL] [i_7] [i_7] [i_7] [i_5]))))) : (((long long int) var_4))));
                        var_20 += ((/* implicit */unsigned int) arr_12 [i_5] [i_5] [i_6] [i_6 - 1] [(signed char)5] [i_10] [i_10]);
                        var_21 = ((/* implicit */unsigned int) ((var_6) ? (min((((/* implicit */long long int) ((arr_24 [i_7] [17LL] [i_6] [i_5] [i_7] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7] [i_6] [i_5] [i_5] [i_7]))) : (2550095249U)))), ((~(var_8))))) : (((/* implicit */long long int) var_1))));
                    }
                    var_22 *= arr_32 [0U] [0U] [12U];
                    var_23 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) 4254650794U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) : (2084064854U)))), (68719476735LL))), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_31 [i_5] [i_6] [i_7] [i_6 + 1])))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            arr_37 [i_11] = ((/* implicit */signed char) ((unsigned int) ((long long int) arr_21 [i_5] [i_11] [i_11] [i_5])));
            var_24 = ((/* implicit */signed char) var_8);
            var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (signed char)-41)), (3859463636U)))))) ? (max((((((/* implicit */_Bool) 31U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_11])) ? (((/* implicit */int) arr_12 [i_5] [i_11] [i_5] [i_11] [i_11] [i_5] [i_11])) : (((/* implicit */int) arr_15 [6U]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_5] [i_11] [16U] [i_5])))))));
            var_26 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)-62)))))) & (max((-1LL), (((/* implicit */long long int) (signed char)-56))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 2; i_12 < 23; i_12 += 4) 
        {
            for (unsigned int i_13 = 2; i_13 < 23; i_13 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)-115)))) > (((/* implicit */int) ((((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5])) >= (((/* implicit */int) arr_31 [i_5] [i_12 - 2] [i_13 - 1] [i_12 + 1]))))))))));
                    var_28 = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) arr_21 [i_5] [i_12] [i_13] [i_5])))));
                }
            } 
        } 
    }
}
