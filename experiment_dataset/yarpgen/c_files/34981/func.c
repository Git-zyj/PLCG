/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34981
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
    var_11 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -3837905418052919889LL)))))) : (((((/* implicit */_Bool) (short)-17668)) ? (-7136657212387499865LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)68)))))))));
    var_12 = ((/* implicit */long long int) (unsigned short)43217);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) (unsigned char)252);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_14 ^= ((/* implicit */signed char) (-(min((((/* implicit */int) (unsigned char)217)), ((~(((/* implicit */int) (short)12142))))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_0]) ? (((((/* implicit */_Bool) 144080003703767040LL)) ? (-16) : (((/* implicit */int) (_Bool)1)))) : ((~(var_3)))))) ? (((/* implicit */int) (_Bool)0)) : (((arr_1 [i_1] [i_2]) ? (((/* implicit */int) arr_8 [i_2] [0ULL] [0ULL])) : (((((/* implicit */int) (short)(-32767 - 1))) ^ (1064057247)))))));
                    var_16 = ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_6 [i_0])), (arr_2 [i_0] [i_2]))), (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((arr_7 [i_0 - 1] [i_0 + 1] [(unsigned short)6] [i_0 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [(unsigned short)8] [i_2]) : (((/* implicit */int) (signed char)-15))))) || (((/* implicit */_Bool) 3479191401U))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_3] [i_3] [i_1])))))));
                                var_18 |= ((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_1]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_5]))))) ? (-964068163) : (((/* implicit */int) (signed char)-114))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            arr_22 [i_7] [i_5] [i_5] [i_6] [(short)15] [(short)15] [i_6] = arr_16 [12] [i_1] [i_1] [(short)2];
                            var_20 ^= ((/* implicit */int) ((unsigned short) arr_9 [i_0 + 1] [i_0 - 1] [(signed char)12]));
                        }
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_3 [(short)4])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1864440558U)))))));
                            var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_6] [i_0])) ? (((/* implicit */int) (unsigned short)38287)) : (((/* implicit */int) var_10))))));
                            var_23 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0 - 1]))));
                        }
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_2 [i_5] [i_1]))));
                    }
                    var_25 = ((/* implicit */int) ((long long int) arr_7 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-6)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                        arr_29 [i_0 + 1] = ((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_9]);
                        var_27 = ((/* implicit */short) ((arr_11 [i_0 + 1] [i_0 + 1] [i_9 + 1] [i_0 + 1] [(_Bool)1] [i_9]) ^ (arr_11 [i_0 - 1] [i_0 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_9])));
                        arr_30 [(signed char)8] [i_1] [i_5] [i_9 + 1] = ((/* implicit */short) (-(13390299646938800086ULL)));
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (3099567177079224166LL)))) ? (((/* implicit */int) min(((unsigned char)248), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) (!(var_4)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
