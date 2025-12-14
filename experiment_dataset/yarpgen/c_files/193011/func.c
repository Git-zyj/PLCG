/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193011
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (short)-32764))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((long long int) ((int) arr_8 [i_4] [i_3 - 3]))))));
                                var_23 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [i_2 + 1] [i_4 - 1])))) + ((-((-(arr_11 [i_0])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)96)))) * (arr_4 [i_1]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_0);
    var_26 *= ((/* implicit */unsigned int) var_2);
}
