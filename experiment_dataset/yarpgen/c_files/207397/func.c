/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207397
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((_Bool) (signed char)41);
                    arr_10 [i_2 + 2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_6 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-92)) & (((/* implicit */int) (unsigned char)91))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)11946), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [(unsigned char)9] [i_2])))))) : (min((((/* implicit */unsigned long long int) (unsigned char)152)), (arr_1 [i_0] [3ULL]))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7)))))))));
                    var_12 = ((/* implicit */signed char) min((min((min((11U), (((/* implicit */unsigned int) var_3)))), (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))))), (((max((var_9), (((/* implicit */unsigned int) var_6)))) << ((((~(((/* implicit */int) (unsigned char)165)))) + (174)))))));
                }
            } 
        } 
    } 
    var_13 = ((min((var_9), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */short) var_3))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_8))))));
}
