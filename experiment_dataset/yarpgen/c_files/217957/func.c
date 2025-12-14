/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217957
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((4528974968240893515ULL) >= (492578122948646065ULL))) ? (((((/* implicit */_Bool) (short)-4546)) ? (17954165950760905551ULL) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) 966186356))));
                    arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) var_2)) != (((((((/* implicit */unsigned long long int) var_7)) == (13613853235926065519ULL))) ? (((/* implicit */long long int) min((-609626119), (var_2)))) : (((arr_2 [14LL]) << (((3117572870U) - (3117572869U)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((var_6) | (var_8))) : (var_10)))) ? (((/* implicit */unsigned long long int) var_8)) : (var_0)));
}
