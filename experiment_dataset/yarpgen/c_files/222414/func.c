/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222414
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((926592930U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) != (arr_2 [i_0])))) : (((((/* implicit */_Bool) 18U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-11)))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((/* implicit */int) (unsigned char)93)), ((-(((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))))));
                    var_14 |= var_4;
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_9)) - (120)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_1] [3LL] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_8);
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_3] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) ((((arr_0 [i_0] [i_0]) && (((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0])))) && (((/* implicit */_Bool) min((arr_7 [i_0] [i_3] [i_0]), ((unsigned char)53)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_2);
    var_17 = ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) (unsigned char)216))));
}
