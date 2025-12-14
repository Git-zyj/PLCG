/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233034
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
    var_19 = ((/* implicit */unsigned long long int) (~(var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */signed char) arr_3 [1ULL] [i_1 - 2] [i_0 - 4]);
                var_21 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) 134217727U)))));
                var_22 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4160749593U)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned char)51))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)1023))))) : (((unsigned long long int) arr_0 [i_0] [i_1 + 1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned short)64512)) && (((/* implicit */_Bool) (unsigned short)1023))))));
                            var_23 = ((/* implicit */unsigned char) ((signed char) 134217676U));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            {
                var_24 = ((/* implicit */short) ((4160749619U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 134217714U)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (_Bool)1))))));
                arr_17 [i_4] = ((short) min((((4036801670832528932LL) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))))), (((/* implicit */long long int) var_3))));
            }
        } 
    } 
}
