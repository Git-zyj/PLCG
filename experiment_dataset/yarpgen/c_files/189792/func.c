/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189792
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
    var_16 = ((/* implicit */signed char) (short)-3566);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */_Bool) 4611684918915760128LL)) || (((/* implicit */_Bool) (signed char)29))))) - (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || ((_Bool)1)))))), (((/* implicit */int) ((((-809513552) + (((/* implicit */int) (unsigned short)65475)))) >= (((/* implicit */int) var_7)))))));
                    var_17 = ((/* implicit */int) arr_1 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [(_Bool)1])) == (((/* implicit */int) (short)-6899)))))))) ? ((-(arr_0 [i_2] [(short)13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_4 - 1]))))))));
                                var_19 ^= ((/* implicit */_Bool) 9223372036854775807LL);
                                var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)96))))) >= (arr_0 [i_0] [i_0]))));
                                var_21 |= ((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2] [i_1] [i_1] [10LL] [(_Bool)1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_8);
}
