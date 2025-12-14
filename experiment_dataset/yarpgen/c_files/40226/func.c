/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40226
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_8))));
    var_15 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)-24))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min(((unsigned char)16), ((unsigned char)111))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_12)))))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_5)))))));
    var_16 = ((/* implicit */_Bool) ((2600187438U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)31208)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))) + ((-(var_1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_10))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [0LL] [i_1 + 1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))) ? ((+(((/* implicit */int) arr_5 [i_1 + 1])))) : (((/* implicit */int) ((short) arr_5 [i_0 - 1])))));
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_5 [i_0 - 1]))))) <= (((((/* implicit */_Bool) (short)-24773)) ? (var_5) : (((/* implicit */unsigned long long int) 2390766412428125LL))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_7 [i_2 + 2] [i_2 + 2] [i_1]))) ? (((int) var_5)) : (((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2] [i_1])) ? (((/* implicit */int) arr_7 [i_2 + 1] [7U] [i_1])) : (((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 2] [i_1]))))));
                    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)59), (((/* implicit */unsigned char) (signed char)-113))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)174)))) : (((/* implicit */int) arr_1 [i_2] [(unsigned char)4]))));
                }
            } 
        } 
        var_20 = ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 3] [i_0]))) : (var_2))) >> (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0])), (max((((/* implicit */unsigned short) var_13)), (var_4)))))));
    }
}
