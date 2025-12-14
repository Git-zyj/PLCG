/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231638
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)32767))) ? (((/* implicit */int) ((short) (short)27734))) : (((/* implicit */int) arr_5 [i_1] [i_0]))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_6 [i_0] [i_1])));
        }
        for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            arr_13 [i_2] [(unsigned char)3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7))));
            var_10 *= ((/* implicit */signed char) -1768980391);
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_19 [i_0] [i_0] [(unsigned char)0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(signed char)13] [(unsigned short)17])) ? (1768980386) : (((/* implicit */int) arr_17 [0ULL] [i_3] [(signed char)21]))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_4])) ? (var_0) : (((/* implicit */unsigned int) -1768980391)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_3] [i_4]))))))));
                arr_20 [i_3] [i_3] [i_4] = ((/* implicit */int) ((((arr_18 [i_0] [i_0] [i_3] [i_4]) >> (((arr_18 [i_0] [i_3] [i_0] [i_4]) - (914753356U))))) == (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_4]), (arr_11 [i_0])))))));
            }
        }
        arr_21 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) var_5);
        arr_25 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_17 [i_5] [i_5] [i_5]))) ? (((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_24 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14874)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_23 [i_5]))))) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5])) : (-1650230225)));
    }
    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            arr_30 [i_6] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) -1768980391)) >= (arr_1 [i_6]))) ? (((/* implicit */int) ((short) arr_1 [i_6]))) : (((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_14 [i_7] [(short)14]))))));
            var_13 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 1768980377)), (arr_6 [i_6] [i_7])))))));
            var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1768980386)) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_0 [i_6]))))) ? ((-(((/* implicit */int) arr_0 [i_6])))) : (((/* implicit */int) arr_0 [i_6]))))));
            arr_31 [i_6] [i_6] = ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)216))))) >> (((var_9) - (3957421309236206374LL)))))) & (arr_10 [i_7] [i_7] [i_6]));
        }
        for (int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                arr_38 [i_6] [i_6] [17LL] = ((/* implicit */unsigned int) (unsigned short)42707);
                arr_39 [17] [17] [i_9] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_6] [i_6])) ? (arr_6 [i_6] [14U]) : (arr_6 [0LL] [i_8])));
                arr_40 [i_8] [i_8] |= ((/* implicit */unsigned long long int) arr_3 [i_6] [i_8] [i_9]);
                arr_41 [i_6] [i_6] [i_9] [i_6] = ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_28 [i_6] [i_8] [(unsigned char)21])) : (arr_24 [i_6] [i_9]));
            }
            var_15 ^= ((/* implicit */int) ((((/* implicit */int) ((_Bool) ((unsigned int) var_5)))) < (min((((int) -8701189953044998315LL)), (((/* implicit */int) arr_15 [i_8] [i_6]))))));
            arr_42 [i_6] [i_8] [i_6] = (-(((/* implicit */int) ((signed char) arr_0 [i_6]))));
        }
        var_16 = ((/* implicit */short) arr_5 [i_6] [i_6]);
        arr_43 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_6]))))) ? (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_6])))) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)188))))));
    }
    /* LoopSeq 1 */
    for (signed char i_10 = 4; i_10 < 11; i_10 += 1) 
    {
        arr_48 [i_10] = ((/* implicit */unsigned int) (unsigned char)255);
        arr_49 [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_10] [i_10] [i_10]))));
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_23 [i_10 - 4]))) ? (((/* implicit */int) ((signed char) (unsigned char)40))) : (((((/* implicit */_Bool) arr_23 [i_10 + 1])) ? (((/* implicit */int) arr_23 [i_10 - 4])) : (((/* implicit */int) arr_23 [i_10 - 2]))))));
    }
}
