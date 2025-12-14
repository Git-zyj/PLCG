/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221710
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */int) max((min((var_4), (var_4))), (var_4)))), ((~(((((/* implicit */int) (unsigned short)53178)) & (((/* implicit */int) var_8))))))));
    var_11 = ((/* implicit */_Bool) max((((/* implicit */int) var_5)), ((-((~(((/* implicit */int) (unsigned short)12358))))))));
    var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? (arr_3 [i_0]) : (((/* implicit */int) var_9))))) ? (((int) var_9)) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1])));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) || (((/* implicit */_Bool) ((unsigned short) (short)28918)))));
        arr_5 [(_Bool)1] &= ((/* implicit */unsigned short) ((long long int) arr_1 [i_0 - 1]));
        var_14 ^= ((/* implicit */_Bool) (short)-2473);
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) ((signed char) (((!(((/* implicit */_Bool) (unsigned short)53178)))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (var_7))) : ((-(var_7))))));
        var_16 = ((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? (arr_6 [i_1]) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)0))))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]);
        arr_9 [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)2472))))) ? (arr_6 [i_1]) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)28755)))))))));
    }
}
