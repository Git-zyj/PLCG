/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198450
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
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)189)), (var_11)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) var_0);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)-3643)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) + (9223372036854775807LL))) >> (((var_4) - (2237032421U)))))) ? (((/* implicit */long long int) ((int) var_2))) : (var_5)));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) max((-788318684), ((~(((63) << (((3871199435U) - (3871199434U)))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
                        var_20 = ((unsigned char) var_7);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_14))));
                    }
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_2))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 4294967295U)) ? (var_7) : (((/* implicit */long long int) (-(var_11)))))), ((+(max((var_3), (((/* implicit */long long int) var_8))))))));
}
