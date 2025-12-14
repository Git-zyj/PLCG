/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4188
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) 3673973526U);
                                var_12 -= ((/* implicit */short) (+(min((((((/* implicit */_Bool) 19U)) ? (((/* implicit */int) var_4)) : (var_1))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 3] [i_0 + 4]))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) max(((+(((/* implicit */int) var_7)))), (min((var_1), (((/* implicit */int) arr_2 [i_2 - 2] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_24 [i_5] [i_5] [i_7] [i_5] = min((-451392585), (451392584));
                    var_14 = ((/* implicit */_Bool) (short)-16384);
                    var_15 -= min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) -129214799)) ? (2363549729685173119ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32640))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_16 ^= (~(612108542));
                                var_17 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) (unsigned short)5)) ? (arr_20 [i_5]) : (((/* implicit */int) (short)480)))) | (((/* implicit */int) arr_26 [i_8] [i_5] [i_6 + 1]))))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 234881024U)) ? (((/* implicit */int) (short)16383)) : (-612108543)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
