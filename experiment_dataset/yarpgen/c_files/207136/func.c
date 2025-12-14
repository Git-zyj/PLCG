/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207136
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)21370)) ? (((/* implicit */int) (short)17996)) : (-1)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((arr_3 [i_0] [i_0]) % (arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0] [i_1])))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) | (arr_3 [i_0] [i_2])))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_2])) ? (14371840725903443743ULL) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) arr_5 [i_2])) : (arr_4 [i_0] [i_1])));
                    var_22 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_1] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) : (0U)))) + (((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_16);
}
