/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215552
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
    var_17 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) (unsigned short)12319)) ? (((/* implicit */long long int) 2852292866U)) : (var_8))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) var_13);
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_8))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */int) ((short) var_8))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) >= (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [(_Bool)1])))) << (((((((/* implicit */_Bool) 1488976164U)) ? (var_5) : (((/* implicit */unsigned long long int) 1488976164U)))) - (4753304429890477741ULL))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_2);
}
