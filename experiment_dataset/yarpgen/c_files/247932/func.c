/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247932
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
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 2]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0 - 1])) ^ (((/* implicit */int) arr_0 [i_0 - 1])))))))));
        var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 2]))))))) || (((/* implicit */_Bool) arr_1 [i_0 - 1] [(short)23]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((unsigned long long int) arr_0 [(unsigned char)6])) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 + 1]))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] = arr_6 [i_1];
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            var_20 = ((/* implicit */_Bool) arr_1 [(unsigned short)4] [i_2]);
            /* LoopSeq 4 */
            for (short i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                arr_13 [i_1] = ((/* implicit */unsigned char) (-(((((_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((unsigned char) arr_6 [i_1]))) : (((/* implicit */int) ((unsigned short) arr_5 [i_1])))))));
                var_21 -= ((/* implicit */unsigned char) (-(((int) arr_10 [i_1] [i_1 + 1] [i_1] [8ULL]))));
            }
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
            {
                var_22 = ((unsigned short) arr_2 [i_1]);
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_2] [8U])) ? (((/* implicit */int) ((unsigned char) arr_15 [i_4] [i_1] [i_1] [i_1 + 2]))) : (((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2 + 1] [i_1])))))));
            }
            for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
            {
                arr_19 [i_5] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_1] [i_1])) / (((/* implicit */int) ((unsigned short) arr_15 [i_1] [i_1] [i_5 + 1] [i_5])))));
                arr_20 [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 - 1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_10 [i_1 + 2] [i_2] [i_2 - 1] [i_1]))))) >= (((((/* implicit */_Bool) arr_10 [i_1 + 2] [10U] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_10 [i_1 + 2] [i_2 + 1] [i_1 + 2] [i_1]))))));
            }
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                arr_23 [i_1] = ((/* implicit */int) (-(arr_15 [i_1] [i_1] [i_1] [i_1])));
                var_24 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_12 [(unsigned char)6] [(_Bool)1] [i_6] [i_6])) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 2] [i_2 - 1] [i_6])) : (((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_1])))))) >= (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_2])))));
                var_25 += ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) ((short) arr_14 [i_1] [i_6] [i_6]))))));
            }
            var_26 += ((/* implicit */unsigned char) arr_2 [i_1 + 1]);
            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) arr_1 [i_1] [i_2 + 1])));
        }
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_1 [(unsigned short)6] [i_1]))))))));
            var_28 = ((/* implicit */unsigned char) ((int) arr_11 [i_1] [i_7 + 3] [i_7]));
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                arr_29 [i_1] [i_7] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_8] [i_1])))))));
                var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_18 [i_1] [i_1])))));
                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (-((+(((/* implicit */int) arr_11 [i_8] [i_7 + 3] [i_8])))))))));
                arr_30 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_1]))));
            }
            var_31 = ((/* implicit */unsigned char) max((var_31), (arr_9 [i_1 - 1])));
        }
        arr_31 [i_1] = ((((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_18 [i_1] [i_1])) : (((/* implicit */int) arr_25 [i_1] [(signed char)6])))) - (((((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_6 [i_1])))))) - (((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) - (((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 1])))))));
    }
    var_32 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_13)))))))) != (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (var_8)))));
    var_33 = ((/* implicit */unsigned char) (-((~(var_8)))));
    var_34 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((unsigned char) var_1)))))));
}
