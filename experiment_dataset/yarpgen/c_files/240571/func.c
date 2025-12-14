/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240571
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((unsigned int) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_2)))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)0))))) ? (min((var_10), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_17))))));
        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 3443491857U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) : (3618466910U)));
        arr_4 [i_0] = min((min((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) (unsigned short)55091)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1624757194)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))))));
        var_21 = ((/* implicit */unsigned short) (-(var_7)));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
        arr_8 [i_1] = ((/* implicit */int) 15844554606051370762ULL);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_13 [i_3] [i_1] [i_1] = ((/* implicit */int) 9311816633371485626ULL);
                    var_23 = ((/* implicit */int) arr_10 [i_3] [i_1]);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) 3261185810U);
        arr_14 [i_1] = arr_9 [i_1] [i_1];
    }
    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4 + 1]))))))))));
        var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_9 [i_4 + 2] [i_4 + 1])), (((((/* implicit */_Bool) arr_5 [i_4])) ? (arr_5 [i_4]) : (arr_5 [i_4])))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_27 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)10445))));
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) arr_3 [i_5]);
    }
    var_28 = ((/* implicit */short) var_12);
}
