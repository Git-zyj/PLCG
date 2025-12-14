/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237147
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [(signed char)13] [(signed char)13] [(signed char)13] = ((/* implicit */_Bool) ((int) ((int) arr_2 [i_0])));
                arr_5 [i_0] [i_1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) (+(var_10))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (((+(var_2))) * (((/* implicit */int) ((short) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (var_3)));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_12 ^= ((/* implicit */signed char) (+(((int) (short)17754))));
        arr_9 [i_2] = ((((/* implicit */int) ((signed char) arr_2 [i_2]))) < ((~(((/* implicit */int) arr_3 [11ULL] [i_2] [i_2])))));
        arr_10 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [(short)10])) : (((/* implicit */int) arr_2 [i_2])))) >> (((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2] [0]))))) - (5460268572899955247LL)))));
        var_13 = ((/* implicit */signed char) (~(min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) ((var_2) == (((/* implicit */int) var_1)))))))));
    }
    var_14 &= ((/* implicit */int) var_1);
}
