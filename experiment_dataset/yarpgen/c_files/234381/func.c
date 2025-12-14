/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234381
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_10)))))) : (max((((/* implicit */unsigned int) (signed char)-108)), (var_6)))))), (((long long int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [(unsigned short)2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) : (3263882469488330815ULL)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (arr_0 [i_0])));
                                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_7 [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) (+(var_6)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_15 &= arr_15 [i_5] [i_5];
        var_16 |= ((/* implicit */unsigned char) (-(arr_15 [i_5] [i_5])));
        var_17 = ((/* implicit */unsigned char) ((unsigned short) arr_15 [i_5] [i_5]));
        arr_16 [i_5] [6LL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) : (((((/* implicit */unsigned long long int) arr_14 [i_5])) & (arr_15 [i_5] [(unsigned short)2])))));
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-62))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15182861604221220800ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6]))) : (arr_17 [i_6])))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_18 [i_6] [i_6]))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1026211404U))))))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
        arr_19 [i_6] = ((/* implicit */unsigned int) (~(arr_17 [2U])));
    }
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~((~(arr_15 [i_8] [i_10]))))))));
                                var_23 -= ((/* implicit */unsigned long long int) arr_27 [10LL]);
                            }
                        } 
                    } 
                    arr_31 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (((~(1222962856976154218ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_9] [i_8])) ? (590270557478353914LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [(signed char)11] [(signed char)12])) >= (((/* implicit */int) arr_30 [i_7] [0] [i_9] [i_7] [i_7])))))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) arr_29 [i_7] [3] [3] [3] [i_7] [i_7] [i_7]);
    }
    var_25 = ((/* implicit */unsigned short) var_0);
}
