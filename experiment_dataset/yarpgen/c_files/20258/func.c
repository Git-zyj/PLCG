/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20258
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) min(((unsigned char)9), ((unsigned char)246)));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((6295889022858491467LL), (((/* implicit */long long int) arr_2 [2U] [i_0] [i_1])))))))) & (((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) arr_0 [i_0])))) ^ ((-(((/* implicit */int) (signed char)89))))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((4294967293U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)17))))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (-1099642819) : (((/* implicit */int) arr_4 [i_0])))) : (min((((/* implicit */int) ((_Bool) arr_0 [i_0]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (short)-12497))))))));
                var_20 = ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */int) (unsigned char)57)) >> (((((/* implicit */int) (unsigned char)198)) - (174))))) : (((/* implicit */int) arr_0 [i_1]))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */int) 1174068654U);
    var_22 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)29))))))));
}
