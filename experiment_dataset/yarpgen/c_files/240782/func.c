/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240782
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) arr_6 [i_0] [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */short) ((unsigned int) (short)-2741));
                        var_13 = var_0;
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) var_5);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)39))))), (((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_8))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_8)))) ? (((((/* implicit */_Bool) (short)19457)) ? (var_8) : (((/* implicit */int) var_9)))) : (((int) (short)-20375))))), (((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (signed char)-1))))) ? (var_0) : (((var_6) / (((/* implicit */unsigned long long int) var_8))))))));
    var_16 = ((/* implicit */unsigned short) (((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) var_4))));
}
