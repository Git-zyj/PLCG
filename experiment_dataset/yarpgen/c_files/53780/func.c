/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53780
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? ((+(arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))));
                                arr_12 [i_0 + 1] [i_1] [i_0 + 1] [i_3 - 2] [i_4] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)9524))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)63))))) | (8323349589429367668LL)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    }
    var_16 = ((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))))) : (((/* implicit */int) var_0)));
}
