/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239318
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
    var_20 = ((/* implicit */short) (unsigned char)111);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_21 = (-((-(((/* implicit */int) (short)14249)))));
                    var_22 = (!(((/* implicit */_Bool) 3129141156814861003ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned short) 1676419211U);
                            var_24 = ((/* implicit */short) (signed char)63);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) -9223372036854775803LL);
            }
        } 
    } 
}
