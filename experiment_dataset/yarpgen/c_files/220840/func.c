/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220840
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0])), (arr_0 [8U])))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65525)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0]))) : (((/* implicit */int) arr_3 [i_0]))))));
                arr_5 [3U] = ((/* implicit */unsigned int) min(((-(((((var_8) + (2147483647))) << (((arr_1 [i_0]) - (987397370))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [3LL]))) * (var_6)))))))));
            }
        } 
    } 
    var_13 += ((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) <= (var_6))));
    var_14 += ((/* implicit */unsigned char) max((min((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_8))))), (min((var_4), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3918377930U)) ? (((/* implicit */unsigned int) 788951472)) : (4294967287U))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_16 [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_14 [i_2] [i_3] [i_4]), (((/* implicit */unsigned short) min((arr_13 [i_2] [i_2] [i_2] [i_2]), (var_2))))))) ? (min((((((/* implicit */_Bool) arr_14 [18LL] [i_3] [18LL])) ? (arr_11 [(unsigned char)2] [i_3] [i_4]) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])))) : (((/* implicit */int) arr_14 [i_2] [i_2] [(unsigned char)18]))));
                    arr_17 [i_3] = ((/* implicit */short) arr_11 [i_2] [(short)18] [i_4]);
                }
            } 
        } 
    } 
}
