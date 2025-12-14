/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208139
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 2093724930);
        arr_3 [i_0] = ((/* implicit */short) (~(((((((/* implicit */_Bool) -5904077501492572326LL)) ? (arr_1 [3LL] [i_0]) : (arr_1 [i_0] [i_0]))) % (((/* implicit */int) var_6))))));
    }
    var_14 = (-9223372036854775807LL - 1LL);
    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)17569)) ? (((-7991328865656026503LL) & (-5904077501492572333LL))) : (((/* implicit */long long int) 415819604))))));
    /* LoopSeq 1 */
    for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) ((var_12) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
        arr_7 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) ((7506208713496113682LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53929)))))) >> (((((/* implicit */int) arr_5 [i_1])) + (105)))))))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) ((7506208713496113682LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53929)))))) >> (((((((/* implicit */int) arr_5 [i_1])) + (105))) - (37))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((((/* implicit */int) (short)12854)) < (((/* implicit */int) (short)-32006)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13386))) + (((((/* implicit */_Bool) -7991328865656026497LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))))))) : (((/* implicit */unsigned long long int) min(((+(415819602))), (415819620)))))))));
        arr_8 [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
        arr_9 [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (2199023255551LL))) ? (((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47967))) > (-3633525791364082658LL)))) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
    }
}
