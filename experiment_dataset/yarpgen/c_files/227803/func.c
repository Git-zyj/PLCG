/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227803
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [5ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) arr_2 [i_0] [13ULL] [(unsigned short)9])) == (-6316067905594327262LL))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (signed char)9)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [(signed char)9])))))))) : (arr_2 [i_0] [i_0] [11U])));
                var_12 = ((/* implicit */unsigned char) (-((~(-2135078744)))));
                arr_5 [(short)5] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) arr_1 [0U])))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */unsigned int) 1403697302)) : (2097148U))))), (((/* implicit */unsigned int) 2147483647))));
    var_14 = ((/* implicit */signed char) (~(min((((1306557167U) << (((((/* implicit */int) var_4)) - (18263))))), (((/* implicit */unsigned int) var_10))))));
    var_15 = ((/* implicit */unsigned char) var_4);
}
