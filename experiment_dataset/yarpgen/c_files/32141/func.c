/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32141
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
    var_11 = ((/* implicit */unsigned short) ((unsigned int) 14449772005987431289ULL));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_3] [i_2 - 2] [i_2 - 2] [i_0] [i_2 - 2] [7U] = ((/* implicit */unsigned short) 1587366407U);
                                var_12 = ((/* implicit */short) max(((-(1587366407U))), (((((/* implicit */_Bool) ((2707600888U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [(unsigned short)2] [(unsigned short)2] [i_3] [i_4])))))) ? (1587366407U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_0] [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))) : (var_9))))));
                                arr_13 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_3] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17972))) : (var_9))) <= (((/* implicit */unsigned int) max((((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1])), (((((/* implicit */_Bool) 2707600889U)) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) arr_3 [i_1] [i_3] [i_4])))))))));
                            }
                            arr_14 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 - 2])) || (((/* implicit */_Bool) arr_2 [i_2])))))) ? (9141860397178644984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_4)))))))));
                            var_14 = ((/* implicit */int) arr_1 [i_2] [i_3]);
                            var_15 = ((/* implicit */unsigned short) var_3);
                            var_16 = ((/* implicit */short) (~(9304883676530906629ULL)));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min(((unsigned short)26068), (var_6)))))) : (max((7940484335541863875LL), (((/* implicit */long long int) (short)-512)))));
                arr_16 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [(short)6] [i_0] [i_1] [(short)6] [i_0])) : (((/* implicit */int) arr_11 [(unsigned short)2] [i_1] [(signed char)2] [i_1] [(signed char)2] [i_0 - 1] [i_0])))), ((-(((/* implicit */int) (short)18758))))));
            }
        } 
    } 
}
