/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220276
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) % (((/* implicit */int) var_4))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0])), (arr_1 [i_0] [i_1])))) : (((/* implicit */int) min((((signed char) var_9)), ((signed char)-32))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)17202)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43649))) : (12332226037720177674ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned short) ((unsigned char) var_8)))))))));
                arr_7 [(unsigned short)18] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_2 [i_1]))) ? (((/* implicit */int) (unsigned short)43652)) : (((((/* implicit */_Bool) 529328139288164964LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)43649)))))) : (((/* implicit */int) arr_4 [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)21886)))) <= (((/* implicit */int) (unsigned char)3)))) ? (((/* implicit */int) ((((unsigned int) (unsigned char)11)) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-84))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) (signed char)-15))))));
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
    var_17 = ((/* implicit */unsigned long long int) var_5);
}
