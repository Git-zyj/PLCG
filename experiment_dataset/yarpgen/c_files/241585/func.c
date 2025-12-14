/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241585
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_7)))))))) ? (((/* implicit */int) (((-(((/* implicit */int) var_7)))) <= (((/* implicit */int) var_8))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (min((var_11), (((/* implicit */unsigned char) var_0)))))))));
    var_17 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) (short)1249)))), (((/* implicit */long long int) (~(((/* implicit */int) max((var_4), (((/* implicit */short) var_7))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) var_11)))))));
                    var_19 ^= max((arr_6 [i_2] [i_1] [i_1] [i_1]), (arr_0 [i_0]));
                    var_20 = ((/* implicit */long long int) max((var_20), (((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22664))) - (1114866716U)))), (((((/* implicit */_Bool) arr_3 [12U] [12U])) ? (arr_2 [i_0] [(signed char)8]) : (((/* implicit */long long int) arr_6 [i_2] [i_1] [i_0] [i_0])))))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [10U]))))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_0 [i_2]) < (1114866689U))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 2583265836U))) ? (((/* implicit */int) var_0)) : (((int) (signed char)100))))) : (((((/* implicit */_Bool) arr_4 [(_Bool)0] [i_0 + 2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-112))))) : (arr_4 [4U] [2U])))))));
                    arr_8 [5LL] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41608))) + (max((arr_1 [i_0]), (var_14)))))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)22677)))), (((_Bool) arr_4 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
