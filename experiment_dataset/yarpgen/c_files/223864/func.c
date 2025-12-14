/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223864
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */int) ((long long int) 3U));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (((((!((_Bool)1))) ? ((~(((/* implicit */int) (unsigned char)28)))) : (((/* implicit */int) ((4205962665412848401LL) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)7] [i_1])))))))) | (((/* implicit */int) ((unsigned char) ((long long int) (short)-90))))));
                }
            } 
        } 
    } 
    var_11 |= ((signed char) min(((!(((/* implicit */_Bool) (short)106)))), (((-5664264926674286896LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-118)))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (16085837462018994937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_13 += ((/* implicit */signed char) var_7);
    var_14 *= ((/* implicit */signed char) (~((~((~(((/* implicit */int) (unsigned char)255))))))));
}
