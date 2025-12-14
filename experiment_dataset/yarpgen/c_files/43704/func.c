/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43704
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((((/* implicit */int) (unsigned char)154)) - (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */_Bool) (-2147483647 - 1));
                    arr_9 [i_0] [(unsigned char)8] [(unsigned char)8] [4ULL] = (-(((/* implicit */int) (unsigned char)159)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned long long int) var_0);
                                arr_16 [i_3] [i_3] [5ULL] [6] [6] = (unsigned char)102;
                                arr_17 [4] [9ULL] [(unsigned char)3] [i_2 + 2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)155)) ? (min((((/* implicit */unsigned long long int) arr_8 [1U] [(unsigned char)11] [1U] [1U])), (arr_2 [i_4 - 1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))))), (((/* implicit */unsigned long long int) (~(1985646269U))))));
                            }
                        } 
                    } 
                    arr_18 [(_Bool)1] [11] [11] |= max((4252816122U), (((/* implicit */unsigned int) (unsigned char)3)));
                    var_18 ^= (~((~(((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
}
