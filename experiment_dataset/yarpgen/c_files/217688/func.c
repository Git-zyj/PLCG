/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217688
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
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) var_1)), ((+(var_0)))));
    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) (unsigned short)43129)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 |= ((/* implicit */_Bool) (((_Bool)1) ? (3671012958U) : (3671012939U)));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) (unsigned short)43129)) : (var_7)))) | (var_10)));
                        arr_10 [i_1] = ((/* implicit */signed char) arr_1 [i_1 - 1]);
                        var_22 = ((/* implicit */int) arr_0 [i_0] [2LL]);
                    }
                    var_23 = ((/* implicit */int) arr_3 [(signed char)0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [(signed char)0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 3] [i_5])) ? (arr_11 [i_0] [i_5]) : (arr_11 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) / (max((var_6), (var_9)))))));
                                arr_18 [i_1] [i_4 - 3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15018073161719986912ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9541))) : (4294967285U)));
                                var_24 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                                var_25 = (((_Bool)1) ? (19) : (((/* implicit */int) (unsigned char)238)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) 1152921504606845952ULL))));
}
