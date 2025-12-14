/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50540
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
    var_12 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)206))))) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) ((signed char) -907976377660255896LL))) ? (((((/* implicit */_Bool) var_3)) ? (var_2) : (12ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 &= ((/* implicit */signed char) var_7);
                    var_14 = ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_0 [i_2])), ((+(((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */long long int) 2475947913U)) : (var_5)))) ? (((((/* implicit */_Bool) (short)6016)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (unsigned short)1153))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (~(((((min((-92132871432431163LL), (((/* implicit */long long int) (unsigned short)49624)))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5))) + (14583LL)))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)52625)) <= (((/* implicit */int) (unsigned short)25974))))) * (((/* implicit */int) (!(((_Bool) (unsigned char)19)))))));
}
