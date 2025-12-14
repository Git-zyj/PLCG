/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231320
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (var_6)))) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_5)))) ^ ((~(((/* implicit */int) var_2))))))), ((((~(var_7))) & (min((((/* implicit */unsigned int) (unsigned char)59)), (var_7)))))));
    var_16 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 262144U)) ? (var_13) : (var_6)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) var_5);
                    var_18 = ((/* implicit */long long int) var_11);
                }
            } 
        } 
        var_19 -= ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned char i_5 = 2; i_5 < 17; i_5 += 4) 
            {
                {
                    arr_15 [i_3] [i_4] [i_3] = ((/* implicit */short) ((_Bool) arr_9 [i_3]));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-63)) ? (3930649713U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3]))))))));
                    arr_16 [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) 7631319511762424440ULL)) ? (arr_10 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) & (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))) : (-4369919550959898835LL)))));
                }
            } 
        } 
        arr_17 [i_3] = ((((/* implicit */_Bool) ((arr_8 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) (short)-3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_3] [i_3] [i_3])))) : (arr_8 [i_3]));
    }
    for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6 - 1])) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) ((unsigned char) 3930649713U)))))) ? (((max((var_7), (2047212534U))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), (arr_18 [i_6]))))))) : (((/* implicit */unsigned int) min((-977614218), (((/* implicit */int) var_9))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7]))) + (var_13)));
                var_23 = ((/* implicit */int) var_2);
                arr_26 [i_8] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (2190766408914579291ULL)))) ? (min((arr_24 [i_8]), (var_6))) : (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))))))));
            }
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 1) 
            {
                arr_31 [i_6] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) ((unsigned char) arr_22 [i_6] [i_7] [i_7]))), (min((((/* implicit */unsigned int) var_2)), (var_3)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */short) arr_29 [i_9] [i_7] [i_9])))))) <= (((((/* implicit */_Bool) arr_33 [i_6] [(short)12] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_13)))))), (max((max((((/* implicit */unsigned long long int) var_3)), (var_6))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) var_2)))))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_6] [i_6 + 4])) : (((/* implicit */int) arr_29 [i_9] [i_9] [i_9]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_9])) != (((/* implicit */int) arr_28 [i_9])))))) : (var_8)));
                }
                for (int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    arr_38 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65408)) ? (max((((((/* implicit */_Bool) 3059437624628769884ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_18 [i_9 + 2])))) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_11)) - (((/* implicit */int) var_1))))))));
                    arr_39 [6LL] [(signed char)20] [i_11] [i_11] [i_9] [i_11] = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) var_0)) ? (364317568U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) ((unsigned short) (signed char)-78)))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    arr_43 [17LL] [i_12] [i_12] [i_9] = arr_42 [i_6] [i_7] [i_9] [i_12] [6U];
                    var_26 = ((/* implicit */unsigned int) -1);
                    arr_44 [(unsigned char)2] [i_7] [i_7] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((var_12) - (10933130626215562319ULL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_0)))));
                }
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) var_3))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_45 [i_6] [i_6] [i_9 + 3] [i_13]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_6 + 1] [(short)14] [i_13]))) - (var_8))))))) || (((/* implicit */_Bool) ((long long int) arr_24 [i_9])))));
                }
            }
            for (unsigned int i_14 = 2; i_14 < 20; i_14 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_46 [i_6 + 1] [i_14 - 2] [i_14 + 1] [i_6 + 1])))), (((/* implicit */int) arr_46 [i_6 + 2] [i_14 - 2] [i_14 + 1] [i_14]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_15 = 2; i_15 < 20; i_15 += 2) 
                {
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((((/* implicit */int) arr_25 [i_15] [i_14 + 1] [i_7] [i_15])) - (((/* implicit */int) var_5)))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_35 [i_15] [i_7])) : (((/* implicit */int) (_Bool)1)))))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_0)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_6 + 3] [i_6 + 3]))))) : (var_10)));
                    var_32 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [16LL] [(_Bool)1] [i_15])))))) ^ (((((/* implicit */unsigned long long int) 3930649713U)) & (var_12)))));
                }
                var_33 = ((/* implicit */_Bool) var_12);
                arr_54 [i_6 + 2] [i_7] [i_14 + 1] = ((/* implicit */long long int) var_10);
            }
        }
        var_34 = ((/* implicit */unsigned short) (~((~(var_12)))));
        arr_55 [i_6] = min((arr_45 [i_6] [i_6 - 1] [i_6] [i_6]), (((/* implicit */long long int) ((((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(unsigned char)2]))) : (var_8))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_6] [i_6] [5ULL] [i_6])))))));
    }
}
