/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32991
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
    var_17 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_14), ((~(arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_19 *= ((/* implicit */unsigned char) (+(((arr_13 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_2]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1 - 1] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1 - 3] [i_1 + 1] [0LL] [i_3 - 2]))))));
                            arr_14 [i_0] [i_0] [i_3 - 1] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_12 [i_3] [8] [i_3] [i_3] [i_3 - 2])) & (((/* implicit */int) arr_12 [i_3 + 1] [(signed char)2] [i_3] [i_3 + 1] [i_3 + 1]))))));
                        }
                        var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_3]), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) (unsigned char)255)), (((((/* implicit */_Bool) (unsigned char)248)) ? (9315360764762368653ULL) : (((/* implicit */unsigned long long int) 9223372036854775803LL))))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [1LL] [1LL] [i_3])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (9131383308947182959ULL))) : (((/* implicit */unsigned long long int) 3187155740U))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)8141)))), (((/* implicit */int) min(((signed char)-91), (((/* implicit */signed char) arr_8 [i_2] [(_Bool)1])))))))) : (arr_1 [i_1] [i_3 - 2])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_22 = ((/* implicit */_Bool) (-(arr_16 [i_5])));
        arr_19 [i_5] = ((/* implicit */_Bool) ((9315360764762368666ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81)))));
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-18545)) : (((/* implicit */int) var_1))));
        var_23 = ((/* implicit */signed char) (unsigned char)62);
    }
    var_24 = min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (max((1146875526), (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) (unsigned char)252)) ? (9315360764762368653ULL) : (((/* implicit */unsigned long long int) 9223372036854775788LL)))));
    var_25 *= ((/* implicit */unsigned char) var_2);
}
