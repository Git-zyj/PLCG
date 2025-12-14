/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222607
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-((+(max((arr_6 [i_0] [i_2] [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) 4265872178U);
                    arr_9 [i_0] = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (arr_3 [i_1]) : (((/* implicit */int) (unsigned char)126))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (29095118U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                    var_11 = ((/* implicit */long long int) arr_0 [i_0] [i_2]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) ((int) var_8));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((226772543U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4265872178U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 9223372036854775797LL)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((-6) <= (((/* implicit */int) (signed char)15)))))))));
    var_14 &= ((/* implicit */long long int) min((var_9), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4080970681U))) % (213996615U)))));
}
