/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209542
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
    var_10 &= ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3))))), (min((((/* implicit */unsigned long long int) var_1)), (var_5))))) << (((/* implicit */int) var_0)));
    var_11 *= ((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) != (1573981789)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1] [i_1] [i_1])) ? (max((var_9), (((/* implicit */unsigned long long int) arr_4 [(signed char)10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((arr_5 [i_2 + 1] [i_0] [i_2]), (arr_5 [i_2 + 1] [(_Bool)1] [i_2]))))));
                        var_14 = max(((-(arr_5 [i_2 + 1] [i_2 + 1] [(signed char)15]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0]))))));
                        var_15 = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) || (((/* implicit */_Bool) arr_4 [i_0]))))), (arr_6 [i_3] [i_2 + 1] [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((arr_11 [15U] [i_2 + 1] [i_2 + 1] [i_4 - 1]) <= (arr_11 [i_0] [(unsigned char)12] [i_2 + 1] [i_4 - 1])));
                        var_17 = arr_10 [i_0];
                    }
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) >= (arr_11 [(unsigned short)5] [i_2] [(unsigned char)6] [(unsigned char)6]))))));
                    var_19 = ((/* implicit */long long int) arr_6 [3LL] [i_1] [16U]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_7);
}
