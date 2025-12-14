/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228788
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2)))))));
    var_13 = ((/* implicit */unsigned short) var_4);
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (var_10)));
    var_15 ^= (+((+(((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [1LL] [i_1]))))) : ((+(arr_3 [i_1])))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((var_16), (arr_1 [i_0])));
                            var_17 = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0]))))) | (max((var_3), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_2])))))) >> (((((1781814711695075259ULL) << (((max((1766510379), (-1766510375))) - (1766510333))))) - (11092014038492643273ULL))));
                            var_18 = ((/* implicit */unsigned char) arr_11 [i_2] [i_1] [i_3 + 2] [i_2]);
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_10 [i_0] [i_0] [i_3]))));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_2 [i_0]) * (var_10))) | (((/* implicit */unsigned int) ((arr_8 [i_1] [i_1] [i_1]) & (((/* implicit */int) var_0))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_1] = arr_14 [i_0] [i_1] [i_4];
                            var_20 = ((/* implicit */long long int) ((max((arr_2 [i_0]), (arr_2 [i_5]))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5]))))))));
                        }
                    } 
                } 
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1766510376)) != (arr_4 [i_0] [i_1])));
            }
        } 
    } 
}
