/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207486
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), ((unsigned short)18173)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) >= (max((((((/* implicit */_Bool) (unsigned short)47362)) ? (((/* implicit */unsigned long long int) var_15)) : (27ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47363)))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)18168)) + (arr_1 [i_0])));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            arr_12 [(signed char)14] [i_1] [i_1] [i_4] [(signed char)9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_3] [i_4 - 2]))));
                            var_21 = ((/* implicit */short) 18445618173802708992ULL);
                        }
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18159))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18163)))));
}
