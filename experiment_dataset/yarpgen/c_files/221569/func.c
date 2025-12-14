/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221569
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_14)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 288230376151711742LL);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned short)58041))))))) / (var_4)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-12))));
        arr_9 [i_1] = ((/* implicit */_Bool) 1742194220U);
        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4827852628048946131ULL)) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) var_5)))) : (((var_3) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_16))));
    }
}
