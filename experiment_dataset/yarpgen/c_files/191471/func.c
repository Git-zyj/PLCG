/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191471
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
    var_18 = ((/* implicit */unsigned int) (+(var_16)));
    var_19 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)4088))))), (arr_4 [10U] [10U] [i_1])));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((11184449311392424983ULL), (4253762055151760041ULL)))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) (unsigned short)15271))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)-16))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] [(unsigned char)11] [14LL] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)82)), (arr_3 [i_0])))), (9800014130037319195ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) var_15))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)15))))) : (((2199006478336LL) * (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_22 &= ((/* implicit */short) ((unsigned char) (signed char)-45));
                        var_23 *= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) 8646729943672232405ULL)))));
                        arr_14 [i_1] [i_0] [i_2] [i_0 - 3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)6)), (-9223372036854775799LL)));
                        var_24 &= ((/* implicit */signed char) var_13);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-100)) ? (2756208759U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_26 = ((/* implicit */long long int) ((_Bool) (unsigned short)26330));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
                        var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (signed char)16)))) >> (((((/* implicit */int) (signed char)-110)) + (138)))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) (signed char)23);
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) max(((signed char)22), ((signed char)-97))))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)178))))) + (((unsigned long long int) min(((signed char)-23), ((signed char)-18))))));
                }
            }
        } 
    } 
}
