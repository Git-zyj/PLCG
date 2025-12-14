/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199221
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
    var_12 = ((/* implicit */short) var_8);
    var_13 -= (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49884)) & (((/* implicit */int) (_Bool)1))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_8))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned char)6] [(unsigned short)6] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)30))))))), (((/* implicit */int) ((min((((/* implicit */unsigned int) arr_5 [i_0] [i_2])), (339092939U))) == (max((((/* implicit */unsigned int) (signed char)-12)), (arr_2 [14ULL]))))))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) / (3955874360U))))))), ((((+(((/* implicit */int) var_4)))) * (((/* implicit */int) arr_6 [i_2])))))))));
                    var_15 = (~(max((arr_7 [i_0] [i_1 - 1] [i_2]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_6 [i_0])), (var_3)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) max((((/* implicit */int) max((var_4), (var_4)))), (var_2)));
}
