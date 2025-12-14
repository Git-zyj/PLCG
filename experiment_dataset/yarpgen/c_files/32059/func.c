/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32059
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        var_20 += ((/* implicit */unsigned char) 3142565880U);
                        var_21 = ((/* implicit */short) arr_6 [5] [i_3 - 1] [i_2] [i_2 - 2]);
                        var_22 = ((/* implicit */int) max((3142565873U), (1819991002U)));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 + 1] [i_2])) ? (var_19) : (((/* implicit */unsigned long long int) 1152401416U))))));
                        arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_3 + 2] [i_2] [i_0])) == (((/* implicit */int) arr_10 [i_1] [i_3 + 2] [i_2] [i_0]))))) : (((/* implicit */int) arr_2 [i_3]))));
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_0])) ? (1152401416U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-53)) == (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) 3142565880U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))))) ? (var_1) : (((/* implicit */unsigned long long int) var_9))));
                        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (3142565880U))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 23; i_5 += 1) 
                    {
                        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 - 3] [i_2] [i_5 + 1] [i_5] [i_5] [i_5]))) : (3142565847U)));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [(signed char)24] [i_1] [i_2 - 1])) : (2005107901)));
                    }
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [0LL] [i_2])) == (((/* implicit */int) (unsigned char)36))))))) != (((arr_6 [i_2 - 3] [i_1] [i_2] [i_2]) - (((/* implicit */int) (signed char)116)))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */int) var_2);
    var_29 = ((/* implicit */unsigned int) var_14);
}
