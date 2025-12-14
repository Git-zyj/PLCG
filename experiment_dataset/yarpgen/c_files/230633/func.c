/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230633
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_4)))))))) ? ((-(var_7))) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((-6772288007291344643LL), (((/* implicit */long long int) arr_2 [i_1] [i_0]))))))) ? (-1) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                arr_5 [i_0] [(short)2] [(short)2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_0])) <= (((/* implicit */int) arr_3 [i_0] [12LL] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (0) : (((/* implicit */int) arr_3 [(unsigned char)13] [i_1] [i_1])))) : (((/* implicit */int) max(((short)32767), ((short)-27834))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((-60061560) > (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)30925)) : (var_7))) ^ (((/* implicit */int) max((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_0]))))))));
                arr_6 [i_1] = ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) max((arr_1 [i_1] [i_0]), (arr_1 [i_0] [i_0])))));
                arr_7 [i_0] [6] [i_1] = ((/* implicit */long long int) var_5);
                arr_8 [i_0] [7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2414872409U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) << (((((/* implicit */int) var_3)) - (44))))) % (min((((/* implicit */int) (unsigned short)44241)), (var_7)))))) || (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) min((var_4), (var_1)))))))));
}
