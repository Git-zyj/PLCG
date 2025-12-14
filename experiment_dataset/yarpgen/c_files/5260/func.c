/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5260
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
    var_18 = ((/* implicit */unsigned long long int) var_15);
    var_19 = ((((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) 2416486673031262316LL)) == (((/* implicit */unsigned long long int) var_15)))))) - (((-1LL) / (-497169173689849855LL))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6666502150585634475LL)) ? (var_14) : (var_7)))) ? (max((((/* implicit */unsigned long long int) 5266458274610505036LL)), (var_9))) : (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) var_2)) ? ((-(var_12))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((-6666502150585634452LL), (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 6735012357854721388LL)) : (var_7))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 2]);
        var_21 = (+((-9223372036854775807LL - 1LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0 + 2])));
        var_22 = ((((/* implicit */_Bool) -6666502150585634475LL)) ? (((/* implicit */unsigned long long int) -2870949487796526502LL)) : (13103318904938381420ULL));
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        var_23 = ((((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (max((arr_5 [i_1]), (((/* implicit */unsigned long long int) 2870949487796526479LL)))) : ((~(arr_5 [8ULL]))))) & (((/* implicit */unsigned long long int) -947361332099715300LL)));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 14878252045983028269ULL)) ? (-6720955071798075499LL) : (-3133606219827062634LL))), (arr_4 [i_1 + 1])))) ? (((((/* implicit */_Bool) 2583057982183328322ULL)) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((long long int) 5445679976038028535ULL)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_24 = 3568492027726523340ULL;
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (var_7)));
        var_26 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((min((arr_8 [i_2] [i_2]), (4817715589150277919ULL))) > (arr_9 [i_2])))), (((arr_8 [i_2] [i_2]) ^ (arr_8 [i_2] [i_2])))));
        arr_10 [i_2] = ((/* implicit */long long int) arr_8 [i_2] [i_2]);
        var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))) ? (((((/* implicit */unsigned long long int) 8104341107571057315LL)) * (3568492027726523340ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2]))))))));
    }
}
