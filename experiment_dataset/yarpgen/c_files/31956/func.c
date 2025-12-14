/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31956
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
    var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (var_13)))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_1))))))) | (var_9));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) arr_2 [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [10U] [i_0] [i_4] = ((/* implicit */unsigned long long int) max((6880498621286665441LL), (((/* implicit */long long int) (_Bool)0))));
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32766)) ? (arr_7 [i_0 + 1]) : (arr_9 [i_2] [i_4 - 1] [i_2] [i_2])))) || (((/* implicit */_Bool) (+(var_5)))))) ? (((/* implicit */long long int) ((6) ^ (((/* implicit */int) arr_13 [0LL] [i_4 + 1] [i_4] [i_4 + 1] [i_4]))))) : (max((arr_9 [i_0] [i_1 - 2] [i_2] [i_3]), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_2 [i_0])), (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]))))))));
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_2] [i_4 - 1] = ((/* implicit */unsigned short) (-((((-(((/* implicit */int) var_2)))) | (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [i_4] [(unsigned short)6] [i_4] [11ULL] [i_4]))))));
                                arr_16 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (-883141508)));
                            }
                        } 
                    } 
                } 
                var_21 = min((((unsigned long long int) ((var_6) <= (arr_10 [i_0 + 1] [i_0] [i_0] [i_1 - 1])))), (((/* implicit */unsigned long long int) (-(arr_7 [i_1 - 2])))));
            }
        } 
    } 
}
