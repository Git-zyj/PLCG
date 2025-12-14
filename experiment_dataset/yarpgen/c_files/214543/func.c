/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214543
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
    var_11 = var_0;
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (((~(arr_6 [i_0] [(short)4] [i_2] [(signed char)6]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)192)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_2] = ((short) ((((/* implicit */int) (unsigned char)192)) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2] [(short)8]))));
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned char)197)))), (((/* implicit */int) ((signed char) arr_7 [i_0] [(unsigned char)1] [i_0] [i_3] [i_1]))))))));
                        arr_10 [(short)7] [i_0] &= ((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_8 [i_0] [i_3] [(unsigned char)3] [i_0]))))));
                    }
                }
            } 
        } 
    } 
}
