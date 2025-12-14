/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45336
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
    var_17 ^= ((/* implicit */unsigned short) (signed char)-96);
    var_18 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) min((arr_7 [i_0]), (((/* implicit */int) (_Bool)1)))))) != (((arr_8 [i_3] [i_2] [i_1] [i_0]) | (((var_13) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)17))))))));
                            var_19 |= ((/* implicit */unsigned long long int) var_6);
                            var_20 = ((/* implicit */long long int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_14))))), (min((((/* implicit */long long int) (short)25667)), ((-9223372036854775807LL - 1LL)))))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_1 - 2] [i_1] [i_1] [i_1 + 3]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (~(3354455431U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (short i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (signed char)96))));
                var_23 = ((/* implicit */unsigned short) arr_7 [i_4]);
            }
        } 
    } 
    var_24 ^= ((/* implicit */short) var_2);
}
