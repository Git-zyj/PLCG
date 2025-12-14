/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236093
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
    var_20 = ((/* implicit */unsigned char) var_10);
    var_21 -= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned int) var_16)))));
                    arr_8 [6ULL] = ((/* implicit */unsigned int) ((1047552ULL) + (((/* implicit */unsigned long long int) 3764686996U))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), ((+(var_5)))));
        var_24 = ((/* implicit */int) var_15);
        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)(-32767 - 1)))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)1023)) & (((/* implicit */int) var_10)))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((var_11) % (((/* implicit */int) var_4)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_9))))));
    }
    for (unsigned char i_4 = 3; i_4 < 10; i_4 += 3) 
    {
        arr_17 [0U] [0U] = ((/* implicit */short) ((signed char) (_Bool)1));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_9))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (short i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                {
                    arr_24 [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((_Bool) 7529010016545898220ULL)) || (((/* implicit */_Bool) ((2424368883U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))))))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)53170))))) & (((/* implicit */int) ((_Bool) var_10))))))));
                }
            } 
        } 
        arr_25 [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)58659)) > (2147483647)))), (((((/* implicit */_Bool) 4294967295U)) ? (2424368883U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_26 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((int) var_13))) ? (((int) (_Bool)1)) : (((/* implicit */int) var_6)))) & (((/* implicit */int) ((unsigned char) var_14)))));
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        arr_30 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 7545081070514147017LL)) || (((/* implicit */_Bool) -1052324655)))))))) * (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                {
                    arr_36 [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) (((~(var_13))) < (min((var_11), (((/* implicit */int) var_9))))));
                    var_28 -= ((/* implicit */unsigned char) ((_Bool) var_7));
                }
            } 
        } 
    }
}
