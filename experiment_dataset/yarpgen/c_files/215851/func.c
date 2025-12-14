/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215851
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_0 + 1] = ((/* implicit */int) min((arr_1 [i_0 + 3]), (((max((var_6), (((/* implicit */long long int) (_Bool)1)))) - (((/* implicit */long long int) min((2919989119U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_7)) != (max((arr_2 [i_1] [i_0 + 1]), (arr_1 [i_1])))));
                    arr_10 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (max((((/* implicit */long long int) var_11)), (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (2919989136U) : (((/* implicit */unsigned int) 2147483647))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 11LL)) ? (2919989136U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)8] [i_2 - 1]))))))));
                    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned char)4] [i_1] [i_0 + 2])) < (((/* implicit */int) var_8)))))));
                    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)79))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)255))))))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */unsigned char) var_3);
    var_17 = min((min((min((((/* implicit */long long int) var_8)), (var_6))), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)36582))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)255))))));
    var_18 = ((/* implicit */_Bool) min((max((((var_3) * (1125223425U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)107)), (var_11)))))), (((/* implicit */unsigned int) var_5))));
}
