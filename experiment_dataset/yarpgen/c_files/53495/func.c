/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53495
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
    var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_16)))) ? (((unsigned int) ((signed char) var_0))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-110)) == (((/* implicit */int) (signed char)-110))))) + (((/* implicit */int) (signed char)109)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-120)))) + (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)122)), ((unsigned short)3))))));
                    arr_11 [i_0] [i_1] [(unsigned short)21] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-117)) / (((/* implicit */int) (unsigned short)58229))))) / (max((arr_4 [(unsigned char)17]), (((/* implicit */unsigned int) arr_9 [i_2]))))))));
                }
            } 
        } 
    } 
}
