/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214886
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) 547902570)))))));
    var_14 = ((/* implicit */unsigned short) (((-(min((var_6), (-179110518))))) >= (var_8)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (max((min((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (179110499)))) : (var_1)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) min((var_16), ((+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (arr_0 [i_1])))))));
            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
            var_18 = ((/* implicit */int) ((12026228966368724110ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6185)))));
        }
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_7 [(unsigned short)2] [(unsigned short)2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_6 [i_2] [i_2])))) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_2] [i_2])), (arr_3 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (max((124ULL), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_12)), (-126117199))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) var_11)))))))));
        var_19 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) -935039463))) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (min((var_9), (((/* implicit */int) arr_1 [12] [i_2]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) / ((+(12444818079372958336ULL)))))));
        arr_8 [i_2] [i_2] = ((/* implicit */int) var_11);
    }
    var_20 = ((/* implicit */unsigned short) var_10);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-1291460496) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)62576)) : (var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (var_7) : (-1291460517))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_1)))))))));
}
