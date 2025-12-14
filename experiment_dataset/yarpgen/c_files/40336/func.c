/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40336
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
    var_12 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))))) ? (((/* implicit */unsigned int) var_10)) : (var_3)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [3ULL] [i_1]), (((/* implicit */long long int) arr_2 [(unsigned char)10]))))))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2855381626590647170LL), (-3495358857563238226LL)))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1])))) : ((~(((/* implicit */int) arr_2 [i_1 - 1]))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [9ULL])) ? (((/* implicit */int) arr_0 [(signed char)0] [i_1])) : (((/* implicit */int) arr_0 [(unsigned short)4] [i_1 - 1]))))) ? (((unsigned int) arr_2 [4LL])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1])))));
                    var_15 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0] [(unsigned char)9])), (arr_4 [i_0] [i_1 - 1] [5LL]))))))), ((((!(((/* implicit */_Bool) arr_7 [i_2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(_Bool)1] [(short)7]))))) : (((arr_1 [i_1 - 1] [7U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)7]))) : (arr_4 [i_2] [(unsigned short)5] [(unsigned short)5])))))));
                }
            } 
        } 
    } 
}
