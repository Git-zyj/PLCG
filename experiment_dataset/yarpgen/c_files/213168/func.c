/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213168
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
    var_20 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned long long int) ((signed char) var_12)))));
    var_21 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) -1LL);
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -7773139340882814400LL)) ? ((+(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) (unsigned short)49322))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */long long int) ((unsigned short) (~(26ULL))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                arr_12 [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((arr_7 [i_3] [i_1]) > (((/* implicit */unsigned long long int) arr_5 [i_1] [i_2] [i_3])))) ? ((+(((/* implicit */int) (unsigned char)250)))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_1 [i_3] [i_1]) : (((/* implicit */int) var_19))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 1])) && (((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_1]))));
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) arr_9 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 2]);
                        var_25 = ((/* implicit */unsigned short) var_17);
                        arr_20 [i_1] [i_1] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */short) (unsigned char)250);
                    }
                } 
            } 
        } 
    }
}
