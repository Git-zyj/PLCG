/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248490
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
    var_20 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8486415343549334311ULL)) ? (((/* implicit */int) (signed char)-1)) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : ((-(max((var_3), (((/* implicit */unsigned int) arr_2 [i_2]))))))));
                        arr_11 [i_0] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((9960328730160217304ULL), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15341)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_0] [i_0]))) : (var_7)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)44923))))) : (arr_0 [i_3]))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = min((((/* implicit */long long int) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0])))))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (((long long int) arr_4 [i_0] [i_0])))));
    }
}
