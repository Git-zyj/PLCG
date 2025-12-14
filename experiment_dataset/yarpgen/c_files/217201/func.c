/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217201
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) -1);
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned int) ((var_0) ? (((/* implicit */unsigned long long int) 3)) : (arr_6 [i_0] [2ULL] [i_2])))))));
                            var_15 *= ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)170));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)2] [i_0])))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)1] [i_0])))) : (var_6))), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0] [6ULL])) || (((/* implicit */_Bool) arr_0 [i_0] [11U]))))))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_12 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) 72057593903710208LL)))))))) / (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0])), (var_9)))))));
                arr_13 [(short)10] [i_1] = ((unsigned int) ((((/* implicit */_Bool) (unsigned short)60446)) ? (((1391601132543012062ULL) << (((arr_12 [i_0] [i_1] [i_1] [i_0]) - (12722625102594833491ULL))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_8) : (2267496029634061000ULL)))));
            }
        } 
    } 
    var_18 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (short)-28207))))) ? (min((18194602141056241137ULL), (((/* implicit */unsigned long long int) 12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_0))))))))));
}
