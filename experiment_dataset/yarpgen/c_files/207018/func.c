/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207018
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
    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
    var_13 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-17260))))) : (((/* implicit */int) (short)-17247))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(3560670284U)))) ? (((((/* implicit */_Bool) (short)17239)) ? (((/* implicit */unsigned long long int) 3732992823U)) : (594087856771166664ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)0)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_14 |= ((/* implicit */signed char) (((-((-(561974473U))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) * (((((/* implicit */int) arr_1 [(_Bool)1])) * (((/* implicit */int) (_Bool)1)))))))));
                                arr_12 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3732992814U))));
                                arr_13 [(signed char)5] [i_0] [i_1] [(_Bool)1] [(signed char)4] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned char)54)))) >= (((/* implicit */int) (signed char)-51))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [(_Bool)1] = ((/* implicit */long long int) 3732992806U);
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned char)8))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)9))))) : (((((/* implicit */_Bool) var_6)) ? (1764814725542159518LL) : (var_4))))))));
    /* LoopSeq 2 */
    for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
                        arr_27 [i_5] [i_7] [i_8] |= ((/* implicit */short) (((_Bool)1) ? (14415605426604060651ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_18 = ((/* implicit */_Bool) (~(1878877602U)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) arr_17 [i_9]);
                    var_20 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_10] [i_5 + 2] [i_5 + 2])) ? (arr_16 [i_5 - 1] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10)))))))));
                }
            } 
        } 
        arr_35 [(short)4] [(short)4] = ((/* implicit */signed char) (+(561974481U)));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_39 [i_11] = ((/* implicit */_Bool) (~(((((_Bool) (signed char)41)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11]))) : ((-(5109529303701261944LL)))))));
        var_21 = ((/* implicit */_Bool) (unsigned char)98);
    }
}
