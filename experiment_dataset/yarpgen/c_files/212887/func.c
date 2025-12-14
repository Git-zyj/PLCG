/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212887
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(signed char)3] [i_3] = ((/* implicit */unsigned short) ((max((4704718197656598304LL), (((/* implicit */long long int) var_4)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_3] [i_3] [i_1])) : (((/* implicit */int) (unsigned char)255)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) var_3));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_4] [i_4] [i_5])) >= (((/* implicit */int) var_1))))), (var_5)))));
                            var_11 = ((/* implicit */short) max((-4052433189153490687LL), (((/* implicit */long long int) (unsigned char)0))));
                            arr_18 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */_Bool) (+(max((arr_5 [i_0] [i_0] [i_4]), (((/* implicit */long long int) arr_9 [i_0]))))));
                            var_12 = ((/* implicit */unsigned int) var_1);
                            var_13 = (-(1885665125165585119LL));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = 362408938U;
    var_15 = ((/* implicit */unsigned int) var_0);
}
