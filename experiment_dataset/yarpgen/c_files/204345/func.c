/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204345
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_7);
        var_15 = ((/* implicit */_Bool) min((var_15), (((((((/* implicit */_Bool) arr_1 [11LL])) ? ((+(arr_2 [i_0] [(unsigned short)16]))) : (arr_2 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_6)))))) - (((arr_5 [(unsigned char)11]) - (arr_2 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_4))))) * (arr_5 [11ULL]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_20 [i_3] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) min((((/* implicit */int) ((((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))))) > (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [(_Bool)1] [i_3] [i_4])))))))), (-1959720768)));
                            var_17 = ((((/* implicit */_Bool) ((877926408U) >> (((63) - (33)))))) ? (max((arr_14 [i_1] [i_5] [i_1] [i_3] [i_5]), (arr_14 [i_1] [i_2] [i_3] [i_3] [i_5]))) : (((/* implicit */unsigned int) ((((-57) + (2147483647))) >> (((((/* implicit */int) var_2)) - (6824)))))));
                            arr_21 [i_1] [i_3] [i_3] [i_3] [i_1] [i_5] = ((/* implicit */unsigned char) ((signed char) 238553138));
                            var_18 *= ((/* implicit */signed char) ((3627579544804447093ULL) - (((/* implicit */unsigned long long int) -7232094981171785316LL))));
                            arr_22 [i_2] [i_3] [i_2] [20U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (arr_8 [i_1] [i_1])))) > (var_1)));
                        }
                    } 
                } 
            } 
            arr_23 [i_1] [i_2] = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_17 [(short)8] [i_2] [i_2])))));
            var_19 -= ((/* implicit */unsigned char) ((((-64) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
        }
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((((((/* implicit */int) var_4)) / (((/* implicit */int) var_12)))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == (18446744073709551615ULL)))))))))));
    /* LoopNest 3 */
    for (short i_6 = 2; i_6 < 22; i_6 += 4) 
    {
        for (short i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((arr_0 [i_6] [i_6]) ? (((((/* implicit */unsigned long long int) var_0)) & (arr_5 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_17 [i_6] [i_7 - 2] [i_8])))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) > (arr_24 [i_6 + 1])))))));
                    var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1277439598U)) ? (7988403895164415909ULL) : (((/* implicit */unsigned long long int) 588245003U))))));
                    arr_32 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (signed char)-85))))));
                }
            } 
        } 
    } 
}
