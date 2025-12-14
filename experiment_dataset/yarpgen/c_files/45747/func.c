/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45747
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 6; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */int) var_5);
                    arr_9 [i_0] [i_0 - 1] [i_0] [i_2] = ((arr_7 [i_0 - 1] [i_2 - 2] [i_2] [(signed char)6]) / (arr_7 [i_0 + 1] [i_2 + 4] [3LL] [i_2]));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) (-(arr_3 [i_0 - 1] [i_0])));
    }
    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_11 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((/* implicit */long long int) ((int) arr_11 [i_3 - 1])))));
        var_18 &= ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1656880552)) ? (((/* implicit */long long int) arr_10 [(unsigned short)4] [(unsigned short)4])) : (arr_11 [i_3]))))))) : (arr_10 [10LL] [i_3]));
        var_19 -= ((/* implicit */unsigned short) arr_11 [i_3 + 2]);
    }
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) var_13);
        var_21 = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) (signed char)94)))) * ((+(((/* implicit */int) (unsigned short)0))))));
        arr_17 [i_4] = ((658839750) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (var_7) : (arr_15 [(unsigned short)16])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9)))));
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                arr_26 [(signed char)2] = ((/* implicit */unsigned short) var_11);
                arr_27 [i_5] [i_6] [13LL] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)20307)) ? (((/* implicit */int) (short)5492)) : (658839763)))) : (((((/* implicit */_Bool) var_16)) ? (1863151258886702109LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    arr_31 [i_5] [i_6] [i_7] [i_8] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_5]))));
                    arr_32 [(unsigned short)14] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */short) -4864396965310723352LL);
                }
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    var_22 |= (~(((/* implicit */int) arr_22 [i_6] [i_6 + 1] [12])));
                    var_23 = ((/* implicit */unsigned char) arr_18 [i_9]);
                }
                for (signed char i_10 = 1; i_10 < 18; i_10 += 4) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5])) ? ((~(((/* implicit */int) (unsigned char)82)))) : (((/* implicit */int) (signed char)126))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 2; i_11 < 17; i_11 += 4) 
                    {
                        arr_41 [i_11] [i_6] [3LL] [i_6] [i_5] = ((/* implicit */unsigned short) arr_22 [i_6] [i_10 + 1] [i_11 + 2]);
                        arr_42 [i_5] [i_6] [i_10] [(signed char)11] = ((((/* implicit */_Bool) (unsigned char)152)) ? ((~(((/* implicit */int) arr_24 [i_5] [i_5] [i_5])))) : ((-(658839750))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) arr_30 [i_10] [i_10] [7] [i_10 - 1] [16LL])) : (((/* implicit */int) var_12))));
                    }
                }
            }
            for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                var_26 = ((/* implicit */int) ((((_Bool) var_13)) ? (arr_21 [i_5] [i_5]) : (arr_36 [i_5] [i_6 + 2] [2] [i_6 - 1] [2])));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)112)) < (((/* implicit */int) (_Bool)1))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) arr_38 [i_5] [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 1]))));
                arr_45 [i_12] = arr_14 [i_5] [i_5];
                /* LoopSeq 1 */
                for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) 
                {
                    arr_49 [i_12] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_24 [i_6 - 1] [i_6] [i_13 - 1]))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3872))) : (((((/* implicit */_Bool) -510946235)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6331250404339260103LL)))));
                    arr_50 [i_5] [(_Bool)1] [(_Bool)1] [i_12] [(unsigned short)13] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5] [(unsigned short)0] [i_6 + 2] [i_13 + 1] [i_13]))) <= (arr_36 [(unsigned short)10] [i_6] [i_6 + 2] [i_13 + 1] [i_13])));
                }
            }
            arr_51 [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
        }
        arr_52 [(unsigned short)2] = ((/* implicit */signed char) min((arr_15 [i_5]), ((-(arr_23 [i_5])))));
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-20307)))) - (0U)))) ? (max(((+(arr_11 [5LL]))), (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [15U])) + (((/* implicit */int) (unsigned short)18372))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) var_9))))) || (((/* implicit */_Bool) arr_40 [i_5])))))))))));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6331250404339260097LL))))) : (((/* implicit */int) var_9))))) ? ((+(722388409U))) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_10)))))));
    var_32 = ((/* implicit */signed char) var_8);
}
