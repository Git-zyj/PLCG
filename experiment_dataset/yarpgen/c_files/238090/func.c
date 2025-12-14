/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238090
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
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_3 [i_1 + 2])) / (((/* implicit */int) var_1)))), (1637843488)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2] &= ((/* implicit */int) -8266629967057818090LL);
                                var_12 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) 6361930577046085488LL)) * ((((_Bool)1) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((long long int) 6361930577046085488LL))))));
    var_14 = ((/* implicit */unsigned short) var_5);
}
