/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25578
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2] [i_1]);
                            var_19 *= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (var_16)))), (((((/* implicit */_Bool) (short)-30759)) ? (arr_7 [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) != ((+(((((/* implicit */int) arr_8 [i_1] [i_1] [1ULL] [i_3])) & (((/* implicit */int) (_Bool)1))))))));
                            var_20 = ((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-105)) | (((/* implicit */int) arr_0 [i_3])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 7; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_4] [i_1] [i_0] |= ((/* implicit */signed char) (unsigned char)81);
                            /* LoopSeq 3 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_22 [i_0] [(signed char)0] [(signed char)0] [(signed char)0] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9002801208229888LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4]))) : (9007199254740991LL)))) ? (((/* implicit */int) arr_19 [i_5 - 2] [i_5] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5])) : ((~(((/* implicit */int) var_7))))))) ? ((~((-2147483647 - 1)))) : (((arr_0 [(signed char)9]) ? (((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_5] [i_5 + 3])) : (((/* implicit */int) var_18))))));
                                var_21 = ((/* implicit */unsigned short) arr_17 [i_1] [(short)6] [i_4] [i_5 + 2] [i_6] [i_5 + 2]);
                                var_22 = ((/* implicit */unsigned long long int) var_2);
                            }
                            for (int i_7 = 2; i_7 < 9; i_7 += 1) 
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_0] [(_Bool)1] [i_4] [i_5] [(_Bool)1] [i_7])) : (((/* implicit */int) arr_17 [i_1] [i_7] [3] [i_1] [3U] [i_1])))))))) != (((/* implicit */int) ((min((var_10), (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9002801208229889LL)) ? (9007199254740975LL) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))))))));
                                var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_5] [i_1] [i_1] [i_0]))));
                            }
                            for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                            {
                                arr_27 [i_1] [i_1] [(signed char)5] [i_5] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((var_13), (((/* implicit */unsigned long long int) (signed char)17)))) : (((unsigned long long int) arr_23 [i_0] [(short)8] [i_4] [i_1] [i_8]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((arr_26 [i_0] [i_0] [i_0] [i_5 - 2] [i_5] [i_5] [i_5 + 1]), (arr_26 [i_5 + 1] [i_5] [i_5 + 2] [i_5] [i_5 + 3] [i_5] [i_5 + 1]))))));
                                var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((arr_21 [i_5 - 1] [i_5 - 1]) + (arr_21 [i_5 + 1] [i_5]))))));
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [(signed char)2] [i_8])) : (((/* implicit */int) (signed char)(-127 - 1)))))), (9002801208229862LL)))) * (max((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_5] [i_5 + 3] [i_5] [i_5]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (unsigned int i_9 = 4; i_9 < 15; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            {
                var_28 ^= ((/* implicit */int) max((((/* implicit */long long int) ((arr_30 [i_10]) << (((arr_31 [i_10] [i_10] [i_9 - 1]) - (421496406U)))))), (min((((/* implicit */long long int) arr_30 [i_9 - 3])), (-9002801208229862LL)))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    for (unsigned char i_12 = 3; i_12 < 12; i_12 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_12] [i_10] [i_12] [i_12 + 3] [i_10])) ? (arr_34 [i_9 + 1]) : (((/* implicit */int) (signed char)(-127 - 1)))))), (arr_33 [i_11]))))))));
                            var_30 = ((/* implicit */_Bool) (signed char)(-127 - 1));
                            arr_42 [i_12] = ((/* implicit */unsigned int) (((_Bool)1) ? ((((-2147483647 - 1)) + (((/* implicit */int) (unsigned short)53226)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_37 [i_10]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
