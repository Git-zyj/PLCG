/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193291
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 |= ((/* implicit */unsigned char) max((arr_0 [i_1]), (arr_2 [i_0] [i_0] [i_1])));
                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)66))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) -1039998490)), (max((1582865228524605145LL), (((/* implicit */long long int) arr_13 [i_2] [i_3] [i_2] [i_3]))))))));
                            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(6800910409958933984LL))))));
                            var_16 = ((/* implicit */unsigned int) arr_10 [i_2]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4232483725U)) ? (535033309) : (arr_6 [i_3])))) == (arr_4 [i_3])));
            }
        } 
    } 
}
