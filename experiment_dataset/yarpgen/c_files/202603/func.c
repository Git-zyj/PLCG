/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202603
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [(signed char)12] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 1])))) != (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)13)) : (((((/* implicit */_Bool) 537905550U)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (unsigned char)255))))))));
                arr_7 [1U] [i_1] = (!(((/* implicit */_Bool) ((long long int) (unsigned char)243))));
                arr_8 [i_0] |= ((/* implicit */unsigned short) max(((unsigned char)255), ((unsigned char)243)));
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)17526))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1))));
    var_16 &= ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3489399118U)) ? (805568177U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13)))))))) || (((/* implicit */_Bool) var_0))));
}
