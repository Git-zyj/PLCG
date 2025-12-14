/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197381
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)124)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)94)) <= (((/* implicit */int) (unsigned char)233))))))) >= (((/* implicit */int) ((unsigned char) var_2)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)124), ((unsigned char)126)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12)))))))) ? (((((/* implicit */int) ((unsigned char) var_5))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) var_4))));
}
