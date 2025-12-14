/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2426
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
    var_17 = ((/* implicit */long long int) 1895061831);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-75)), ((short)-14168)))) ? (var_16) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (min((var_14), (((/* implicit */unsigned int) (short)9377))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 = (-(((/* implicit */int) (short)-14146)));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) (unsigned short)65524);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned short) (short)-4044)), ((unsigned short)12))))));
                        var_22 = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)65524)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((min((((/* implicit */unsigned int) var_9)), (arr_3 [i_1]))) <= (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-16443)) + (2147483647))) << (((((((/* implicit */int) var_9)) + (4975))) - (10)))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            var_23 ^= ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_9)) ? (arr_11 [7U] [12U] [0LL] [(signed char)7] [0LL] [(signed char)7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) / (((unsigned int) arr_7 [i_3] [i_1] [i_3] [i_3]))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) || ((_Bool)1)));
                        }
                    }
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((var_1) + (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_0])) ? (2586977875261552995LL) : (((/* implicit */long long int) var_6)))) | (((/* implicit */long long int) ((((/* implicit */int) arr_12 [14U] [(short)4] [i_2] [i_5] [(unsigned short)14] [14U])) / (((/* implicit */int) var_15)))))))))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            arr_24 [i_0] [10ULL] [i_1] [i_1] [10ULL] [i_5] [i_5] = ((/* implicit */unsigned int) var_0);
                            arr_25 [10U] [i_1] [11ULL] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) (unsigned short)49638)) : (((/* implicit */int) var_10))))) : (arr_5 [i_1 + 4] [i_1])))) ? (min((((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16443)))), (var_12))) : ((+(((/* implicit */int) var_15))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_5] [3U] [i_5] [i_2 + 1] [i_1])) ? (((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1 + 1] [i_2 + 2] [i_2 - 2])) >> ((((+(2412726459U))) - (2412726446U))))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)16993)), ((unsigned short)16321)))) != (var_4))))));
                            arr_28 [i_7] [i_5] [i_1] [i_1] [i_1 - 1] [(short)12] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_2 - 2] [i_2] [i_5] [i_7])) ? (arr_2 [i_1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (var_4)))))), (min((((var_6) % (((/* implicit */unsigned int) arr_20 [i_1])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_5)))))));
                            var_27 -= min((((/* implicit */unsigned long long int) ((min((var_13), (((/* implicit */long long int) arr_18 [i_0] [i_1] [(unsigned char)8] [i_1])))) / (((/* implicit */long long int) ((/* implicit */int) (short)16442)))))), (((unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) / (((/* implicit */int) var_10))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_12 [(unsigned short)8] [i_1] [i_2 + 2] [i_5] [i_5] [(unsigned short)6]))));
                        }
                        for (int i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2147483648U), (((/* implicit */unsigned int) (short)14151))))) ? (((/* implicit */long long int) arr_29 [i_0] [(short)0] [i_0] [i_0] [i_0] [(unsigned short)8])) : (((var_13) % (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))), ((+(var_13)))))));
                            arr_31 [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9936))))) ? (((((/* implicit */_Bool) 58002514)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (short)-16443)))) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_1 + 1] [i_1])))), ((+(((/* implicit */int) var_9))))));
                        }
                    }
                    var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) 10030707597038347566ULL)) ? ((+(arr_2 [i_1 + 2] [i_2 - 2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7544299811402465298LL)) ? (((/* implicit */int) (short)3852)) : (((/* implicit */int) (signed char)-36)))))));
                }
            } 
        } 
    } 
}
