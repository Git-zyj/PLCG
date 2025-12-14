/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38278
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
    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_8))), ((unsigned char)255))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned int) (~(arr_2 [i_0])))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((_Bool)1) ? (arr_1 [i_0]) : (var_11)))) + (min((3385059447U), (((/* implicit */unsigned int) (unsigned char)22))))))), (9591446098667313476ULL))))));
    }
    for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        var_15 = var_10;
        var_16 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((var_3), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) <= (((((var_5) + (3385059461U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1 + 2])))))));
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_6 [i_1 - 1])))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (arr_1 [i_1 - 1]) : (arr_2 [i_1])))) || (((/* implicit */_Bool) 3385059447U))));
        var_19 = ((/* implicit */unsigned int) min((8692948326014700508LL), ((-(arr_3 [i_1 + 1])))));
    }
}
