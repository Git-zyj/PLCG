/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39207
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
    var_11 = ((/* implicit */int) var_7);
    var_12 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_2 + 2] [i_2] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_0])))) - (((7868402855007802246LL) + (-7868402855007802246LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_2 - 3] [i_3 - 1])), (7868402855007802246LL)))))));
                                arr_17 [i_0 + 1] [i_1] [i_2 + 1] [i_3] [i_2 + 1] = ((/* implicit */int) (((-(((/* implicit */int) (short)-4964)))) < (((/* implicit */int) ((unsigned char) ((unsigned int) arr_1 [i_1]))))));
                                arr_18 [i_0] [i_1] = ((/* implicit */short) max((13ULL), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) 7868402855007802246LL))))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] = ((/* implicit */short) 7868402855007802246LL);
                    arr_20 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_3 [i_1]))) ? (((/* implicit */unsigned long long int) ((((-7868402855007802258LL) + (9223372036854775807LL))) << (((((-1073741824) + (1073741862))) - (37)))))) : (min((18446744073709551603ULL), (((/* implicit */unsigned long long int) arr_15 [i_2 - 2] [i_0 + 1] [7]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7868402855007802247LL))));
}
