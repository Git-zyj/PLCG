/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202698
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 += ((/* implicit */short) max((((/* implicit */unsigned long long int) min((min((var_2), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((var_1) - (1081156417))))))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2] [(unsigned short)20]))) : (max((((/* implicit */unsigned long long int) var_8)), (var_4)))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) var_9)), (12524995152196081297ULL))))))));
                    var_13 *= var_4;
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8)))))))) ? (var_1) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_5) || ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    var_15 = ((/* implicit */unsigned char) ((int) (signed char)-111));
}
