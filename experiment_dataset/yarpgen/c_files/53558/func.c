/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53558
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_3))))) ? (16227148030198054050ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_4))) && ((!(((/* implicit */_Bool) var_3))))))))));
    var_12 = ((/* implicit */long long int) var_3);
    var_13 = ((/* implicit */_Bool) ((unsigned long long int) (-(15575619545260389117ULL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */_Bool) ((unsigned char) ((arr_0 [i_1] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_0])))));
                var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_8))) == (((((/* implicit */int) arr_1 [i_0])) | ((-(var_6)))))));
                var_16 = ((/* implicit */long long int) var_5);
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_0] [i_2 - 1] [13U] [i_0] [i_1]);
                                var_18 = ((/* implicit */unsigned int) arr_7 [0U] [i_2 - 1] [i_0]);
                                var_19 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((unsigned short) arr_3 [i_2 + 1]))) <= (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_9 [i_2 + 1] [7LL] [14U] [i_1] [(unsigned char)3] [i_4])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((signed char) (_Bool)0)))));
}
