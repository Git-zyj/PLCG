/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228473
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((var_15) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (var_5)));
                        }
                    } 
                } 
            } 
            arr_11 [i_1] = ((/* implicit */long long int) var_17);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_10) : (var_1)));
            arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) (~(var_5))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (long long int i_6 = 1; i_6 < 8; i_6 += 2) 
            {
                {
                    arr_18 [i_0] [i_5] [i_6] = ((/* implicit */int) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (-(var_8)))) : (max((((/* implicit */long long int) var_11)), (var_14)))))));
                    arr_19 [i_0] [i_5] [i_0] [i_6] = ((/* implicit */unsigned int) var_14);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (var_5) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -679674373)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1823576321))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_5)))) : (var_1)))));
                    }
                }
            } 
        } 
        var_26 *= ((/* implicit */long long int) var_15);
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */_Bool) var_16)) ? ((~(var_5))) : (((((/* implicit */_Bool) var_17)) ? (var_7) : (var_5)))))));
        /* LoopSeq 2 */
        for (long long int i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_14) : (var_10)))) ? (((/* implicit */int) var_19)) : ((-(((/* implicit */int) var_15))))));
            var_29 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
        }
        for (long long int i_10 = 2; i_10 < 16; i_10 += 2) 
        {
            var_30 = ((/* implicit */int) var_8);
            arr_29 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((var_15) ? (((/* implicit */long long int) var_16)) : (var_2)))));
        }
        arr_30 [i_8] [i_8] = (~(((((/* implicit */_Bool) var_7)) ? (var_8) : (var_17))));
        arr_31 [i_8] = ((/* implicit */long long int) var_5);
    }
    var_31 = ((/* implicit */signed char) min((var_31), (var_19)));
    var_32 ^= var_13;
    var_33 = ((/* implicit */unsigned int) var_13);
}
