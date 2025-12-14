/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246686
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
    var_12 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_2);
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (short i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) != (min((var_9), (((/* implicit */long long int) (_Bool)0))))))), (((var_6) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6))))))));
                            var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [i_2] [i_4]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (signed char i_6 = 1; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_19 [i_6] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_6])) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)218)) : (539074880))) : (((/* implicit */int) ((((/* implicit */int) (short)-6202)) > ((+(((/* implicit */int) (_Bool)1)))))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_0))));
                    }
                } 
            } 
        }
    }
}
