/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231167
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0 - 1] [i_0])) : (var_8)))));
                    var_11 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (7043945144815091025ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) <= (var_8))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (9223372036854775790LL)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) : (arr_6 [i_2] [(unsigned char)12] [i_0 - 1] [(unsigned char)6])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) == (1011483935))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((short) 419379458088622545LL)))))) : (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [i_1] [i_2] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) 277076930199552ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3))))));
}
