/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38431
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (unsigned char)221)) ? (var_4) : (var_4)))))) ? (var_4) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] = (+(var_4));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (max((((/* implicit */unsigned long long int) var_4)), (arr_6 [i_0] [i_1 - 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_0])))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_13)) + (59)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_7 [i_0] [i_2 + 2])));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_8 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)32582))))) : (arr_10 [i_0])))) : (((unsigned long long int) (unsigned char)23))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -700652969)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                }
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_4] [i_0] [i_4] [i_4]), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_5 + 1])) ? (((/* implicit */int) (_Bool)0)) : (19175285)))) : ((-(min((((/* implicit */unsigned int) var_5)), (var_0)))))));
                                var_21 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) (unsigned char)44))), ((~(((/* implicit */int) (unsigned short)61875))))))), (min((((/* implicit */long long int) arr_13 [i_1 - 1] [i_0] [i_5 + 1])), ((~(-8595957548830406241LL)))))));
                                arr_21 [i_0] [i_1] [i_6] [i_5 + 1] [i_6] |= ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_13 [i_1 - 1] [i_6] [i_1]))))));
                                var_22 += ((/* implicit */unsigned char) arr_1 [i_6]);
                            }
                        } 
                    } 
                } 
                var_23 = (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_1] [13]))))));
            }
        } 
    } 
}
