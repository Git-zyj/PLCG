/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3159
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
    var_15 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(signed char)11] [i_1] [i_2] [5ULL] [i_1] = (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_3]))))) != (((/* implicit */int) var_2))))));
                                var_16 *= ((/* implicit */unsigned char) arr_5 [i_0] [i_2] [(unsigned char)10]);
                                arr_15 [12] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */int) var_3);
                                var_17 = (+(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) & ((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((int) min((((signed char) var_4)), (((/* implicit */signed char) ((-3434866698237260311LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((long long int) var_1))))))))));
}
