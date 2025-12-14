/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213390
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
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (max((var_5), (((/* implicit */int) var_3)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_0])) : (arr_6 [i_0 - 1] [i_2 - 2] [i_2]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_7)) : (arr_5 [i_2 - 2] [i_0 - 1]))))));
                    var_16 = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 7; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */short) (signed char)(-127 - 1));
                    arr_16 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3] [i_4] [(signed char)6])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_5])) ? (var_5) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_3] [2ULL])) : (arr_5 [i_4] [i_5])))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (((-(max((arr_3 [i_3] [(_Bool)1]), (((/* implicit */int) var_8)))))) / (((/* implicit */int) ((unsigned short) (unsigned char)63))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((var_18), (((((((/* implicit */int) ((short) var_9))) != (((/* implicit */int) var_0)))) ? (var_1) : (((((/* implicit */int) ((((/* implicit */unsigned int) var_4)) >= (var_11)))) + (((/* implicit */int) ((var_12) != (var_4))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) /* same iter space */
    {
        arr_20 [i_6 - 2] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_0))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 2) /* same iter space */
    {
        arr_23 [i_7 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [(unsigned char)12] [i_7 - 1])) ? ((+(((/* implicit */int) arr_19 [(unsigned short)6] [i_7 + 1])))) : (((/* implicit */int) arr_17 [i_7]))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_24 [i_7] [i_7] [i_7]))))) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_17 [i_8]))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_13))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_21 [i_7] [i_7]))));
        }
    }
}
