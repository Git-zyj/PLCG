/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3013
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_12 += ((/* implicit */signed char) (-((~(17517508606135783419ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) != (16244929757205001195ULL)));
                    arr_14 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */int) (~(-493325039782093822LL)));
                    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                }
                arr_15 [i_0] = ((/* implicit */unsigned short) max((arr_2 [i_1] [i_0 - 1] [i_0 - 1]), ((-(arr_2 [i_0 - 1] [i_0 - 1] [(signed char)3])))));
            }
        } 
    } 
    var_14 = (~((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3931))) * (var_1))))));
}
