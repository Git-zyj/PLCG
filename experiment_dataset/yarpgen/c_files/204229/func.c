/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204229
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) arr_0 [i_0 - 1]))) > (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])) : (18254968236532856792ULL)))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 3483701682U))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) var_14));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(18254968236532856814ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 191775837176694849ULL)) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)10])) ? (1405824549U) : (arr_4 [8LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))))) : ((~(min((((/* implicit */unsigned long long int) arr_1 [i_1])), (191775837176694824ULL))))))))));
                        var_19 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3] [2LL] [i_3])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39601))))) : (min((((/* implicit */unsigned long long int) arr_4 [(unsigned char)0])), (arr_11 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [(unsigned char)12]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [(unsigned char)8] [(unsigned char)8] [i_0])))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((unsigned short) var_9))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-61)) > (((/* implicit */int) arr_0 [i_0 - 2])))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1])))))) ? (((/* implicit */int) (unsigned short)64482)) : (((/* implicit */int) (unsigned short)65523))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) 2889142751U)) ? (-4264127822681020534LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6491))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) arr_0 [i_0 - 1])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) arr_6 [i_1]);
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 191775837176694824ULL)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (signed char)-73)))))));
                            arr_18 [i_0 - 1] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned long long int) ((long long int) ((long long int) (signed char)-71)));
                        }
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12658101089926188114ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (191775837176694852ULL)));
                            arr_21 [i_0 + 1] [i_0 + 1] [i_1] [i_0 - 1] [i_0 - 2] [i_0 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1]))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_1]))) + ((+(((/* implicit */int) var_14))))))) - (((((/* implicit */_Bool) (unsigned char)255)) ? (9223372036854775793LL) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (signed char)-126)) + (127))))))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_0] [i_1])), (2439103492494036950LL)))) ? (((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_4] [i_1])))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_17 [i_0] [i_0] [i_0] [i_0 - 2] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)32))))));
                        }
                    }
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8191)) ? (4294967295U) : (((3251262782U) >> (((((/* implicit */int) (short)-32765)) + (32788)))))))) ? (((arr_17 [i_0 - 1] [i_1 + 2] [i_2] [i_1 + 1] [4U]) + (arr_17 [i_0 - 1] [i_1 - 1] [i_2] [i_1 + 1] [4U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) var_12);
}
