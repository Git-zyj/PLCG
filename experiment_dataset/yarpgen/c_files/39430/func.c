/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39430
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
    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_11))))) == (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)34))));
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_1] [(unsigned char)6] [(unsigned char)6] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_2);
                                var_16 = ((/* implicit */signed char) arr_11 [i_0] [i_2] [i_3 - 1] [(unsigned char)15]);
                                arr_18 [9U] [9U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11)))))) >> (((((((/* implicit */_Bool) ((unsigned char) (short)-32752))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (short)11687)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-16822)))))) - (111)))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */int) min((var_13), (((/* implicit */unsigned int) max((arr_8 [i_0] [i_0] [(_Bool)1] [i_0]), (((/* implicit */unsigned short) var_2)))))));
                arr_20 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) 9223372036854775807LL);
                var_17 &= ((/* implicit */long long int) var_0);
            }
        } 
    } 
}
