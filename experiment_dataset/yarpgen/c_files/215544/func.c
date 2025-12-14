/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215544
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
    var_13 |= ((/* implicit */unsigned char) ((short) var_4));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = arr_3 [i_0];
                arr_5 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) var_5);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_2 - 2])) & (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (arr_6 [i_2 + 3] [i_2 + 1]) : (((/* implicit */unsigned long long int) arr_7 [i_2 - 2])))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 3) 
            {
                for (short i_5 = 3; i_5 < 18; i_5 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1])) ? (arr_8 [i_5 - 3] [i_5 + 1] [i_5 - 3]) : (arr_8 [i_5 - 3] [i_5 - 1] [i_5 - 3]))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5 - 1] [i_5])))) ? (((/* implicit */int) arr_14 [i_5 + 1] [i_5] [i_5 + 1] [i_5])) : (((/* implicit */int) max((arr_14 [i_5] [i_5] [i_5 - 3] [i_2]), (arr_14 [i_4] [i_5] [i_5 + 1] [i_4]))))));
                        var_18 = ((/* implicit */_Bool) min((var_7), (((/* implicit */int) ((((_Bool) var_11)) && (((/* implicit */_Bool) arr_10 [i_2 + 1])))))));
                        var_19 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) var_7)))), (min((((/* implicit */long long int) var_5)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_2 + 1]) == (((/* implicit */long long int) arr_8 [i_2] [i_2 + 1] [i_2])))))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-85)), (var_10)))), (arr_11 [i_5] [i_5 + 1] [5LL] [i_5 - 1]))));
                        arr_17 [i_2 - 2] [i_3] [i_2] [i_5 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_2 + 1] [16ULL] [(_Bool)1] [i_5])) : (((/* implicit */int) var_5))))))) | (((((/* implicit */_Bool) arr_15 [i_2] [i_2 - 2] [i_2 + 1] [(unsigned char)17] [i_2 - 2] [i_2])) ? ((-(var_3))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_16 [i_2] [i_3] [(_Bool)1] [i_5])))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_11 [i_2] [16ULL] [i_2 - 1] [i_2 + 2]), (arr_11 [i_2] [i_2 + 3] [i_2 - 2] [(_Bool)0])))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2] [i_2])) ? (var_10) : (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0)))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 - 2] [i_2 - 1] [i_2] [i_2 + 1]))) & (((((/* implicit */long long int) var_3)) % (6482760939966951519LL)))))));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 - 1] [12U] [i_2 - 1] [i_2 - 2] [i_2] [i_2])))))) ? (((var_6) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(short)4] [i_2] [i_2 + 2] [i_2] [i_2 - 2] [(unsigned char)3])))))) ? (((((/* implicit */int) arr_16 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 3])) + (((/* implicit */int) arr_16 [i_2 + 1] [i_2 - 1] [i_2 + 3] [i_2 + 3])))) : (((/* implicit */int) ((unsigned char) var_12))));
    }
}
