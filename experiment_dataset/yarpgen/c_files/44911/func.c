/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44911
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_2 [i_0] [i_1] [i_0])))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) : (min((((arr_3 [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)88)))))));
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((arr_0 [i_1 + 3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */int) max(((short)2611), (((/* implicit */short) (signed char)65))))) | (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                arr_12 [i_2] [i_2] = ((/* implicit */short) ((int) ((((long long int) arr_9 [i_2])) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_2] [i_2])) && (arr_6 [i_2] [i_2]))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((unsigned short) arr_0 [i_2]));
                            arr_19 [i_2] [i_4] [i_4] [i_5] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) 1076455635);
                        }
                    } 
                } 
                var_20 = ((_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_2] [i_3])), (arr_9 [i_2])))), (arr_3 [i_2] [i_2])));
            }
        } 
    } 
}
