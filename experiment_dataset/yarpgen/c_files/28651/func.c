/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28651
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) > (((((/* implicit */int) (unsigned char)226)) * (((/* implicit */int) arr_4 [(unsigned short)0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_18 [(_Bool)1] [i_1] [2LL] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)26)) << ((((~(2297825066U))) - (1997142212U)))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_9 [i_0] [(signed char)2] [10U] [(signed char)2]))));
                                var_18 = ((/* implicit */unsigned int) arr_4 [i_1]);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_16 [i_4] [i_3 - 1] [(_Bool)1] [i_2] [9LL] [i_0])) & (17899552314923294709ULL))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] = ((/* implicit */unsigned char) (signed char)3);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (long long int i_6 = 3; i_6 < 20; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) var_11);
                    arr_31 [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_26 [(signed char)3]);
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_10))));
                    arr_32 [i_6 + 1] |= ((/* implicit */unsigned char) ((var_1) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)3)) | (((/* implicit */int) arr_24 [i_6 - 2] [i_6 + 1] [i_6 + 1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_0);
}
