/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33841
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
    var_11 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)124))))));
                var_12 = max((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [(signed char)7] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) 0ULL);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned char) ((2117466960893041182LL) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_1])))))));
                                arr_12 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] [i_3] |= ((/* implicit */int) (signed char)0);
                            }
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) | ((~(-6785512942083145471LL)))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) ^ (6ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1]))) + (3584406287740983738ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-26)) <= (((/* implicit */int) var_6))))) <= (((/* implicit */int) ((((/* implicit */long long int) var_10)) >= (var_3))))));
}
