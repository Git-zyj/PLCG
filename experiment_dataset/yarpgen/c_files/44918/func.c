/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44918
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
    var_12 += ((/* implicit */unsigned long long int) var_7);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((short) (-(var_9)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (max((((/* implicit */unsigned int) var_8)), (min((0U), (((/* implicit */unsigned int) var_11))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_3 [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((unsigned char) var_7))), ((+(var_9))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_2]))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))) : (((((/* implicit */_Bool) var_0)) ? (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) max((((var_4) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3)))))))))))));
                        var_17 += ((/* implicit */signed char) max((492581209243648LL), (((/* implicit */long long int) 0U))));
                        arr_13 [i_0] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 5660013920274611314LL)) || (((/* implicit */_Bool) 8387584U))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_1);
}
