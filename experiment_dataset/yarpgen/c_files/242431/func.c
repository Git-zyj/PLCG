/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242431
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
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [7LL] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((12108410) - (((/* implicit */int) (unsigned char)228))))), ((+(arr_1 [i_0] [i_0])))))));
                var_19 |= ((/* implicit */unsigned char) ((arr_4 [i_0]) != (((/* implicit */unsigned long long int) min((4389870115314971202LL), (((/* implicit */long long int) 127018322)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            {
                var_20 *= ((/* implicit */_Bool) 9611366222646485174ULL);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) -523631288)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) arr_13 [i_2] [i_3] [i_4])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)118))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_22 = ((/* implicit */unsigned int) var_1);
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)228)) || (((/* implicit */_Bool) arr_15 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_3 - 1] [i_2])))) ? (arr_15 [(unsigned char)19] [i_3 - 1] [i_5 + 1] [i_3 - 1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)86))))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_13))))) % (max(((~(arr_15 [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1] [i_4]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [(_Bool)1])))))))));
                            var_25 = ((/* implicit */unsigned int) (unsigned char)88);
                        }
                    } 
                } 
            }
        } 
    } 
}
