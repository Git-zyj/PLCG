/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222251
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
    var_16 = min((min(((+(4471989041374837792LL))), (((/* implicit */long long int) ((unsigned short) -4471989041374837793LL))))), (((/* implicit */long long int) var_0)));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) -4471989041374837793LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) arr_0 [i_2 + 1]);
                            arr_12 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_2 - 1]) | (arr_0 [i_0])))) ? (((/* implicit */int) max((((_Bool) 52776558133248LL)), (var_4)))) : ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_2 - 1] [i_3]))))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_1]);
                var_19 ^= ((/* implicit */unsigned short) (~((-(arr_9 [(_Bool)1] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) 1697638110U);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((-4471989041374837793LL), (((arr_10 [(_Bool)1] [i_4 - 1] [i_4 - 1]) ? (-4471989041374837776LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [10U] [i_4 - 1] [i_4 - 1]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (((-(max((var_14), (4294967295U))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
