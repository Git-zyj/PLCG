/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243448
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
    var_15 = ((/* implicit */unsigned char) max((((short) (~(((/* implicit */int) var_13))))), (((/* implicit */short) var_12))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        var_16 = ((unsigned int) max((((/* implicit */unsigned short) (signed char)43)), ((unsigned short)6144)));
                        arr_9 [i_0] [i_2] = ((/* implicit */long long int) var_10);
                        var_17 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]))), (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))));
                        arr_10 [i_0] [1] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_3 + 1] [i_2 - 1] [(short)10]) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_4 [5]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0]))))) : (arr_7 [i_1 - 2] [i_1] [i_1]))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_3) > (var_3)))))) + (2147483647))) << (((var_5) - (8151865583386282603LL)))));
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) min((var_2), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11)))))))) + (2147483647))) << (((max((max((var_9), (((/* implicit */int) var_8)))), (((/* implicit */int) (short)-19106)))) - (915420049)))));
    var_20 = ((/* implicit */_Bool) var_2);
}
