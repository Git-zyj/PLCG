/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217971
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
    var_20 += var_10;
    var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)30498)) + ((~(((/* implicit */int) var_17)))))) <= (((/* implicit */int) var_5))));
    var_22 &= ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_13))))), (var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4096)) * (((/* implicit */int) (unsigned char)0))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)30498)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) < (((((/* implicit */int) (unsigned short)35037)) >> (((((/* implicit */int) (unsigned short)30513)) - (30501))))))))));
                arr_8 [(unsigned char)2] |= (unsigned short)30507;
                arr_9 [i_0] = ((/* implicit */unsigned char) (unsigned short)22800);
            }
        } 
    } 
}
