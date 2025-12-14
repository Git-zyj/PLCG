/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236436
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) (_Bool)1);
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (29)))), (9223372036854775807LL))) : (((/* implicit */long long int) (~((-(var_5))))))));
                var_12 -= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_6))))), ((+(((/* implicit */int) var_4))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_5] = min((((max((((/* implicit */unsigned long long int) var_2)), (18446744073709551600ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1]))))), (arr_14 [i_2] [14ULL] [i_2] [i_5 - 1]));
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_12 [i_2] [i_3] [(signed char)23])))) & (max((((/* implicit */unsigned int) arr_15 [i_3 + 2] [i_3 + 2] [i_3 - 1])), (min((arr_11 [i_2] [i_5]), (((/* implicit */unsigned int) var_7)))))))))));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((((((/* implicit */int) arr_15 [(_Bool)1] [i_3] [i_4])) + (((/* implicit */int) arr_14 [(_Bool)1] [i_3 + 2] [i_4] [i_5])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5 - 1] [i_4] [i_2]))))))), ((~((+(((/* implicit */int) var_6)))))))))));
                        }
                    } 
                } 
                var_15 = var_0;
                var_16 = ((/* implicit */_Bool) (unsigned char)243);
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_2))))), (((arr_15 [(_Bool)1] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_6))))))) <= (min((min((((/* implicit */unsigned long long int) (unsigned char)15)), (arr_12 [i_3] [i_3] [i_2]))), (((/* implicit */unsigned long long int) var_2))))));
            }
        } 
    } 
}
