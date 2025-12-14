/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54580
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
    var_19 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_4 [i_0] [(signed char)7])) : (((/* implicit */int) (signed char)0)))) << (((/* implicit */int) ((((/* implicit */int) (short)11078)) <= (((/* implicit */int) (signed char)-1)))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_21 += ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) (signed char)-16)))))) & (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) (unsigned char)214))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_2]), (arr_1 [i_2] [i_1])))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) (!(((_Bool) arr_2 [i_0] [i_1])))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_5 [i_0] [0U])) ? (((/* implicit */int) arr_5 [i_2] [i_1])) : (((/* implicit */int) arr_5 [i_1] [(short)6])))))))));
                    var_24 ^= ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_0])))) > (((/* implicit */int) (unsigned char)255)));
                }
                for (short i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    arr_11 [i_3] [i_1] [i_0] = (+(((/* implicit */int) (_Bool)0)));
                    var_25 = ((/* implicit */int) var_17);
                    arr_12 [i_0] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)42)), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) ((short) arr_6 [i_3])))));
                    var_26 &= (!(((/* implicit */_Bool) ((unsigned char) (signed char)64))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    var_27 = var_16;
                    var_28 |= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))));
                    var_29 = ((/* implicit */_Bool) arr_13 [(signed char)3] [i_4]);
                    var_30 += ((/* implicit */short) ((unsigned int) arr_13 [i_1] [i_1]));
                }
                for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    arr_18 [i_0] [(short)1] [i_5] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)0))))));
                    arr_19 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0]))))) / (((/* implicit */int) var_16))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (long long int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            {
                                arr_26 [i_5] [i_1] [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-27))) : (((((/* implicit */_Bool) 0LL)) ? ((+(0LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
                                arr_27 [i_5] [i_5] = ((/* implicit */signed char) arr_10 [i_6] [i_6]);
                                arr_28 [i_7] [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)0))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))) && (((/* implicit */_Bool) max((((/* implicit */short) var_3)), (arr_25 [i_0] [i_1] [i_7 - 2] [i_0] [(unsigned char)4] [(signed char)0]))))));
                                arr_29 [i_5] [i_1] [(unsigned char)9] [(unsigned char)9] [i_7 + 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) var_0)))) : (max((((/* implicit */int) arr_25 [i_5] [i_0] [i_5] [i_6] [i_6] [i_7 + 1])), (min((-1833031377), (((/* implicit */int) arr_17 [i_0] [i_1] [i_6] [i_5]))))))));
                            }
                        } 
                    } 
                }
                var_31 -= ((/* implicit */signed char) (-(max((((/* implicit */long long int) (signed char)-14)), (((var_15) ? (2244386649046373505LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                var_32 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */short) var_3)))))));
            }
        } 
    } 
}
