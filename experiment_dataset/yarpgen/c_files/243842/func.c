/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243842
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
    var_13 = ((/* implicit */signed char) ((unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))))));
    var_14 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (((1899533977U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43208)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (1048575) : (((/* implicit */int) (signed char)-15))))) ? (min((((/* implicit */unsigned int) arr_0 [i_0])), (10U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0] [(unsigned char)5]), (arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [23ULL] = ((/* implicit */unsigned char) ((((long long int) (unsigned char)192)) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(_Bool)1]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) var_1);
                    arr_9 [i_1] = ((/* implicit */long long int) arr_6 [i_2]);
                    var_17 = ((/* implicit */int) arr_5 [i_1]);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [18U])) <= (((/* implicit */int) var_0)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))) > (((unsigned long long int) (_Bool)1))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 7737607958688580359LL))));
        arr_12 [i_3] = ((/* implicit */short) arr_0 [(unsigned char)13]);
    }
}
