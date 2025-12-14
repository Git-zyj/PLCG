/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22196
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = (+(((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -552589766)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -552589766)) ? (-552589766) : (511)))) : (((((/* implicit */long long int) -248381837)) / (1090581318650137660LL)))));
        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-86)) ? (552589752) : (511)))));
    }
    var_21 = ((/* implicit */signed char) (+((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))) / (-7784888536879877861LL)))))));
}
