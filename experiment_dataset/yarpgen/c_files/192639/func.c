/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192639
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
    var_10 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) arr_5 [i_0 - 2] [i_1] [i_1]))));
                var_12 &= ((/* implicit */long long int) arr_1 [i_0 - 2] [i_0 - 1]);
                arr_6 [i_1] [i_0] [i_0 - 2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2] [i_0 - 1]))) / (arr_4 [i_0 + 1] [i_0 + 1] [i_0])));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_1] [4ULL])) ? (arr_7 [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0])))))))))) ? (arr_4 [8LL] [(_Bool)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (var_9) : (((/* implicit */long long int) arr_11 [i_0 + 1] [i_1] [i_4]))))) ? (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) arr_9 [i_2 - 1])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
