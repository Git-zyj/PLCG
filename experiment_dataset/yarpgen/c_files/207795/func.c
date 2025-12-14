/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207795
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
    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) 4541161549797446244LL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (var_10))) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_19 = ((/* implicit */unsigned short) 2066435988U);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_20 = (((!(((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) var_2))))) : ((((!(((/* implicit */_Bool) 2181000235U)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
                            arr_10 [i_1] [i_2] [(unsigned short)7] [i_1] [i_1] [i_1] = ((/* implicit */int) (unsigned char)103);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) min((var_21), (var_12)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_1] [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((signed char) arr_8 [i_1])))));
                    var_22 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)104)) >= (((/* implicit */int) arr_6 [8U] [8U] [i_0])))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4 + 1])) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned char)85)))) : (((((/* implicit */_Bool) var_17)) ? (var_11) : (((/* implicit */int) var_0))))));
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-98)) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_0] [i_4 + 4] [i_0] [(signed char)2])) + (47))) - (5)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    var_24 = 663861172537545586LL;
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_24 [i_5] [i_6] [14LL] [i_7] [14LL] [i_5]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7])) ? (arr_22 [i_5] [i_5] [i_5] [(_Bool)1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) : (((var_5) + (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))))))));
                                var_26 -= (-(((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned char)110)) ? (0LL) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */int) var_17)) | (((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) arr_18 [i_5] [i_5])))) * (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        var_28 = ((/* implicit */unsigned char) min(((~(arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))), (((arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ^ (arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
        var_29 = ((/* implicit */signed char) ((min((arr_22 [i_5] [i_5] [i_5] [(unsigned char)11] [i_5]), (arr_22 [i_5] [i_5] [(signed char)14] [i_5] [i_5]))) / (min((arr_22 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_22 [i_5] [i_5] [i_5] [i_5] [i_5])))));
        /* LoopNest 2 */
        for (signed char i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                {
                    var_30 = var_9;
                    var_31 = max((arr_14 [(unsigned short)4]), (((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)69))) & (var_5)))));
                    var_32 += arr_21 [i_11] [i_10 + 1] [i_5] [i_11];
                }
            } 
        } 
    }
}
