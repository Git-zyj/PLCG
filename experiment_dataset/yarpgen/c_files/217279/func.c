/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217279
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
    var_10 = ((/* implicit */signed char) min((((unsigned int) -1652371068140738238LL)), (min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) (unsigned char)62)) ? (2146230048U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    var_11 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)89)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1181379281) : (-1181379282)))) ? (min((-1181379281), (-1181379282))) : (((/* implicit */int) var_4))))));
    var_12 = ((/* implicit */unsigned int) -927861913502276937LL);
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)114))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) arr_2 [i_0] [i_1 - 2] [i_2 + 1]);
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((min((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1] [i_1 + 1])), (1181379281))), (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1] [i_1 - 1])) | (((/* implicit */int) arr_3 [i_1 - 2])))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((min((408494943U), (((/* implicit */unsigned int) arr_2 [i_2 + 1] [i_2 + 1] [i_1 - 1])))) * ((+(((unsigned int) 1181379282))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max(((-(arr_5 [i_0] [i_1 + 1] [i_1]))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_3 [i_0])))))))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_2 - 1] [i_2 + 1])) ? (((((/* implicit */unsigned int) -1181379281)) ^ (arr_4 [i_1 + 1] [i_2 - 1] [i_2 - 1]))) : (((arr_4 [i_1 + 1] [i_2 - 1] [i_2 + 1]) * (arr_4 [i_1 - 1] [i_2 + 1] [i_2 + 1])))));
                }
            } 
        } 
    } 
}
