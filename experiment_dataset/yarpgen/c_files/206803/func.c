/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206803
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
    var_18 = ((/* implicit */unsigned short) max((6580874223066059948LL), (((/* implicit */long long int) (unsigned char)230))));
    var_19 = ((((((((/* implicit */unsigned int) -2077512106)) - (2038704755U))) < (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-1015612833)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1772656836568275075LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (var_4)))) ? (var_4) : (((/* implicit */long long int) ((unsigned int) 1172926186))))) : (((/* implicit */long long int) ((int) min((var_1), (((/* implicit */long long int) var_14)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 *= ((/* implicit */_Bool) max((min((var_16), (((((/* implicit */_Bool) 1772656836568275065LL)) ? (3220079618576248027LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [12LL])) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_16)))) && (((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]))))))));
        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] [i_3] [i_2] = arr_9 [i_1];
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_22 = var_12;
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_8 [i_3 - 2] [(short)12]), (arr_8 [i_1 - 2] [i_3 + 1])))) && (((/* implicit */_Bool) max((((unsigned short) (short)-16749)), (((/* implicit */unsigned short) max((arr_0 [i_1 - 2] [13U]), (arr_9 [i_1 + 3])))))))));
                        var_24 ^= ((/* implicit */long long int) ((((((int) arr_7 [(signed char)11] [(signed char)11] [5ULL] [(signed char)11])) - ((+(((/* implicit */int) arr_3 [i_4])))))) & (min((((((/* implicit */int) (signed char)3)) + (-1839311365))), (((/* implicit */int) (_Bool)1))))));
                        var_25 = ((/* implicit */unsigned short) arr_2 [i_1 - 1]);
                    }
                }
            } 
        } 
    } 
}
