/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195538
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((max((((/* implicit */unsigned long long int) (unsigned char)0)), (12831164953672103625ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-105))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) << (((arr_1 [i_0] [i_0]) - (9194909405083207010ULL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? ((+(((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) (short)(-32767 - 1)))));
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) + (arr_2 [i_1 - 1])));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_22 -= ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)26)))), (((/* implicit */int) var_6))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)3)))))))));
        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)31))));
    }
    for (int i_3 = 2; i_3 < 23; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)16)) : ((+(((((/* implicit */_Bool) (unsigned short)59521)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (short)20334))))))));
        arr_14 [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_18))))))) ? (1ULL) : (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-20331))) ^ (1U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)21))))))))));
    }
    for (long long int i_4 = 4; i_4 < 21; i_4 += 3) 
    {
        arr_19 [i_4] [(signed char)10] |= ((/* implicit */long long int) (signed char)33);
        arr_20 [6] |= ((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 3])))))));
    }
    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
    var_26 = ((/* implicit */int) min((var_26), ((-(((/* implicit */int) (signed char)103))))));
}
