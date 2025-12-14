/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33120
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((min((((/* implicit */int) var_17)), ((~(((/* implicit */int) var_17)))))) & (((/* implicit */int) min((((unsigned char) (unsigned char)255)), (var_12)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = min((((int) (unsigned char)242)), ((((-2147483647 - 1)) | (arr_2 [i_0 - 2] [i_0 + 1] [i_0 + 2]))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) / (1923551277)))) ? (((arr_0 [i_0 - 2]) / (arr_0 [i_0 - 3]))) : (((arr_0 [i_0 - 4]) / (arr_0 [i_0 - 1])))));
                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((2147479552) - (((int) (unsigned char)12))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (-1792125218) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) arr_0 [i_1]))))) : (arr_0 [i_0])))));
                arr_4 [i_0] = ((unsigned char) var_4);
                var_22 = ((/* implicit */unsigned char) max((var_22), (((unsigned char) (+(arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            {
                arr_9 [i_3] = min((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_5 [i_2]))))) ? (arr_8 [i_3 - 1] [i_3 - 1]) : (((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)0)) : (2))))), (((((/* implicit */int) arr_6 [i_2] [i_2])) | (((/* implicit */int) arr_7 [i_2] [i_3])))));
                var_23 = max((((((int) arr_5 [i_2])) & (((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */int) arr_5 [7])) : (arr_8 [i_2] [i_2]))))), ((~(((/* implicit */int) min((arr_6 [i_2] [i_3]), ((unsigned char)30)))))));
            }
        } 
    } 
}
