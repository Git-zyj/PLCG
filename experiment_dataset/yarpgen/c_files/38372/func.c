/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38372
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (((-(((/* implicit */int) var_13)))) <= (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_15 = ((/* implicit */unsigned long long int) ((max((var_5), (((/* implicit */int) var_1)))) + (((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] [i_0] = (+(((/* implicit */int) (unsigned short)56454)));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) (signed char)-7))))) & (((/* implicit */int) (short)-32757))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((_Bool) 3356753254997244182ULL)))) && (((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) % (15089990818712307453ULL))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_8 [i_1]))))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */long long int) var_14)) <= ((((_Bool)1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))))))));
}
