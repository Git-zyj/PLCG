/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227013
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
    var_12 += var_5;
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_4)) | (((((((/* implicit */int) (signed char)20)) & (((/* implicit */int) (unsigned short)64491)))) >> (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~(((((/* implicit */_Bool) 803159844U)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)61)))))))));
                arr_6 [i_0] [23LL] [23LL] = ((/* implicit */unsigned int) ((min((var_3), (-1404965958))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) var_4))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) (unsigned char)149)) ? (-1LL) : (arr_1 [i_0]))))), (((/* implicit */long long int) 0))));
            }
        } 
    } 
}
