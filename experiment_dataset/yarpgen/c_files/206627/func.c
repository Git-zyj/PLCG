/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206627
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) var_7))));
        var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (unsigned char)200)) : (((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned short)35587)) : (((/* implicit */int) (signed char)3))))));
    }
    for (signed char i_1 = 2; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    var_12 = (~(((((/* implicit */_Bool) (unsigned short)35587)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-29417)))));
                    var_13 = ((/* implicit */signed char) 4294967295U);
                    var_14 = ((/* implicit */unsigned int) -894364715);
                }
            } 
        } 
        var_15 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1]))));
    }
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
}
