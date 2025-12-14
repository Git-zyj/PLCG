/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41930
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
    var_14 &= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [9LL] [13LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-12167)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [19U]))) : (arr_1 [i_0])))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)10563))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123)))))) : ((-(arr_1 [(unsigned short)9]))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) arr_4 [(unsigned char)1] [19LL])))))))));
                var_15 = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) var_6))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned char)111))))));
}
