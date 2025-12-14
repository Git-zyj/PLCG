/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47583
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
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4]))))));
                                var_18 = ((/* implicit */unsigned char) ((((-360732843177510844LL) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))))) % (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [(signed char)0])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_0 [i_0] [i_2])))))))));
                                var_19 = ((/* implicit */_Bool) ((min((arr_3 [i_0]), (arr_3 [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [(signed char)13] [i_2] [i_1]);
                        arr_18 [i_0] [i_0] [(unsigned char)10] [i_0] = ((/* implicit */unsigned int) (-(arr_5 [i_1])));
                        arr_19 [i_0] [i_0] = ((unsigned long long int) max((-94256148), (-94256148)));
                    }
                    var_21 = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned int) ((arr_17 [i_0 + 2]) << (((arr_17 [i_0 + 3]) - (1732986897))))))));
                    arr_20 [i_0] [(signed char)6] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -94256148)))) ^ (max((min((((/* implicit */unsigned long long int) var_5)), (var_14))), (((/* implicit */unsigned long long int) arr_10 [i_2]))))));
                    var_22 = ((unsigned int) ((_Bool) ((unsigned char) 1104323648U)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (var_2)))))))));
}
