/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204425
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_17 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (((/* implicit */int) var_10)))) / (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_1]) : (((/* implicit */int) var_8))))));
            var_18 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_1]);
            var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [11] [11] [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) var_3))))));
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */int) var_12))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_9))));
        }
        var_20 = ((/* implicit */short) (-(arr_3 [i_0])));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [23ULL]))))) ? (arr_2 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) var_16)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) arr_3 [i_2]);
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(arr_6 [i_2] [i_3]))), (arr_0 [i_2] [i_2]))))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (arr_12 [i_6])));
                            var_24 = ((/* implicit */signed char) arr_11 [i_6] [i_3] [i_2] [i_4]);
                            var_25 = ((/* implicit */signed char) arr_3 [i_5]);
                            arr_19 [i_2] [i_2] [i_4 + 2] [i_4 + 2] [i_4] = ((((/* implicit */_Bool) max((1879775060U), (((/* implicit */unsigned int) 2039134407))))) ? (((((((/* implicit */_Bool) arr_15 [i_4])) || (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) : (max((2039134407), (2039134411))))) : (((/* implicit */int) var_11)));
                        }
                    } 
                } 
            } 
            arr_20 [i_2] [i_2] = ((/* implicit */signed char) (-(((((arr_6 [i_2] [i_3]) > (((/* implicit */int) arr_7 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_3 [i_2])))));
            arr_21 [(short)10] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_2] [i_2] [(short)16] [i_3] [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) var_7))))))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        {
                            arr_28 [i_9 - 1] [i_8] [(signed char)3] [i_7 + 1] [i_3] [i_8] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_7 - 1] [i_7] [i_7] [i_7])) ? (max((arr_14 [i_2] [i_2] [i_3] [i_7] [i_8] [i_9 + 1]), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) != (arr_2 [i_2] [i_2] [3ULL])))))) : (((/* implicit */int) arr_10 [i_8]))));
                            arr_29 [i_8] [i_3] [(signed char)13] [i_8] [i_3] [i_3] = ((/* implicit */unsigned int) (+(min((arr_18 [i_7 + 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]), (((/* implicit */int) arr_16 [i_7 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(arr_9 [i_2])))) ? (((/* implicit */unsigned long long int) arr_14 [1ULL] [i_10] [i_10] [i_2] [i_10] [i_2])) : (((((/* implicit */_Bool) arr_11 [11ULL] [i_2] [11ULL] [i_10])) ? (arr_2 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
            arr_32 [i_2] [i_2] [i_10] = ((/* implicit */short) max(((unsigned short)54724), (((/* implicit */unsigned short) (short)11615))));
            arr_33 [i_10] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1531105698)) >= (9937683171564104157ULL)))), (max((arr_23 [i_2] [i_10] [i_2] [i_2]), (arr_23 [i_2] [i_10] [i_10] [i_10])))));
        }
    }
    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_12)), (var_14))))));
}
