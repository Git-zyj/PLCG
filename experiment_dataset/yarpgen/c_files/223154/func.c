/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223154
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
    var_15 = ((/* implicit */unsigned char) ((min((((2U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (var_4))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1039689872427151404ULL))))));
    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (min((4294967288U), (((/* implicit */unsigned int) var_12))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_6 [2ULL] [i_1 + 3] |= ((/* implicit */_Bool) var_4);
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [3ULL] [i_1 - 1] [i_2 - 3] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) arr_9 [i_0 + 1] [i_1] [i_2] [i_3 - 1])));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                arr_15 [i_1] [4] [i_3] &= ((((/* implicit */_Bool) 881590808U)) ? (((/* implicit */int) (unsigned short)6511)) : (-5708493));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_1] [5ULL] [i_3 - 1] [i_4] [(unsigned char)1])) - (17407054201282400212ULL)));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((var_4) >> (((17407054201282400221ULL) - (17407054201282400208ULL))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [3ULL]))))))));
                            }
                            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (~(((18U) >> (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_5 [4U] [i_1] [(short)1]))))))))))));
                                var_20 = ((/* implicit */int) (signed char)75);
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((9U) % (1251588320U))))));
                                var_22 = ((/* implicit */unsigned char) var_10);
                            }
                            var_23 = ((/* implicit */signed char) arr_17 [i_0] [i_1] [i_2] [(signed char)6] [i_2] [i_2]);
                        }
                    } 
                } 
                arr_19 [i_1 - 1] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_22 [i_6] [i_1] [i_6] = ((/* implicit */unsigned char) 1251588320U);
                    var_24 *= ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (unsigned char)245)))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_8);
}
