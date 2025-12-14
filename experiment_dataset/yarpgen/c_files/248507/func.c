/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248507
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
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned int) ((signed char) 8127266218803409088LL));
                    var_10 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_8 [i_0] [i_0 - 3] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0 - 3])))) : (var_4)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_2))));
}
