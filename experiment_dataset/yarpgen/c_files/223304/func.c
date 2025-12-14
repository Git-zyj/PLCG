/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223304
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
    var_17 *= ((/* implicit */signed char) min(((-((~(((/* implicit */int) var_15)))))), (((/* implicit */int) var_8))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(arr_8 [i_3] [i_3 - 1] [i_1 + 2] [i_0]))))));
                            arr_11 [i_0] [10LL] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((max((2305825417027649536ULL), (((/* implicit */unsigned long long int) (-(arr_4 [i_2])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (arr_7 [i_0] [(signed char)8]) : (((/* implicit */int) (signed char)64)))))));
                            var_20 = ((/* implicit */int) max((var_20), ((((!(((/* implicit */_Bool) arr_10 [i_3] [i_3 + 2] [i_0] [i_3 - 2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [(signed char)6] [i_3 - 1] [i_2] [i_3 - 2])) == (((/* implicit */int) arr_10 [i_3] [i_3 + 2] [i_0] [i_3 - 3]))))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 2] [i_2] [i_3 - 3])) ? (((/* implicit */int) arr_10 [i_3 + 2] [i_3 - 3] [i_2] [i_3 - 2])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_3 - 3] [i_0] [i_3 - 1]))))))));
                            var_21 ^= ((/* implicit */unsigned char) min((((/* implicit */int) arr_6 [i_0])), (((((/* implicit */int) arr_6 [i_2])) / (((/* implicit */int) (signed char)60))))));
                        }
                    } 
                } 
                arr_12 [i_0] [(_Bool)1] [i_0] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (((((/* implicit */_Bool) (signed char)91)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) 275917397)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_0] [i_1 - 1])))))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) var_0))))) ? (arr_3 [i_1 - 2] [i_1 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 - 3] [i_1 - 3])))))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned char) var_4);
}
