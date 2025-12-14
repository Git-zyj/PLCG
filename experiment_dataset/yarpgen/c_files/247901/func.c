/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247901
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
    var_10 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) (((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))) < (((/* implicit */int) (_Bool)1))));
                var_12 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), (((unsigned long long int) arr_2 [(short)15] [i_1] [i_0]))));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [i_2 + 2] [i_2 + 1] [i_2 + 3]))))));
                    arr_7 [i_2] [i_1] [(unsigned short)16] = ((/* implicit */short) ((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) var_1))))) || (((/* implicit */_Bool) var_3))));
                    var_14 = ((/* implicit */_Bool) (short)32767);
                }
                var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))) <= (((/* implicit */int) arr_0 [i_0])))) ? ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))) : ((~(((/* implicit */int) arr_2 [i_0] [(unsigned short)7] [i_0]))))));
            }
        } 
    } 
}
