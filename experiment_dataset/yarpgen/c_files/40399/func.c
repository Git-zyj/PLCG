/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40399
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_0] [12U] [16U] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_4])) - (min((arr_8 [i_0 - 1] [i_0] [i_1 - 1] [i_1] [i_1 - 2]), (var_1)))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)19))));
                                arr_11 [1ULL] [i_0] [i_2] = ((/* implicit */short) min((((/* implicit */int) (signed char)110)), (arr_7 [i_0] [i_4])));
                            }
                        } 
                    } 
                    var_21 *= arr_3 [i_0];
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (signed char)-20))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_11)))))))) : (((((/* implicit */int) var_10)) >> (((arr_2 [i_0 - 1]) + (576878863)))))));
                    var_23 += min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [9] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) : (arr_5 [i_0] [i_0] [i_2] [i_2]))) / (((/* implicit */unsigned int) ((var_3) / (((/* implicit */int) (short)-5925)))))))), ((-(16505228776680857642ULL))));
                    var_24 = ((/* implicit */unsigned int) (-(((var_11) ? (((((/* implicit */int) (_Bool)0)) + (arr_2 [i_2]))) : (min((var_3), (((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_0);
    var_26 += ((/* implicit */unsigned char) var_14);
}
