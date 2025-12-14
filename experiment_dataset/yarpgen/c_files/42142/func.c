/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42142
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
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-25945)) ? (12518842162667450701ULL) : (12518842162667450709ULL)));
    var_18 = ((/* implicit */short) 12518842162667450701ULL);
    var_19 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 |= max((max((var_15), ((+(var_6))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (arr_0 [5U] [i_1])))) & (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (5927901911042100901ULL))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((var_12), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) > (6074300608119725842ULL)))), (var_7)))))))));
                }
            } 
        } 
    } 
}
