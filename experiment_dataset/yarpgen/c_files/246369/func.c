/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246369
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
    var_13 = ((/* implicit */int) var_5);
    var_14 = ((/* implicit */long long int) (signed char)46);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [(_Bool)1] = (short)(-32767 - 1);
                    arr_9 [i_1] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)24604)) : (-1323959543)))) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) (signed char)44))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((+((-2147483647 - 1)))))))));
                                var_15 = (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))));
                                var_16 |= ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (_Bool)1);
    var_18 = ((/* implicit */short) 0U);
}
