/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199381
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
    var_19 = max((var_13), (((((/* implicit */int) var_5)) & (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (signed char)-21))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 4192256U)))))) >= (min((arr_2 [i_1]), (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1]) : (arr_2 [i_1])))))));
                arr_4 [i_1] [i_0] [i_0] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)17318)), (((((/* implicit */_Bool) 4192252U)) ? (((/* implicit */unsigned long long int) 4192243U)) : ((~(arr_2 [i_0])))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (short)-17336);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        {
                            var_21 |= ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2] [(_Bool)1]);
                            arr_11 [i_1] [i_2] [i_2] = max((arr_6 [i_2] [i_1] [i_3 - 1]), (((/* implicit */unsigned int) (!((_Bool)0)))));
                            var_22 = ((/* implicit */unsigned short) arr_2 [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
}
