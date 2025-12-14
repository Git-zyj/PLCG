/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207147
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (var_4) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)))));
    var_15 = ((((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [i_2] [i_2 + 1])) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 - 1])) ? (arr_0 [i_2 - 1] [i_2 + 1]) : (arr_0 [i_2 - 1] [i_2 - 1])))));
                    arr_7 [0ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_2 + 1]), (arr_4 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((((/* implicit */_Bool) 1828124683U)) ? (536346624U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])))))));
                    arr_8 [i_0] [i_0] [i_0] [(unsigned short)3] = ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            for (unsigned char i_5 = 4; i_5 < 13; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4 - 2] [i_4] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) <= (((((/* implicit */_Bool) arr_9 [i_3] [7U])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 + 2] [(_Bool)1]))))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (var_1))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_4 + 2] [i_4]))))), (((arr_16 [i_3] [i_3 + 1] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_5]))))))))));
                    arr_17 [i_3 - 1] [i_3] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_14 [i_5 - 3] [i_5 - 4] [i_3])), (var_10)))) ? (arr_16 [(short)9] [i_4] [i_3]) : (((((/* implicit */_Bool) arr_6 [17U] [i_3 + 2] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3 + 2] [i_3] [i_3 - 1]))) : (arr_6 [i_3] [i_3 + 2] [i_3] [i_3 - 1])))));
                    arr_18 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5 - 3])) ? (((((/* implicit */_Bool) arr_13 [(unsigned char)9] [i_5] [i_5 - 2])) ? (((/* implicit */int) arr_13 [i_5] [i_5 - 4] [i_5 - 3])) : (((/* implicit */int) arr_13 [i_5] [i_5 - 3] [i_5 - 2])))) : (((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5 - 3])) ? (((/* implicit */int) arr_13 [i_5] [i_5 - 2] [i_5 - 3])) : (((/* implicit */int) arr_13 [i_5] [i_5 - 2] [i_5 - 4]))))));
                }
            } 
        } 
    } 
}
