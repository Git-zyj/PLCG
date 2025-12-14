/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19075
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
    var_10 ^= ((/* implicit */unsigned char) max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3840)))) ? (((/* implicit */int) (unsigned short)47487)) : (((/* implicit */int) (unsigned short)46243)))))));
    var_11 = ((/* implicit */int) min((var_11), (((1048512) >> (((((/* implicit */int) (unsigned short)30373)) - (30360)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_1] [i_2] [i_1] [i_4 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_0), (var_0)))) >> (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_4)))));
                                arr_13 [i_4] [i_4 + 4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 5294849747347743077LL)) && (((/* implicit */_Bool) (unsigned short)47481)))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((1048512), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17949))))))))));
                    var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */_Bool) (~(var_4)))) ? (((max((var_3), (var_4))) + (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))) : ((~(var_3)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1048512)))))) : (var_9)))))))));
}
