/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213481
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) % (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) ^ (0U)))))) && (var_0)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_10 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)61)) * (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 2]))));
                                var_11 -= ((((/* implicit */int) (_Bool)0)) * (((((/* implicit */int) (short)30566)) * (((/* implicit */int) arr_8 [i_1] [i_2] [i_4])))));
                            }
                        } 
                    } 
                    var_12 = ((unsigned int) arr_8 [i_1] [17] [i_1]);
                    var_13 = (~(((/* implicit */int) arr_11 [i_0] [(unsigned char)6] [(unsigned char)7])));
                }
            }
        } 
    } 
    var_14 = ((short) var_3);
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)0));
                arr_24 [i_5] [i_6] = (unsigned char)13;
                arr_25 [i_5] = ((/* implicit */short) (unsigned char)144);
            }
        } 
    } 
}
