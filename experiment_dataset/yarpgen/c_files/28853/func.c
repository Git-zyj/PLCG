/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28853
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
    var_16 |= ((/* implicit */_Bool) var_12);
    var_17 *= ((/* implicit */_Bool) (+(((((((/* implicit */long long int) var_14)) == (var_8))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */long long int) (_Bool)1)), (-1LL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_1 [i_0]))));
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0 + 1]) : (((/* implicit */long long int) arr_6 [(signed char)0] [11U] [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)2])) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_2] [i_0]), (((/* implicit */unsigned short) var_10)))))))) != (arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 280925220896768LL)) : (5499662611639355673ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))) && (((/* implicit */_Bool) min((((((/* implicit */int) arr_8 [i_0] [(short)13] [i_1] [i_0])) & (((/* implicit */int) (unsigned short)65513)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_1)))))))));
                                var_22 = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [6U] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [(signed char)5]))) ? (min((max((((/* implicit */long long int) arr_1 [(signed char)7])), (var_0))), (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [4LL] [i_1] [i_2] [i_5] [14]))))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0 - 1] [i_0] [(unsigned short)5] [i_0] [i_0])))))));
                        var_24 ^= (+(((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)63))) < (((/* implicit */int) (!((_Bool)0))))))));
                    }
                }
            } 
        } 
    } 
}
