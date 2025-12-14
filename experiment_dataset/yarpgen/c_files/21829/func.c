/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21829
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
    var_14 = ((/* implicit */unsigned char) min(((-2147483647 - 1)), (((/* implicit */int) var_3))));
    var_15 = min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) max((-2147483627), (((/* implicit */int) var_12))))) ? ((+(var_6))) : (((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) != (4294967295U)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (2147483647))) + (2147483647))) >> (((/* implicit */int) min(((short)0), (((/* implicit */short) (unsigned char)63)))))))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 8191ULL)))) : (min((((/* implicit */unsigned int) var_0)), (var_1)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_10))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))), (((((((/* implicit */_Bool) 3072224308U)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) : (var_10)))));
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_11 [i_2] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
