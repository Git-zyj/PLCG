/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206119
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
    var_11 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) min((var_10), (926429189U)))))));
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 += max((((unsigned long long int) arr_4 [i_0] [i_1] [i_1])), (((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_0] [i_0])))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)11520)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) : (var_1)))));
                arr_8 [(unsigned short)3] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                var_14 -= ((/* implicit */unsigned char) ((unsigned short) (-(arr_6 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(var_5))) - (((var_9) ? (-4388910680231168615LL) : (-5971955601271911382LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)236)))))) : ((~(((/* implicit */int) (unsigned short)48600))))));
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)31)), (var_2)));
}
