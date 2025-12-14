/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210588
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
    var_18 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-30253))))) / ((+(3059919927U))))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)19894)), (var_6))))) : ((~(2720767004533042586LL))))) - (29886LL)))));
    var_19 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((2519710217U) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (var_3) : (-1842588428))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32757)) + (2147483647))) >> (((var_16) + (172300179)))))) : (min((var_10), (((/* implicit */unsigned long long int) var_13)))))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_9 [5LL] [i_1] [i_2] [i_3] |= (!(((/* implicit */_Bool) ((unsigned char) ((arr_5 [i_0 - 2] [(signed char)2] [i_0] [15]) >> (((-866410943) + (866410960))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */short) ((int) ((1775257085U) << (((var_3) + (1853623261))))));
                            var_22 = ((/* implicit */unsigned int) ((unsigned char) arr_6 [i_4 - 3] [(short)8] [7] [i_0] [i_1] [i_2]));
                            arr_12 [i_4] = ((/* implicit */short) ((unsigned int) var_7));
                            arr_13 [i_4] [i_1] [(signed char)14] [3ULL] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((1862337845U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (arr_1 [i_0]))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [(signed char)14] [4U] [(_Bool)1] [i_6])) ? (-866410939) : (((/* implicit */int) arr_10 [i_5] [(_Bool)1] [i_5] [i_5 + 2] [i_6]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -866410918))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (4294967272U))))))));
                        var_24 *= ((/* implicit */_Bool) min((((unsigned char) (~(((/* implicit */int) var_7))))), (((/* implicit */unsigned char) ((signed char) var_12)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                arr_26 [i_5] = ((/* implicit */_Bool) var_5);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -866410914)) * (var_10)))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1]) / (arr_3 [i_0 + 2])))) : (((((/* implicit */unsigned long long int) 866410916)) * (var_2)))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-19897))))) ? (((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */int) arr_24 [i_0 + 2])) : (((/* implicit */int) (signed char)27)))) : (var_9)))) ? (((((16515072U) - (((/* implicit */unsigned int) -866410937)))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_31 [i_5] [i_5 - 1] [i_5 - 1] [i_8] [i_8] &= ((/* implicit */int) (signed char)-1);
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) (_Bool)1);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 2; i_11 < 14; i_11 += 4) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((arr_27 [i_5 - 1] [i_0 + 3] [0LL] [i_11 + 1]) ? (((/* implicit */int) (short)-19911)) : (((/* implicit */int) (signed char)-30))));
                arr_35 [i_5] = ((/* implicit */short) ((arr_27 [i_0] [i_5 - 1] [i_11 - 1] [i_0 + 2]) ? (((/* implicit */int) (short)-19898)) : (((/* implicit */int) arr_27 [i_0 + 3] [i_5 + 1] [i_11 + 3] [i_0 + 2]))));
                var_29 += ((((((/* implicit */int) var_14)) >> (((arr_32 [i_5 + 1] [i_5 + 1] [i_0 + 2]) - (3884118558U))))) + (((/* implicit */int) arr_24 [i_5 - 1])));
            }
            arr_36 [i_0 + 1] [i_0] [i_5] = ((/* implicit */short) arr_28 [i_5] [i_5 + 1]);
        }
        arr_37 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [12LL]))))) : (max((((((/* implicit */long long int) arr_23 [i_0 - 3] [16LL] [0LL] [i_0])) - (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (short)-19876)))))))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 1; i_12 < 9; i_12 += 3) 
    {
        var_30 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)-19921)) : (((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(signed char)0]))))));
        arr_40 [i_12] [i_12] = ((/* implicit */_Bool) arr_5 [i_12 + 1] [i_12 - 1] [i_12] [i_12]);
    }
}
