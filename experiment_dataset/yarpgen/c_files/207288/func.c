/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207288
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned short) min(((-(arr_3 [i_0 - 2] [i_0 - 1]))), (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (signed char)-88)), (2423091317U))))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((2423091317U) << (((arr_2 [i_0] [i_0 + 1]) - (761662103689915649ULL)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_0 [i_0 - 1] [i_0 + 1]))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((long long int) var_0))))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (1871875965U)))))))));
            var_15 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0] [23U])) : (((/* implicit */int) var_1)))), ((-(((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (arr_8 [i_0 + 1] [i_0 - 2]))))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(arr_3 [i_0 - 2] [i_0 - 2]))))));
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)184))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 2])) ? (arr_3 [i_2] [i_0 - 2]) : (arr_3 [i_0] [i_0 + 1])))) ? (min((arr_3 [i_0] [i_0 - 1]), (((/* implicit */long long int) (unsigned short)36188)))) : (((/* implicit */long long int) ((unsigned int) 2423091317U))))))));
        }
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            var_19 = min((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) ((arr_0 [(unsigned short)20] [(unsigned short)20]) >= (((/* implicit */long long int) 2423091330U))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1871875965U)) && (((/* implicit */_Bool) var_4))))))), (((/* implicit */int) (unsigned short)5568)));
            /* LoopSeq 2 */
            for (int i_4 = 2; i_4 < 23; i_4 += 3) 
            {
                var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (1871875992U))))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-((+(1871875973U))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_4 [i_4] [i_3]))));
                            var_23 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((-(((/* implicit */int) (short)30974)))))))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_11 [(signed char)5])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2)))))) | (((/* implicit */int) ((short) (short)-16985))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == ((-(((/* implicit */int) var_11)))))))));
                arr_20 [i_3] [i_3] [i_0] = min((((/* implicit */int) (!(((/* implicit */_Bool) (+(1871875965U))))))), ((~(((/* implicit */int) (signed char)104)))));
                var_26 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)16963)) ? ((-(1871875954U))) : (arr_4 [(_Bool)1] [i_3])))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((unsigned short) (-(((((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_7] [22] [i_0])) ? (4167754831U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_17 [i_0] [i_3] [i_3] [i_8] [i_3] [i_3]))));
                            arr_28 [i_8] [i_8] [i_7] [i_3] [i_8] = min(((+(((/* implicit */int) arr_11 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_8] [i_0 + 1] [i_7] [i_3] [i_8]))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_0 - 1] [i_7])))))));
            }
            var_30 = ((/* implicit */signed char) min((1871875978U), (127212452U)));
        }
        var_31 = ((/* implicit */unsigned int) max((var_31), ((~(1871875978U)))));
    }
    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 1) 
    {
        var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1984384448) & (((/* implicit */int) arr_7 [i_10 - 1]))))) ? (arr_5 [i_10 + 1] [i_10] [(unsigned short)18]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10 - 1] [i_10] [i_10 - 1] [i_10 + 2])))))) == (arr_2 [i_10] [i_10])));
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            for (unsigned int i_12 = 1; i_12 < 19; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 20; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */int) ((((long long int) arr_10 [i_11 - 1])) / (((/* implicit */long long int) (+((+(((/* implicit */int) var_0)))))))));
                                var_34 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_30 [i_13 + 1] [i_13]))))));
                            }
                        } 
                    } 
                    arr_41 [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45579)) - (((/* implicit */int) (short)21286))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_11] [i_11 - 1] [i_10 - 1] [i_11 + 1] [i_11]))))) : ((~(((/* implicit */int) (unsigned char)21))))));
                }
            } 
        } 
        var_35 = ((/* implicit */signed char) min(((-((~(arr_25 [i_10] [i_10] [i_10 + 1] [(short)10] [i_10 + 1]))))), (((/* implicit */long long int) var_11))));
        var_36 = ((/* implicit */unsigned char) 1871875955U);
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) var_4))));
    }
    var_38 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -1402938662)) ? (((4167754844U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) var_0))));
}
