/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43318
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3233)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)20))))))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (unsigned char)217))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_7 [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (min((((/* implicit */unsigned int) (short)-20)), (1906916352U))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_7 [i_1] [i_2] [i_3])))) ? (arr_7 [i_1] [i_2] [i_3]) : (((arr_3 [(unsigned short)0]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)27846)))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_7))));
                    arr_9 [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) min(((+(var_0))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [(signed char)11])) : (((/* implicit */int) arr_2 [i_1]))))));
                }
            } 
        } 
        arr_10 [i_1] = ((/* implicit */long long int) var_13);
    }
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) var_3)))))));
    var_22 = ((/* implicit */short) var_7);
}
