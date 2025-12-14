/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197305
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
    var_10 |= var_4;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (~((+(arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        var_12 &= ((/* implicit */unsigned char) (+(arr_3 [(short)14])));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))) / (arr_4 [i_1])));
        var_14 = ((/* implicit */int) (+(arr_4 [i_1])));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [(short)10])) ? (arr_4 [16LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32761))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 += arr_5 [i_2];
        var_17 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1720909306)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_8 [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
        var_18 = ((((((/* implicit */_Bool) 1514424580)) ? (4294967295U) : (4294967295U))) <= (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_7 [i_2]))))) - (min((var_9), (var_9))))));
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) var_0);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-5107))));
        arr_13 [i_3] = ((/* implicit */long long int) (-(var_5)));
        var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : ((-9223372036854775807LL - 1LL))))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) arr_12 [i_3]);
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (max((((/* implicit */unsigned int) (short)15565)), (var_9)))))) ? (((max((((/* implicit */unsigned long long int) var_7)), (16701714653388291392ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_9)) : (var_4)))) | (var_5)))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2)))) ? (((((/* implicit */int) (unsigned char)252)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))));
}
