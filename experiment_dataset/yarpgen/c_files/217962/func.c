/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217962
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_6 [7] [i_1] [(unsigned char)5] [8LL] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [2LL])) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-73)), (arr_2 [i_2 + 1]))))));
                    arr_7 [i_0] [(signed char)10] [i_2] = ((/* implicit */signed char) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (max(((~(((/* implicit */int) (short)25057)))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_1)) - (21339))))))) : (((/* implicit */int) var_16))));
    var_20 |= ((/* implicit */signed char) ((unsigned int) (+(2021323165))));
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) var_14)), (((-116699232) ^ (((/* implicit */int) (_Bool)1))))))), ((((+(var_13))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))));
}
