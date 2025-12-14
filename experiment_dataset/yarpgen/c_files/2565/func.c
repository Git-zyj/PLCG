/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2565
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) ((_Bool) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) max((var_2), (((((/* implicit */_Bool) (signed char)-12)) ? ((~(((/* implicit */int) (short)-32762)))) : (((/* implicit */int) var_6))))));
                            arr_10 [i_1] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) >= (3188461994777277322LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5136686192210840279LL)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))))) : (((unsigned int) var_9))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_13 = min((var_9), (((/* implicit */long long int) arr_3 [i_0 - 2] [i_0] [i_4])));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_8))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1]);
                    var_15 *= ((/* implicit */unsigned char) var_9);
                }
                var_16 = max((((18014398509477888ULL) ^ (((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_1] [i_0 + 1])))), (((((/* implicit */_Bool) (~(var_8)))) ? (min((18428729675200073707ULL), (((/* implicit */unsigned long long int) (short)-32762)))) : (((/* implicit */unsigned long long int) var_4)))));
            }
        } 
    } 
}
