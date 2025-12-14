/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197277
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
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) ? (var_11) : (var_14)));
    var_16 = ((/* implicit */unsigned char) var_8);
    var_17 = ((/* implicit */unsigned int) var_7);
    var_18 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_1] [i_0])) || ((!(((/* implicit */_Bool) var_6)))))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_2] [i_1] [i_0])) ? (arr_1 [i_0]) : (3343736122U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))))))) ? (arr_8 [i_3] [i_2] [i_1 + 1] [i_0]) : (((((/* implicit */int) var_1)) >> (((arr_2 [i_0] [i_0]) + (4253921853087183139LL)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_8))))) ? ((+(arr_7 [i_0]))) : (max((arr_2 [(short)8] [i_0]), (((/* implicit */long long int) var_8))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_16 [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_4] [i_5]);
                    arr_17 [i_4] [i_4] [i_0] [i_4] = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_4]);
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_21 = ((/* implicit */long long int) arr_18 [i_6]);
        var_22 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6])) ? (951231173U) : (arr_18 [i_6])))), (max((((/* implicit */long long int) var_7)), (arr_19 [i_6]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (951231186U))))));
        var_23 = ((/* implicit */int) var_10);
        var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) | (arr_18 [i_6])))) & (var_5)))));
    }
}
