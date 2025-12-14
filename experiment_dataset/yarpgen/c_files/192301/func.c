/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192301
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
    var_12 ^= ((/* implicit */long long int) var_7);
    var_13 |= (-(((/* implicit */int) var_9)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) -6497739768897940783LL)))))));
                                arr_12 [i_2] [i_2] [i_2] [i_3] [8] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_1])))) || (((/* implicit */_Bool) var_4))))), ((+(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2]))))));
                                var_15 = ((/* implicit */signed char) arr_5 [i_0] [(unsigned char)11] [10LL] [(unsigned short)11]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [i_1] |= ((/* implicit */unsigned char) min((((/* implicit */int) arr_2 [i_0] [i_2])), ((+(-264943023)))));
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-36))))), ((+(((/* implicit */int) arr_5 [i_0 - 1] [i_0] [2LL] [i_0]))))));
                    var_17 = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
}
