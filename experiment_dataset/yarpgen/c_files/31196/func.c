/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31196
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
    var_17 = ((/* implicit */int) min((max(((-(var_12))), (min((((/* implicit */unsigned int) (signed char)51)), (4294967295U))))), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = min((arr_4 [i_0] [i_0] [i_1] [i_2]), (min((arr_4 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_1)))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (arr_4 [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_1 [i_2])))) == (((/* implicit */int) (signed char)-56)))))) : (min((6440406918284804591LL), (((/* implicit */long long int) (unsigned char)255))))));
                    var_19 ^= ((/* implicit */unsigned short) (+((+(((long long int) arr_0 [i_0]))))));
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_5 [19ULL] [i_1] [(short)19]))));
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-6493765027879733026LL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_2 [i_0])))))))) : (4294967294U)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_8);
    var_22 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (1173465858U)))) % (((288230376084602880LL) >> (((((/* implicit */int) var_5)) - (77)))))))));
    var_23 += ((/* implicit */unsigned char) min(((((+(((/* implicit */int) (short)8375)))) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))), ((!(((/* implicit */_Bool) 9223372036854775807LL))))));
}
