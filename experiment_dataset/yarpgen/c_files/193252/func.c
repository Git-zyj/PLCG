/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193252
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
    var_10 = ((/* implicit */unsigned short) ((var_3) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)48690), (((/* implicit */unsigned short) var_7)))))) : (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */int) var_4)) * (((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10)))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) arr_5 [i_2]))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (unsigned short)16858)) ? (((/* implicit */int) (short)3616)) : (((/* implicit */int) (unsigned short)16851))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1211864386586570234LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1521544585U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((long long int) var_6)) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))));
    var_14 = ((/* implicit */signed char) -1347904302);
}
