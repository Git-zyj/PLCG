/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204945
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
    var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_5)) : ((-2147483647 - 1))))) : (min((var_7), (((/* implicit */unsigned int) var_10))))))));
    var_15 ^= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)52073)) : ((-2147483647 - 1))))), (((7800241786690811457LL) | (-8855809885833043312LL))))) ^ (((/* implicit */long long int) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (arr_0 [i_0])))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), ((-(var_4))))) : (((/* implicit */unsigned long long int) (-(0U))))));
        arr_3 [i_0] = ((/* implicit */long long int) min(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (var_4))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (var_6))), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) (~((-2147483647 - 1))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 4824589119580831687ULL))))), (max((2147483647), (2147483647)))))) ? ((+((-(((/* implicit */int) (unsigned short)28890)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)53)) >= (((/* implicit */int) (unsigned short)28890))))) != ((-(((/* implicit */int) (signed char)-40)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) max((-2485866330692075992LL), (((/* implicit */long long int) 4294967295U))));
                        arr_11 [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) max(((unsigned short)52073), (((/* implicit */unsigned short) arr_1 [i_3 + 2] [i_2 + 1]))))), ((-(((/* implicit */int) (unsigned short)59195))))));
                        arr_12 [(unsigned char)6] [i_3] [(unsigned char)8] [4U] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_4 [i_0] [i_3 + 1])))) * (((/* implicit */int) var_8))));
                        arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_10)), (arr_10 [i_3] [i_3 + 1] [i_3 + 2] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30145))))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) 1536975478U);
                        arr_17 [i_4] [(unsigned short)6] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2 - 4] [i_4 + 2]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 2) 
                        {
                            var_21 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2 - 3] [i_2 + 1] [i_4 - 2]))));
                            var_22 = arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 2] [i_4];
                        }
                    }
                }
            } 
        } 
    }
}
