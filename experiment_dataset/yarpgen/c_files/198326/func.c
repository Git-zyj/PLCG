/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198326
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) (_Bool)1);
                                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_2] [i_4 + 2] [i_4] [i_2])), (var_6))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 15454548419310713400ULL)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) -4277956330747977162LL)) ? ((+(((/* implicit */int) arr_11 [i_0] [i_1])))) : ((-(((/* implicit */int) arr_11 [i_1] [i_1]))))));
                                var_13 -= ((/* implicit */unsigned long long int) (-(var_7)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) min(((+(arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))), (max((((unsigned long long int) 32767U)), (((/* implicit */unsigned long long int) min((4294934526U), (((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_1] [i_0] [i_2])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_23 [i_9])), (arr_28 [i_7] [i_8] [i_9])))) ? (((/* implicit */unsigned long long int) arr_24 [i_7])) : (min((((/* implicit */unsigned long long int) ((long long int) -5840388892575279153LL))), (2992195654398838221ULL)))));
                    arr_30 [i_7] [i_7] = ((/* implicit */long long int) (-((~(((/* implicit */int) ((127ULL) > (((/* implicit */unsigned long long int) arr_24 [i_7])))))))));
                }
            } 
        } 
    } 
}
