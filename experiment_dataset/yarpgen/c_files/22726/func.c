/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22726
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)0] [i_0]))) + (max(((-(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-3)) & (((/* implicit */int) arr_3 [(short)2] [(short)2] [i_0]))))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [5ULL])) > (((/* implicit */int) (unsigned short)19150)))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */_Bool) (+(1887069417421170781LL)));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -7219693928501253805LL)) ? (((/* implicit */unsigned long long int) -7219693928501253805LL)) : (var_0)));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [3ULL] [i_3] [i_4] = ((/* implicit */short) (~(arr_11 [0ULL])));
                            }
                            arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 2339061238U)) || (((/* implicit */_Bool) -1887069417421170777LL))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (-((+(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
}
