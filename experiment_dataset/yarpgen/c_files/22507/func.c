/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22507
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
    var_10 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)248)), ((short)-26607)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_9)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_11 += ((/* implicit */signed char) arr_0 [i_0 - 1] [(short)11]);
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) (unsigned char)100);
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned short) var_6);
        var_13 = ((/* implicit */signed char) (~(((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-16960)) : (((/* implicit */int) var_1)))))));
        var_14 &= ((/* implicit */unsigned long long int) var_2);
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8365)) ? (((/* implicit */int) (short)-9462)) : (((/* implicit */int) (short)16964))))) ? (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (short)-6909)) : (((/* implicit */int) (short)21863)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)16964)) : (((/* implicit */int) var_0)))))))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_3), (((/* implicit */long long int) arr_5 [i_2])))), (((/* implicit */long long int) min((var_0), (arr_5 [i_2]))))))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_0)))) >> (((var_9) + (2759143350985560017LL))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) arr_4 [i_2]))))))))))));
        arr_9 [i_2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)15726)))) * (max((max((-1526715587), (((/* implicit */int) (short)-26538)))), (((/* implicit */int) min((arr_7 [i_2]), (arr_7 [i_2]))))))));
    }
}
