/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43881
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((((((/* implicit */_Bool) min((((/* implicit */signed char) var_9)), (var_6)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-16), (var_3))))))) - (711531491U))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */long long int) ((((/* implicit */int) ((3644884864807425074LL) >= (((/* implicit */long long int) (-(var_12))))))) % (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (3273210708U) : (arr_4 [i_0] [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_0 [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_6))));
                        var_19 ^= arr_7 [i_0] [i_0];
                    }
                }
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    arr_15 [(signed char)11] [i_4] |= ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned int) (+(min((((((/* implicit */int) (signed char)24)) * (((/* implicit */int) (signed char)28)))), (((/* implicit */int) max(((signed char)-16), (var_14))))))));
                                var_21 = 2753713269U;
                                var_22 &= ((/* implicit */signed char) arr_2 [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_23 = min((var_12), (((/* implicit */unsigned int) (signed char)15)));
                                var_24 += ((/* implicit */unsigned int) (+((+(var_7)))));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0]))));
                                arr_27 [i_0] [i_1] [i_4] [i_7] [i_8] [i_4] &= var_8;
                                arr_28 [i_0] [i_0] [i_0] [i_4] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)8))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
