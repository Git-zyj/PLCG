/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243606
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
    var_14 = ((/* implicit */int) (-(min((min((var_13), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_4))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                    arr_9 [i_1] [i_1] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (min((arr_3 [i_2 - 2] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_2 - 2] [i_2 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    arr_10 [i_0] = ((/* implicit */_Bool) var_13);
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [(unsigned char)3])) : (((/* implicit */int) arr_1 [i_2 - 3])))), (((/* implicit */int) min(((short)-27352), (((/* implicit */short) ((((/* implicit */int) (short)-27341)) > (((/* implicit */int) (unsigned short)11906))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (var_7)))))) || (((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) var_11)), (var_10)))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_13))))))) > (min((((/* implicit */int) var_5)), (min((var_7), (((/* implicit */int) var_0))))))));
}
