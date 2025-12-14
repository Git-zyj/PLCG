/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244188
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (signed char)0))));
                    arr_9 [i_2] [i_1 + 1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)0)), (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_2 [i_2] [i_1 - 1]))))) : (arr_5 [i_0] [i_1 - 1])))) ? (274877906432ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (((+(var_5))) << (((((var_4) + (2079651589))) - (59)))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_11)))))) : (((/* implicit */int) var_11))));
}
