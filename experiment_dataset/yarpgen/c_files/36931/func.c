/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36931
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 = (((+(((((/* implicit */unsigned long long int) var_1)) / (var_3))))) / (((/* implicit */unsigned long long int) var_7)));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (7531337204862364803LL) : (7531337204862364801LL)))) ? (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) (short)-11297)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3253294488229140147LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32397))) : (16719637122523312514ULL))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((long long int) var_10));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? ((-((+(1727106951186239080ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), ((_Bool)1)))))));
}
