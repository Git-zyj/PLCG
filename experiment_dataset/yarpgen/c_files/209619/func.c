/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209619
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
    var_14 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((unsigned int) (-9223372036854775807LL - 1LL)))), (var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26)))))) > (max((var_11), (((/* implicit */int) (signed char)-5))))))))));
    var_15 = max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), ((~(((/* implicit */int) var_13)))))), (((/* implicit */int) ((unsigned short) ((signed char) (signed char)-27)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (+(var_0));
                    arr_9 [i_2] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_5 [i_0] [i_0])))), (((/* implicit */int) max((arr_3 [i_0] [i_1] [6LL]), (var_1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1886415781)) ? (((/* implicit */int) ((unsigned char) arr_1 [i_2]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2127))) < (var_12))))))) : (max((((/* implicit */unsigned long long int) (signed char)8)), (0ULL)))));
                }
            } 
        } 
    } 
}
