/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230814
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
    var_16 ^= ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) arr_6 [i_0] [6U] [i_0]);
                    arr_8 [i_0] [(unsigned char)9] [i_0] [(unsigned char)9] = ((/* implicit */unsigned short) ((min((arr_7 [i_2 + 1] [i_1] [0]), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) << (((((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_6 [i_0] [i_1] [7])))))) + (120)))));
                    arr_9 [11] [i_1] [11] [11] = ((unsigned short) ((((/* implicit */_Bool) arr_7 [7ULL] [i_2 - 1] [i_2 - 2])) ? (arr_7 [i_2] [i_2 - 1] [i_2 - 2]) : (arr_7 [i_2] [i_2 - 2] [i_2 - 1])));
                    var_18 = ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_3 [(_Bool)1] [2U])) & (((/* implicit */int) arr_6 [i_0] [i_0] [6U]))))))) + (((max((arr_7 [i_0] [(unsigned short)10] [(signed char)10]), (((/* implicit */unsigned long long int) arr_2 [i_1])))) << (((((/* implicit */int) ((unsigned char) arr_6 [i_0] [(short)3] [(short)3]))) - (16))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 905322213U)) ^ (arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2])))) ? (((/* implicit */unsigned long long int) 905322210U)) : (((arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 1]) << (((((/* implicit */int) (short)126)) - (65)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))), (((unsigned long long int) var_1)))) : (((16794137971587823847ULL) * (((/* implicit */unsigned long long int) max((3389645082U), (3389645082U)))))))))));
}
