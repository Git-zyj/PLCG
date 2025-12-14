/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221301
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((((((/* implicit */int) var_15)) % (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) min(((unsigned char)253), (((/* implicit */unsigned char) arr_4 [i_1]))))))))));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (arr_3 [i_1 + 1] [i_1 - 1])))) ? (arr_3 [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-10))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)247)) >= (((/* implicit */int) (signed char)-126))));
                    var_18 = arr_0 [i_0];
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_4);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_6)) - (37791)))))) ? (max((var_14), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14333))) : (var_12)));
}
