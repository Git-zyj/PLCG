/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220110
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
    var_11 = ((/* implicit */unsigned char) ((signed char) var_3));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0 + 1])) && (((/* implicit */_Bool) arr_6 [i_0 + 1])))) || (((/* implicit */_Bool) min((arr_6 [i_0 - 1]), (arr_6 [i_0 - 1]))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((unsigned int) ((signed char) ((arr_1 [(signed char)14] [i_1]) > (arr_0 [2ULL]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) (~(var_5)));
    var_15 = ((/* implicit */unsigned char) 2596088761U);
    var_16 = ((/* implicit */int) (-((+(((unsigned int) 1947400660))))));
}
