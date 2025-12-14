/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21699
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0 - 1] [4U] [i_1])) >= (max((((/* implicit */long long int) var_9)), (6454273667479727141LL)))))))))));
                    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [(_Bool)1] [i_1]))))) ? (((((/* implicit */int) arr_0 [i_1] [i_1])) % (((/* implicit */int) var_4)))) : (min((((/* implicit */int) var_7)), (var_0)))));
                    var_14 = ((/* implicit */unsigned short) (((~(max((((/* implicit */unsigned int) var_8)), (arr_1 [i_0]))))) * (((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_0])))) ? ((-(arr_4 [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))));
                        arr_13 [i_0 - 1] [(_Bool)1] [i_3] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) arr_3 [i_0])))) : ((+(((/* implicit */int) (unsigned short)60298))))));
                        var_17 = ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)));
                        var_18 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_9))))), (min((var_3), (((/* implicit */long long int) (signed char)31))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])) ? (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(signed char)9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0]))))))) / (max((((/* implicit */unsigned long long int) ((var_0) > (((/* implicit */int) var_6))))), ((~(var_5)))))));
                        var_20 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [(signed char)4]);
                        var_21 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0 - 1] [6ULL] [i_5]))));
                    }
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        var_22 -= 2965816382U;
                        var_23 = ((/* implicit */int) min((var_23), ((+(((/* implicit */int) var_4))))));
                        var_24 = ((/* implicit */unsigned long long int) (+((~((~(((/* implicit */int) arr_7 [(signed char)14] [(signed char)14] [i_3] [i_6 + 1]))))))));
                        var_25 = ((/* implicit */short) min((var_25), (((short) (+(((((/* implicit */_Bool) (unsigned short)37037)) ? (((/* implicit */int) var_4)) : (var_10))))))));
                    }
                }
                var_26 -= ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) (short)-27588))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        arr_20 [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_5 [i_7] [i_7] [i_7])), (arr_4 [i_7] [i_7] [i_7])));
        arr_21 [i_7] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_7])) % (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((var_1) || (((/* implicit */_Bool) var_10))))))));
    }
    for (short i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_5)))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65528)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1))))))))));
        arr_25 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_8]))) ? (((/* implicit */long long int) var_10)) : (var_3)));
        var_28 = ((/* implicit */_Bool) var_6);
        var_29 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65509)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)60268))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_30 ^= ((/* implicit */unsigned short) ((short) (~(var_10))));
        var_31 |= min((((unsigned int) ((2078702697U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        arr_28 [(signed char)1] &= (-(((((/* implicit */int) arr_6 [(unsigned short)2])) ^ (((/* implicit */int) arr_8 [(short)4] [(short)4] [(_Bool)1])))));
    }
    var_32 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) var_0)) % (((unsigned long long int) var_6))))));
}
