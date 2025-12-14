/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241550
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_0) ? (-332857239) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (var_6)))))), ((~(var_8))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))), (max((((/* implicit */long long int) var_10)), (arr_2 [i_0])))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 332857239)) ? (((/* implicit */int) var_2)) : ((+(332857239)))))), (arr_4 [i_0] [i_0])));
                }
            } 
        } 
    } 
}
