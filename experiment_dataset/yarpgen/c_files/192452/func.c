/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192452
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((signed char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)200)) * (((/* implicit */int) (short)14745)))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) -958536596)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_6)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0))))) : (((/* implicit */unsigned long long int) min((-8585956875665456870LL), (var_11))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((-8585956875665456868LL) + (9223372036854775807LL))) >> (((-8585956875665456873LL) + (8585956875665456929LL)))));
                        var_23 ^= ((/* implicit */int) (+(arr_10 [i_3] [i_3] [i_3 + 1] [10U])));
                        arr_12 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_10 [i_3 - 1] [i_3 + 4] [i_3 - 2] [i_3 + 4])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    arr_20 [i_5] [i_4] [i_0] = ((/* implicit */unsigned int) ((int) -8585956875665456876LL));
                    var_24 = ((/* implicit */unsigned char) ((((arr_17 [i_0] [i_4] [i_5]) == (((/* implicit */unsigned long long int) arr_14 [17LL] [i_0])))) ? (((((/* implicit */_Bool) (signed char)58)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_1)));
        var_26 = ((/* implicit */signed char) var_17);
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        var_27 = ((/* implicit */short) 1501847230);
        var_28 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_16 [i_6]))));
        var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -8585956875665456869LL)) ? (var_0) : (((/* implicit */unsigned long long int) var_4))));
        arr_23 [5] = ((/* implicit */int) arr_15 [i_6]);
    }
    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        var_30 = ((/* implicit */signed char) arr_0 [i_7] [i_7]);
        var_31 = ((/* implicit */short) arr_18 [i_7] [i_7] [i_7] [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (int i_9 = 4; i_9 < 9; i_9 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) 268015359))));
                    var_33 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 8585956875665456891LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) : (6705208281446711547ULL)));
                }
            } 
        } 
    }
    var_34 -= ((/* implicit */unsigned int) var_19);
    var_35 = ((/* implicit */int) max((((/* implicit */short) var_12)), (var_17)));
}
