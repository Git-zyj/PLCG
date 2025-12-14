/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42492
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) -6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27199)));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((signed char) (signed char)-78);
                    arr_8 [i_2] [i_1] [i_2] = arr_0 [i_2];
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) max((var_11), (var_8)));
                                arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) ((unsigned int) -8167799012811336835LL));
    }
    var_13 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) (signed char)56)))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) (_Bool)0);
                var_15 = ((/* implicit */signed char) ((unsigned char) (unsigned char)76));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) 1816689687);
                var_17 = ((/* implicit */signed char) max((((/* implicit */int) ((short) arr_22 [i_7]))), ((((_Bool)1) ? (-691956447) : (1816689672)))));
            }
        } 
    } 
}
