/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54317
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
    var_10 = ((/* implicit */_Bool) ((unsigned long long int) var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 5733959763888594257LL)) ? (5733959763888594257LL) : (5733959763888594257LL)));
                            var_12 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1 + 1] [i_1])))))));
                            arr_11 [i_1] [i_1 - 2] [i_2] [i_3] |= ((/* implicit */unsigned int) ((signed char) arr_4 [(signed char)9]));
                            var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((-5733959763888594257LL), (5733959763888594257LL)))))), (max((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) 5733959763888594256LL)), (144115188075839488ULL)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_22 [9LL] [i_6] [i_1] [i_4] [(_Bool)1] [1ULL] [i_6] = ((/* implicit */long long int) ((signed char) max((arr_7 [i_0] [i_4 - 1] [i_6 + 1] [i_5 - 1]), (((/* implicit */unsigned short) var_0)))));
                                var_14 = ((/* implicit */long long int) ((_Bool) ((((var_3) / (((/* implicit */unsigned int) var_8)))) * (var_1))));
                                var_15 = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-25130))));
}
