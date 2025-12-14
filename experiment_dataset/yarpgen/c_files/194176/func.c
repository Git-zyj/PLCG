/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194176
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((long long int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_2]) >> (((arr_3 [i_2]) - (1725232566U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0])))))))) : (((((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) / (((((((/* implicit */int) arr_7 [i_0] [1U])) + (2147483647))) << (((((/* implicit */int) (signed char)28)) - (28))))))))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_2] [i_2])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max(((signed char)-28), (arr_6 [i_2] [i_2 + 2] [i_2] [i_2 - 1])))) : (((/* implicit */int) min((arr_6 [i_2] [i_2 + 1] [i_2] [i_2]), (var_8))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46)))))) ? (min((arr_12 [i_4] [6U] [i_4] [i_3] [i_4] [i_4]), (((/* implicit */unsigned int) arr_6 [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))) ? (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) == (var_14)))) << (((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) min((arr_8 [i_2] [i_2] [i_2] [i_2] [i_2 + 3]), (arr_8 [i_0] [i_0] [i_1] [i_2] [i_2 - 1]))))));
                                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)87))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 820311169)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((unsigned int) (signed char)(-127 - 1)))))));
                                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_2 + 2] [i_3] [i_4])) & (((/* implicit */int) (signed char)46))))) & (max((((/* implicit */unsigned int) (signed char)-109)), (arr_3 [i_4])))))) ? (((((/* implicit */_Bool) max((arr_0 [13U] [i_2 + 2]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) min((var_2), (var_6)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)63)))))) : (min((((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)80)))), (((((/* implicit */_Bool) arr_10 [i_0] [i_2])) ? (((/* implicit */int) (signed char)-70)) : (-67108864)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((((((+(((/* implicit */int) (short)-18739)))) + (2147483647))) << (((((/* implicit */int) var_2)) - (2))))) / (((/* implicit */int) var_9)))))));
}
