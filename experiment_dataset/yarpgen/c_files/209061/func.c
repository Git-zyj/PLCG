/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209061
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
    var_14 = ((/* implicit */long long int) (unsigned char)31);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) 14319034133243144131ULL);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19086)) ^ (764770843)))) ? (((/* implicit */unsigned int) (~(arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) 4036136885U)) ? (617864133U) : (3095737709U))))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) arr_5 [i_1] [6ULL]);
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_10 [i_1] [2U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (max((var_10), (((/* implicit */short) arr_4 [i_1] [6U]))))))) > (((/* implicit */int) arr_7 [i_2] [i_2] [(unsigned short)2]))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)10066)) ? (((/* implicit */int) (signed char)-18)) : (-1776534200)))) >= (((arr_0 [i_1] [6U]) & (arr_0 [(signed char)7] [i_1])))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            var_18 = ((/* implicit */int) var_6);
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_1 [i_1] [i_3 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))))) - (var_4))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (var_12)))) ? (((var_0) ^ (var_8))) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (arr_9 [8LL] [i_1] [(unsigned char)5]))))))))))));
        }
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_17 [i_4] [(unsigned short)6] [(unsigned char)10] = ((/* implicit */_Bool) ((arr_4 [i_5] [i_4]) ? (((/* implicit */int) arr_4 [i_4] [i_5])) : (-239373768)));
            var_20 = ((/* implicit */short) -9148966948976913812LL);
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_4] [i_6])) == (arr_2 [i_4] [i_6]))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                arr_26 [i_4] [i_6] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) 2519279570951315039ULL)) ? (((/* implicit */int) (_Bool)1)) : (-1060517107))) - (((1816016110) | (((/* implicit */int) arr_6 [i_4] [(short)11] [(short)11]))))));
                arr_27 [i_4] = ((/* implicit */signed char) ((long long int) var_0));
            }
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_16 [i_6]))));
            arr_28 [i_6] [(unsigned short)10] = ((/* implicit */unsigned short) var_3);
        }
        var_23 = var_11;
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-94)) >= ((~(((/* implicit */int) var_2)))))))));
    }
}
