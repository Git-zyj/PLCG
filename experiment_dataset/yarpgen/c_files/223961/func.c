/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223961
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)-48)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) ((((int) arr_7 [i_1 - 2] [i_1 + 1] [13] [(_Bool)1])) % (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [(unsigned short)13] [i_4] [i_3] [i_3] [i_3] [(unsigned short)13] = (((!(((/* implicit */_Bool) arr_2 [i_0] [12ULL])))) ? ((~(arr_13 [i_3] [i_3] [i_1 + 1]))) : (((((/* implicit */_Bool) 2958863131651095751ULL)) ? (((/* implicit */int) arr_7 [13U] [21LL] [i_1 + 1] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 + 1] [i_4] [(unsigned char)13] [18])))));
                                var_21 = ((/* implicit */long long int) var_18);
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */signed char) (~(((/* implicit */int) max((arr_11 [i_1] [i_1 - 2] [2ULL] [i_1 - 1]), (arr_11 [i_0] [i_1 + 3] [i_1] [i_1 + 3]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) 9203595236288508636ULL);
}
