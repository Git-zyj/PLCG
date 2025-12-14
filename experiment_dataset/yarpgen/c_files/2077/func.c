/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2077
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
    var_20 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)20)) ^ (((/* implicit */int) (unsigned char)106))))) : (((((/* implicit */_Bool) 255LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (1907048722U)))));
        arr_5 [i_0] [(unsigned short)17] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -243LL))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_15 [i_2] [i_1] [i_2 - 3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -258LL)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (short)13279)))) <= (((/* implicit */int) var_4))));
                        arr_16 [i_2] [2] [i_2] [i_2] [2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-32534))));
                        var_21 = ((/* implicit */long long int) arr_8 [i_1] [i_2 + 2] [i_3]);
                    }
                } 
            } 
        } 
        var_22 = 0U;
    }
}
