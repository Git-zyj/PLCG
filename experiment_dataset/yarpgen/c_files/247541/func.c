/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247541
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_0]), (arr_3 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_6 [8LL] [i_1] [i_4] [i_3] [i_0]))))) : (((arr_6 [i_0] [i_0] [i_2] [i_3] [i_4]) ? (((/* implicit */unsigned long long int) var_13)) : (var_14)))));
                                var_19 = ((/* implicit */unsigned char) var_0);
                                var_20 ^= var_1;
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned short) arr_8 [i_1] [(_Bool)1] [i_1] [(signed char)2] [(_Bool)1]))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2] [i_0])))), (((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2833335996U), (((/* implicit */unsigned int) (_Bool)1))))) ? ((~(((/* implicit */int) ((_Bool) var_7))))) : ((-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_15);
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (short)31)) << (((var_14) - (8583176742499350987ULL))))))), (((/* implicit */int) ((((long long int) var_1)) <= (((/* implicit */long long int) ((unsigned int) var_2)))))))))));
}
