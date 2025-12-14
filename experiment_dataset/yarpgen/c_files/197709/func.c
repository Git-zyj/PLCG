/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197709
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
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 += ((max((max((var_15), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), (var_14)))))) > (((/* implicit */long long int) (+(((/* implicit */int) var_16))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(min((max((((/* implicit */int) arr_3 [(unsigned char)20])), (-119292472))), (890263277))))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_10)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59)))))));
                    arr_10 [i_1] [(unsigned char)8] [(_Bool)1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_4 [i_0 + 1] [i_1] [i_2]) / (arr_4 [i_0 - 1] [i_1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (short)-27390)))))));
                    var_22 = ((/* implicit */int) min((var_22), (2060993100)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) min((2557835728U), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
        var_23 &= ((((/* implicit */_Bool) arr_6 [i_3])) ? (min((var_8), (((/* implicit */unsigned int) ((arr_4 [i_3] [i_3] [i_3]) < (268630194)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)184))))));
        arr_16 [i_3] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) arr_11 [i_3])) : (min((((/* implicit */unsigned int) arr_3 [(unsigned short)15])), (3734735367U)))))), ((+(((((/* implicit */_Bool) var_13)) ? (arr_14 [i_3]) : (((/* implicit */long long int) arr_4 [i_3] [i_3] [i_3]))))))));
    }
}
