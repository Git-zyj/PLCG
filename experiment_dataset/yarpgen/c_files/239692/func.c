/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239692
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned char)2)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63)))))) + (max((-8645038935135766371LL), (((/* implicit */long long int) var_5)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)2)), (6077162471023952324LL)))) ? (max((var_6), (((/* implicit */int) var_2)))) : (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [(short)10] [(short)10] = ((/* implicit */unsigned char) var_7);
                                arr_14 [2LL] [i_2] [i_1] [i_0] = var_2;
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) var_2);
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */unsigned char) min((-8645038935135766371LL), (((/* implicit */long long int) var_7))));
}
