/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191430
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
    var_14 = ((/* implicit */unsigned int) ((signed char) var_1));
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (2183440447U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)0))))))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (3559594544710516496LL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((unsigned int) var_4)) > (((/* implicit */unsigned int) ((var_10) ? (var_7) : (((/* implicit */int) var_11))))))))));
                            var_16 = ((/* implicit */_Bool) (+((+(arr_10 [i_3] [i_2 - 1] [i_1] [i_1] [i_0])))));
                            var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_0 [i_2 + 1])) * (((/* implicit */int) arr_0 [i_0]))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_6 [i_1])), ((+(((var_1) - (((/* implicit */unsigned int) var_8))))))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_19 &= ((/* implicit */signed char) ((unsigned int) max(((+(((/* implicit */int) (signed char)-116)))), ((+(((/* implicit */int) (signed char)57)))))));
                                var_20 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(arr_0 [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
