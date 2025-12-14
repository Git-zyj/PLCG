/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195580
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1]))));
        var_17 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 3]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) arr_0 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_1 [i_2] [i_1 - 3])) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15403))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [(short)5])) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) (signed char)18)))))));
            arr_9 [i_1] = (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 2])));
            var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_0 [1LL] [1LL]))))) % (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_5 [i_1] [i_2]))));
            var_19 = ((/* implicit */unsigned long long int) ((arr_0 [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_0 [i_1 - 3] [i_2])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_2]))));
        }
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = var_9;
            var_21 += ((/* implicit */signed char) ((long long int) var_11));
        }
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)15413))));
                            var_22 = arr_6 [i_1];
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) -93375037594560004LL))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_1] [i_6] [15LL] [i_4] [19] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_20 [i_4] [i_4] [1LL] [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_4]))))) : (((/* implicit */int) arr_17 [i_1 - 3] [i_5] [i_6] [i_6]))));
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-32747)) + (2147483647))) >> (((((/* implicit */int) (short)-15429)) + (15446)))))) ? (((/* implicit */int) ((-9223372036854775782LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5])))))) : (var_14)));
                            arr_29 [i_4] [i_6] [i_5] [i_6] [i_8] |= ((int) (~(var_10)));
                        }
                        arr_30 [i_1] [i_4] [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_5] [10]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 4) /* same iter space */
    {
        var_26 |= ((/* implicit */_Bool) (+(arr_25 [14ULL] [i_9] [i_9 - 1] [14ULL] [i_9] [i_9 + 2] [i_9 - 3])));
        var_27 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_9]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 3; i_11 < 23; i_11 += 4) 
        {
            {
                arr_39 [i_11] [13LL] |= (~(max((((/* implicit */unsigned long long int) var_11)), (arr_37 [i_11 - 1] [i_11 - 1]))));
                arr_40 [(_Bool)1] [i_11] = ((/* implicit */long long int) min((arr_37 [i_10] [i_11]), (min((((/* implicit */unsigned long long int) (short)15409)), (min((9222809086901354496ULL), (((/* implicit */unsigned long long int) (signed char)35))))))));
                arr_41 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_33 [i_11 - 2] [i_11 - 2]))))));
            }
        } 
    } 
}
