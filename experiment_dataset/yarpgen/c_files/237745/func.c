/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237745
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [16LL] = ((/* implicit */unsigned int) min((((int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)127)) : (var_5)))), ((((+(((/* implicit */int) (signed char)126)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-127)))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_3);
                var_15 -= (-((+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_4 [(_Bool)1]))))));
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (signed char)114)) - (96)))));
                var_16 = ((/* implicit */_Bool) arr_4 [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_17 = (-(((/* implicit */int) (unsigned char)60)));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-((-(((/* implicit */int) arr_0 [i_2])))))))));
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_2]))));
    }
    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        var_20 = ((/* implicit */long long int) arr_11 [i_3]);
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 5052348543467539326LL)))))));
    }
    var_21 = ((/* implicit */unsigned char) var_5);
}
