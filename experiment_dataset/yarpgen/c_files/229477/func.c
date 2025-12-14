/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229477
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
    var_17 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) arr_0 [i_1] [22]);
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (-(arr_9 [i_1 + 1] [i_3 - 1]))));
                        var_19 = ((/* implicit */_Bool) arr_8 [(unsigned short)15] [i_1] [i_2] [i_3]);
                        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_1 + 3])) : (((/* implicit */int) arr_1 [i_1 + 2])))) % ((~(((/* implicit */int) arr_1 [i_1 + 2]))))));
                        var_21 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (1544757313U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = arr_10 [i_2] [(_Bool)1] [i_2 - 1] [i_2];
                    }
                    arr_14 [i_0] [(_Bool)1] [14LL] = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) (~(min((var_4), (((/* implicit */unsigned int) var_16))))))), (var_9)));
}
