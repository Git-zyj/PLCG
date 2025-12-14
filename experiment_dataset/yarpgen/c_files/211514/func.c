/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211514
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_13 = arr_6 [i_2 + 2] [i_1] [i_1];
                            var_14 &= ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3] [i_0]);
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */signed char) ((var_10) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
            arr_13 [i_0] = -538111352;
        }
        for (unsigned short i_5 = 3; i_5 < 20; i_5 += 4) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_5] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_5 + 2] [i_5 + 2] [i_0])) ? (arr_10 [i_0] [i_0] [i_5 - 2] [i_5]) : (arr_10 [i_0] [i_0] [i_5 - 1] [i_5 - 1]))) : (max((((/* implicit */unsigned long long int) (~(var_2)))), (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551601ULL)))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        var_17 ^= ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6147738060820794435ULL)) ? (((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_5 - 2]))) : (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_5 - 1] [i_5 - 1] [i_6] [i_0])) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (27ULL))))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)111)))) & (arr_9 [i_5] [i_6] [i_5] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_18 [i_6])) & (18446744073709551604ULL))))))) : (((/* implicit */int) ((_Bool) var_4)))));
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_0))));
        }
    }
    var_21 = ((/* implicit */signed char) (-(max(((-(18446744073709551601ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (var_6))))))));
    var_22 = ((/* implicit */int) var_0);
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (min((2457548726U), (((/* implicit */unsigned int) (unsigned char)88)))) : (max((var_5), (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned int) var_3))))))));
}
