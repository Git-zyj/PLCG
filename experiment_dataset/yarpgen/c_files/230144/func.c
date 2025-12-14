/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230144
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > ((+(4605977501988502473ULL)))));
        var_14 = ((/* implicit */unsigned int) var_3);
        var_15 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_9);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_14 [7LL] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_1])) <= (((/* implicit */int) (short)3074)))))) <= (max((((/* implicit */unsigned long long int) 9LL)), (16696592941161890030ULL))))))) > ((-(70093866270720ULL)))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((max((((/* implicit */unsigned long long int) 9LL)), (var_8))) * (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4LL) : (arr_4 [i_3])))) ? (max((var_4), (((/* implicit */unsigned int) arr_9 [i_1] [i_2] [1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((long long int) arr_10 [i_1]));
        var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */int) arr_13 [i_1] [(signed char)7])) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) > (var_11))))) <= (arr_5 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 21; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_4 - 4] [i_4 - 1]))));
        var_20 = ((/* implicit */unsigned char) ((-10LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4 - 2])))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_20 [i_6] [i_5] [i_4 - 3]) : (((/* implicit */int) arr_22 [i_6] [i_6] [10] [i_4 + 1])))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_20 [i_4] [i_4] [i_4 - 4]);
                    arr_23 [i_6] [(signed char)6] [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [(unsigned short)12]))) : (18446744073709551615ULL))) & ((~(var_2)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_4 - 3] [i_4 + 1] [i_4 + 1] [i_4 - 2])) <= (((/* implicit */int) arr_22 [i_4 - 3] [i_4 - 4] [i_4 - 1] [i_4 + 1]))));
                    arr_29 [i_4] [i_7] [i_8] = ((/* implicit */signed char) ((arr_28 [(unsigned short)8] [i_4 - 1] [(unsigned short)8] [i_8]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4668)))));
                    arr_30 [i_4] [i_8] [i_8] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_4] [i_8] [i_4 + 1])) ? (arr_20 [i_4 - 2] [i_7] [i_4 - 1]) : (arr_20 [(signed char)20] [(signed char)20] [i_4 + 1])));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_17 [i_7] [i_8])) < (((/* implicit */int) (unsigned short)35918))))))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29618)) > (((/* implicit */int) ((_Bool) 2147483647)))));
                }
            } 
        } 
        arr_31 [i_4 - 3] [i_4 - 3] = ((/* implicit */unsigned char) ((long long int) arr_16 [i_4]));
    }
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        var_26 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1474306555)) ? (((arr_22 [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_10 [i_9])) : (((/* implicit */int) (unsigned short)16660)))) : (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_9] [19U])) + (9248)))))))) : (4LL));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13068)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)30))))) : (((arr_22 [i_9] [(unsigned char)10] [(unsigned char)10] [i_9]) ? (((/* implicit */long long int) var_10)) : (3313395461424756978LL))))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)19137))))), (var_11))))));
        arr_34 [i_9] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)2])) ? (((260046848U) << (((12820735453421738579ULL) - (12820735453421738568ULL))))) : (4294967267U)))), (arr_6 [i_9] [i_9]));
        var_29 = ((/* implicit */unsigned int) max((4LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9022)) <= (((/* implicit */int) (unsigned short)15217)))))));
    }
}
