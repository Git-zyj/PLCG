/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246490
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
    var_11 = ((/* implicit */unsigned short) var_10);
    var_12 += ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned char)0))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))))));
                                var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [(short)1])), (((((/* implicit */_Bool) (unsigned char)10)) ? (((((/* implicit */_Bool) (unsigned short)65525)) ? (var_6) : (arr_9 [i_0 + 1] [4] [5] [i_1] [i_3] [i_3]))) : (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
}
