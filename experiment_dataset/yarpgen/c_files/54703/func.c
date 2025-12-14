/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54703
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
    var_14 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((signed char) 0LL))))), (((/* implicit */int) min((var_8), (var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (var_1)))), ((-(0LL)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((var_1) | (((/* implicit */int) var_11)))) : (((/* implicit */int) min((var_4), (var_2))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((max((((/* implicit */unsigned long long int) var_5)), (var_7))) | (((/* implicit */unsigned long long int) (~(var_3)))))), (((/* implicit */unsigned long long int) var_1))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4237300110459329148ULL)))) ? (((((/* implicit */int) var_12)) / (((/* implicit */int) var_0)))) : (max((var_5), (((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_15 = var_2;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_11)))));
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_13))));
    }
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        arr_15 [i_3] &= ((/* implicit */_Bool) min((((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_0))))), (max((var_6), (var_4)))))), (min((((/* implicit */unsigned char) ((signed char) 4398046511096ULL))), (var_10)))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (signed char)32)), (((((/* implicit */_Bool) (unsigned short)39082)) ? (((/* implicit */int) (short)-15569)) : (((/* implicit */int) (unsigned char)14)))))), (max((min((((/* implicit */int) var_10)), (var_5))), (((var_1) | (var_5)))))));
        arr_17 [i_3] = ((/* implicit */unsigned short) max((((-7LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34295))))), (((/* implicit */long long int) (+(var_5))))));
    }
}
