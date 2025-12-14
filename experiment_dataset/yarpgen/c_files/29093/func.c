/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29093
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3117412739428977205LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 498021049)) ? (((/* implicit */int) var_11)) : (1996557476)))))) && (((/* implicit */_Bool) ((unsigned char) 4294967295U)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)2))) ? (((/* implicit */unsigned int) var_7)) : (((unsigned int) var_9))))) ? ((+(((/* implicit */int) (short)2516)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1996557476)) ? (((/* implicit */unsigned long long int) var_7)) : (4124051812976447609ULL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((var_6) << (((4267677626U) - (4267677625U)))));
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_8)))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1050678715)))) ? (var_7) : (((/* implicit */int) ((0U) > (((/* implicit */unsigned int) 1996557476))))))))));
}
