/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223396
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
    var_19 = ((/* implicit */int) ((short) min((6559274153722277855ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_2);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) (((((!((_Bool)0))) && ((!(((/* implicit */_Bool) arr_2 [i_0] [11U])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1836997606)))))) <= (((((/* implicit */_Bool) 2140382619U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (11347667550731115618ULL))))))) : ((~(var_14)))));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) <= (2135967594U)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_10)) : (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25948))) == (2135967594U))))));
            }
        } 
    } 
}
