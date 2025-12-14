/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221600
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_10 += ((/* implicit */short) (~(836532469)));
        var_11 = ((/* implicit */unsigned short) ((-560011962) / (((/* implicit */int) (signed char)-19))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0 - 2]))));
        var_12 ^= (~(2133788661U));
        arr_5 [(unsigned char)6] [(unsigned char)6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (signed char)-17)) : (1395989577)));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            for (unsigned int i_3 = 4; i_3 < 10; i_3 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((2261704495U), (((/* implicit */unsigned int) (signed char)-17))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (short i_5 = 4; i_5 < 10; i_5 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_4] [i_2] = ((/* implicit */unsigned char) (+(3661036824U)));
                                var_14 = ((unsigned char) 8857484413895776744ULL);
                                arr_18 [i_1] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)184))));
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) (unsigned char)0);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) ^ (1142918930U))))));
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)8053))));
        arr_20 [i_1] [i_1] = 770490323;
    }
    var_17 ^= ((/* implicit */_Bool) var_9);
}
