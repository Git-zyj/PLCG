/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227549
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
    var_16 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_13)))), ((~((-(((/* implicit */int) (signed char)-32))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (signed char)-32)))));
                                var_18 = ((/* implicit */unsigned short) ((_Bool) arr_11 [i_3] [i_4] [i_3] [i_3] [i_4 - 2]));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_3 + 2] [(short)7]) < (((/* implicit */long long int) arr_6 [i_4 + 1] [i_3] [i_2])))))) - (arr_7 [i_1])))) ? ((-(((/* implicit */int) (signed char)-25)))) : ((+(((/* implicit */int) (unsigned char)72))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)-31)))));
                    var_21 = ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)183)) ? (9223336852482686976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5088))))));
                }
            } 
        } 
    } 
}
