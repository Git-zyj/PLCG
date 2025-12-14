/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4625
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
    var_16 &= ((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) ((_Bool) var_3)))))) : (min((((((/* implicit */_Bool) 1065353216)) ? (var_4) : (((/* implicit */unsigned int) -1065353217)))), (min((((/* implicit */unsigned int) var_2)), (var_6)))))));
    var_17 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] &= ((/* implicit */unsigned char) (~(((int) arr_2 [i_0]))));
                    arr_8 [i_0] [i_1] [i_1] [5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) var_1)) != (24263171)))), (arr_0 [i_2])))) ? (var_8) : (((arr_6 [i_0] [i_2] [i_1]) >> (((/* implicit */int) arr_5 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = min((min((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_13 [i_1])));
                                arr_15 [i_1] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) (unsigned char)98))));
                                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((_Bool) 1065353217))) : (((/* implicit */int) (unsigned char)245)))) & (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)50)), (3096173546U)))))))));
                                var_20 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (var_7)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 ^= ((/* implicit */signed char) (-(((int) 14754518147489801245ULL))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 ^= (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_17 [i_0] [i_0] [i_0]) : (arr_17 [i_0] [i_5] [i_0]))));
            var_24 += ((/* implicit */_Bool) ((0U) * (((/* implicit */unsigned int) arr_11 [i_0]))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((+(arr_11 [i_0]))) : ((+(arr_12 [i_0] [i_5] [i_0] [i_5]))))))));
        }
        arr_18 [i_0] [4U] = ((/* implicit */unsigned long long int) (((((+(arr_11 [i_0]))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (signed char)1)) > (134217472))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                {
                    var_26 = ((/* implicit */_Bool) var_5);
                    arr_23 [i_0] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [(_Bool)1] [(_Bool)1] [i_6])) ? (arr_22 [(unsigned char)15] [i_6] [11U] [15]) : (((/* implicit */int) var_2))))) ? ((~(var_11))) : (arr_22 [i_0] [14ULL] [i_7] [i_6])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7 - 1] [i_7] [11U]))) & (min((var_13), (((/* implicit */unsigned int) arr_5 [i_7]))))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_26 [4U] &= ((/* implicit */int) arr_25 [(unsigned char)10]);
        var_27 = ((_Bool) ((((/* implicit */_Bool) (+(var_15)))) ? ((+(((/* implicit */int) arr_24 [i_8] [i_8 + 1])))) : (((/* implicit */int) arr_24 [i_8] [4]))));
        arr_27 [i_8] = ((((_Bool) arr_24 [i_8] [i_8 + 1])) ? (((/* implicit */int) arr_24 [i_8] [i_8])) : ((+(1565834382))));
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((((/* implicit */unsigned int) ((arr_25 [16]) <= (arr_25 [18])))), (min((arr_25 [(_Bool)0]), (arr_25 [14]))))))));
        arr_28 [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) % (4294967295U)));
    }
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 69598275U)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(var_2)))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 1065353223)) : (var_4)))))))));
}
