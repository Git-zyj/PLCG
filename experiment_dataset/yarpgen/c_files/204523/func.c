/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204523
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
    var_13 = ((/* implicit */unsigned char) ((int) var_6));
    var_14 = ((/* implicit */int) 11671243874578702543ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_3 [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [(_Bool)1] [i_2] = (unsigned short)16;
                            var_16 &= ((/* implicit */_Bool) (short)17559);
                            var_17 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) < (3096937853U))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            {
                var_18 = ((((min((((/* implicit */int) arr_16 [i_4])), (((((/* implicit */_Bool) (unsigned short)16811)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_5)))))) + (2147483647))) << ((((~(((/* implicit */int) var_5)))) - (9892))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((long long int) arr_2 [i_5])) - (((/* implicit */long long int) 3096937853U)))))));
                var_20 = ((/* implicit */unsigned short) 3096937858U);
            }
        } 
    } 
    var_21 -= ((/* implicit */short) ((((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_8)))) >> (((/* implicit */int) max(((short)-32757), (((/* implicit */short) var_0))))))) != (((/* implicit */int) var_12))));
}
