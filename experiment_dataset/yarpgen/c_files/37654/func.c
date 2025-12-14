/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37654
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) max((((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */signed char) (_Bool)1))))), (((((var_9) | (((/* implicit */int) (unsigned short)0)))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) == (arr_0 [(short)1])))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))))));
                            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2953070250180219897LL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-22)), (18446744073709551615ULL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 1741985189U)) <= ((-(-2991605123649083870LL))))))) : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])));
                            arr_18 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) arr_12 [7ULL] [i_1] [i_4]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) 2552982083U);
    var_13 = ((/* implicit */_Bool) 18446744073709551615ULL);
}
