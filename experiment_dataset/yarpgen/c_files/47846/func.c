/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47846
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) max((arr_8 [i_0] [i_1] [i_1 + 1]), (arr_5 [i_0] [i_0] [i_1 - 1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [13LL] [13LL] [i_2])));
                    var_16 -= ((/* implicit */unsigned short) ((-5961929523737941664LL) / (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)127)))), (((((/* implicit */int) (signed char)125)) & (((/* implicit */int) (unsigned char)12)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) ((5961929523737941664LL) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1])))))) & (((((/* implicit */int) (unsigned short)1116)) & (((/* implicit */int) (short)-8954)))))));
                                arr_14 [(short)3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (+(var_8))))) ? (7397840115930137333ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2] [i_3])), (312976291))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_9);
}
