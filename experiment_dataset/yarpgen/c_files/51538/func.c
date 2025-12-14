/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51538
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))))))) >= (min(((+(var_10))), (((/* implicit */unsigned long long int) max((-4885451169008387837LL), (((/* implicit */long long int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_4 [4ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)0]))) : (var_10)))))) ? (((long long int) -1LL)) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1)))))));
                arr_6 [i_0] [(signed char)3] [i_1] = arr_2 [i_0];
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((max(((+(11431093848274490820ULL))), (((/* implicit */unsigned long long int) (~(var_3)))))), (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_11)) : (11431093848274490826ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-1512492243) : (((/* implicit */int) (unsigned char)18)))))))));
}
