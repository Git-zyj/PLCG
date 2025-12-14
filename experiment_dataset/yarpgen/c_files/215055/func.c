/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215055
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            arr_5 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (~(15612519093471944268ULL)));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_3] [(short)7] [i_1 - 4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [12LL])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))));
                        arr_15 [i_3] [i_3] [8] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */int) (unsigned char)126)) >= (((/* implicit */int) (unsigned short)254))))))) >> (((arr_6 [i_0] [i_1] [i_2]) - (3338463889U)))));
                    }
                } 
            } 
            arr_16 [16LL] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 3] [i_1 - 4])) ? (arr_12 [i_1 - 4] [(_Bool)1] [i_0] [(_Bool)1] [i_0]) : (((/* implicit */int) arr_7 [i_0] [i_1]))))), (((((long long int) arr_9 [i_0])) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
            arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) -134217728)) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : ((+(arr_1 [i_0]))));
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) 12))));
        }
        var_14 |= ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]);
        arr_18 [i_0] [i_0] = min((((((/* implicit */_Bool) 15612519093471944268ULL)) ? (((/* implicit */long long int) (+(12)))) : (72057594037927872LL))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_9 [i_0]) : (((/* implicit */long long int) arr_6 [i_0] [(short)3] [i_0])))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_6 [3ULL] [i_6] [(short)13]))));
                        arr_29 [i_4] [i_4] [12LL] [i_4] [6LL] [i_4] |= ((/* implicit */long long int) arr_12 [i_7] [i_7] [i_7] [14ULL] [i_7]);
                        var_16 ^= ((/* implicit */_Bool) -134217728);
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_6 + 2])) ? (((arr_8 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [(_Bool)1]))))) : (((((/* implicit */long long int) var_1)) | (min((((/* implicit */long long int) arr_3 [i_4] [(_Bool)1] [i_6])), (arr_8 [i_7] [i_5] [i_5] [i_4]))))))))));
                        arr_30 [i_4] [i_5] [i_6] [i_7] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((short) arr_22 [i_6] [i_5]))) ? (((((/* implicit */_Bool) arr_27 [i_7] [i_5] [i_5] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_20 [i_4])))) : (((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) (short)27)) : (((/* implicit */int) (unsigned short)65535))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            arr_34 [i_4] = ((/* implicit */int) ((((((/* implicit */long long int) (+(((/* implicit */int) (signed char)77))))) < (arr_1 [4]))) ? (((((/* implicit */_Bool) ((long long int) arr_20 [i_8]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2834224980237607370ULL)) ? (((/* implicit */int) arr_26 [i_4])) : (((/* implicit */int) (short)(-32767 - 1)))))) : (((long long int) 15612519093471944265ULL)))) : (((/* implicit */long long int) (-(max((arr_12 [i_4] [i_8] [i_4] [6LL] [(unsigned char)4]), (arr_0 [i_4] [i_8]))))))));
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (long long int i_10 = 3; i_10 < 19; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_38 [i_4] [(short)8] [i_9] [i_10 + 1] [i_11] [i_8]))));
                            arr_41 [i_4] [i_8] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */short) arr_40 [(short)5] [i_8] [i_9] [i_10 - 1] [(short)5] [i_10 - 1] [i_9]);
                            arr_42 [i_4] [i_8] [(short)4] [i_10 - 2] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15612519093471944268ULL)) ? (((/* implicit */long long int) arr_12 [i_4] [8LL] [i_9] [18] [i_11])) : (arr_2 [i_9])));
                            arr_43 [i_9] [i_10] [i_11] = (~(((long long int) arr_20 [i_10 - 3])));
                        }
                    } 
                } 
            } 
        }
        arr_44 [i_4] = ((/* implicit */_Bool) var_8);
    }
    var_19 |= ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned char) (short)27))) == (((/* implicit */int) var_12)))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255)))) & (((/* implicit */int) (unsigned char)236)))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_9))))));
}
