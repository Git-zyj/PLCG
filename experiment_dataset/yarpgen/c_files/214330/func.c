/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214330
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((/* implicit */long long int) (-(((arr_3 [i_1 + 1] [i_0 - 1]) - (arr_3 [5] [i_1])))))), (max((2326740863924796143LL), (((/* implicit */long long int) var_7)))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) (unsigned short)65515)))), (((/* implicit */int) arr_4 [i_0 - 1] [i_1]))))) >= (arr_1 [i_1])));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_5 [i_0 - 1]), (((/* implicit */unsigned int) (unsigned short)65515)))))) ? (((/* implicit */int) max(((unsigned short)65508), (min(((unsigned short)10), (((/* implicit */unsigned short) (signed char)-1))))))) : (((/* implicit */int) var_5))));
                var_17 = (!(((/* implicit */_Bool) min((max((arr_2 [i_0]), (arr_2 [i_0]))), (((/* implicit */long long int) (~(-871051551))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(var_14))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) arr_5 [i_3 + 2]);
                var_20 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_8 [i_2] [i_3 - 1])))), (max((((/* implicit */int) arr_8 [(short)8] [i_3 + 1])), (arr_12 [i_2] [i_3 + 1])))));
                arr_14 [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((unsigned long long int) (unsigned short)18)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))) <= (var_1))))))))));
                arr_15 [i_3] [i_3] [i_3 - 1] = ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_2] [i_3 + 2]))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_2] [i_2])), ((unsigned short)5)))) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)65504))))))) : (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (unsigned short)65519)) : (-1353852262))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((long long int) min((((/* implicit */int) ((signed char) arr_5 [i_2]))), (arr_12 [i_3 + 2] [i_2])))))));
            }
        } 
    } 
}
