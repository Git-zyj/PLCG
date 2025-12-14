/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233721
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > ((+(((/* implicit */int) (unsigned char)255)))))))) : ((+(max((var_4), (((/* implicit */long long int) var_5))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_3 [i_2]))) ? (((((/* implicit */_Bool) arr_5 [i_2] [4] [i_0])) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) : (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))))) : ((+(((/* implicit */int) arr_7 [8LL] [8LL] [i_2] [i_2]))))));
                    var_15 &= ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */_Bool) (unsigned char)3);
                                var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_9 [i_4 - 1] [i_4 - 1] [(short)0] [i_4] [i_4] [i_4]))) ^ (((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [(unsigned short)3] [i_4] [i_4]))));
                            }
                        } 
                    } 
                    arr_14 [(short)6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((max((897273563623379965LL), (((/* implicit */long long int) (short)7820)))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
}
