/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199537
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) (+(((((arr_0 [4] [i_0]) ? (arr_4 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((1586041717) <= (((/* implicit */int) (_Bool)0))))))))));
                arr_5 [i_1] [i_0] [i_0 + 1] = min((max((((/* implicit */int) (_Bool)1)), (-940168895))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2))))) : ((((_Bool)0) ? (((/* implicit */int) (short)28843)) : (((/* implicit */int) arr_3 [i_0 + 1] [8ULL])))))));
                var_12 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7)))))) : ((-(var_6))))));
                var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_9)))) % (((/* implicit */int) (signed char)119)))))));
                            arr_11 [i_0] [i_0] = ((int) var_2);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */int) (-(arr_7 [i_2 + 1] [i_2 + 1])));
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_2 [4] [i_0] [14LL])), (max((((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                                var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (var_2)));
                                var_18 = ((/* implicit */long long int) arr_4 [i_4]);
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) var_1)), (arr_8 [i_0] [i_1 + 2] [i_1 + 2] [(short)1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((signed char) (-(var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_8 [i_4] [i_2] [i_0 + 1] [i_0 + 1]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */int) var_10);
    var_21 ^= var_5;
}
