/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226577
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
    var_17 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (var_13));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0] [i_3 + 1]))) > (arr_9 [i_2] [i_3] [i_2] [i_0]))) ? (((((/* implicit */long long int) var_12)) / (arr_9 [i_0] [i_1] [i_2] [i_3 + 2]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_3 + 2])))))));
                        var_19 &= ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_2] [i_1] [i_0])))));
                        var_20 -= ((/* implicit */long long int) arr_4 [i_3 - 2]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_21 ^= max(((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))), ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])))));
                            var_22 = ((/* implicit */unsigned int) arr_6 [i_2]);
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_3] [i_3])) ? (7322617737972624763LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((var_1) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (signed char)112))))) : ((((_Bool)1) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))) : (min((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) arr_1 [i_0])))))))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 2) 
    {
        arr_20 [i_5] = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)));
        var_25 ^= (-(((/* implicit */int) var_9)));
        var_26 = ((/* implicit */unsigned long long int) ((long long int) (+(7322617737972624753LL))));
    }
}
