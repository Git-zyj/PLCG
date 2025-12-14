/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3786
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_7 [i_2]);
                        arr_10 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (3395092417U))))))), (((((((/* implicit */_Bool) 9223372036854775801LL)) && (((/* implicit */_Bool) (unsigned char)36)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_0] [i_0])) && (((/* implicit */_Bool) var_5))))) : (max((((/* implicit */int) var_3)), (var_8)))))));
                    }
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(unsigned short)7] [i_1] [i_1])) <= (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_10)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)46614)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) min(((unsigned short)18916), ((unsigned short)18916)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    arr_11 [i_0] [i_1] [i_2] |= ((/* implicit */long long int) max(((-(max((((/* implicit */unsigned int) (unsigned char)150)), (997580135U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) (unsigned char)189))))) >= (2U))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) 994045556U);
}
