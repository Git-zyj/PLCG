/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203436
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
    var_12 = ((/* implicit */unsigned char) ((((unsigned int) (~(var_5)))) % (((/* implicit */unsigned int) (-2147483647 - 1)))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_0))))) && (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5)))) || (((var_10) || (((/* implicit */_Bool) var_7))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (788233486308453596ULL)));
    var_15 = ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-1)), (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-14))))) : (((long long int) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [6LL] [i_1] [i_1] [(short)8] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) arr_4 [i_1] [i_2])) % (arr_2 [i_2 - 3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1] [i_2])))) ? (((/* implicit */int) ((arr_5 [(_Bool)1] [i_1] [i_2 + 1]) < (((/* implicit */unsigned int) -499892639))))) : (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_6 [i_0] [(unsigned char)7] [i_0])))))))));
                    arr_8 [i_2] [i_2] [i_2] [(unsigned char)0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned short)1])))) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)19292))))))));
                }
            } 
        } 
    } 
}
