/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206741
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned short)10] [(short)11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (min((((/* implicit */unsigned char) arr_5 [i_0] [i_0])), ((unsigned char)11))))))) - (var_4)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 - 1])) ? (((((/* implicit */int) arr_13 [i_0 - 1] [7ULL] [i_2] [i_3] [i_2] [(short)5])) / (((/* implicit */int) arr_8 [10U] [10U] [10U] [i_4])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [i_3] [i_1] [i_3] [(unsigned char)2] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_2])))))), (((((/* implicit */_Bool) 11582280262989240607ULL)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [(short)7] [i_0]))))) % (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) arr_4 [(short)8] [i_1] [i_1]))))))) ? ((+(((/* implicit */int) min((arr_11 [8ULL] [i_1] [i_2] [i_3]), (((/* implicit */unsigned short) var_1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_4] [i_2]))))))))))));
                                arr_14 [i_1] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_10 [i_3] [i_3] [i_0] [i_3] [i_0]), (((/* implicit */unsigned short) (short)11506))))), (((((/* implicit */int) arr_5 [i_4 - 4] [i_0 + 1])) % (((/* implicit */int) arr_0 [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0 + 1] [i_1] [i_2] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((arr_17 [i_0] [i_1] [i_2] [i_5] [i_6]), (arr_1 [i_2] [i_1]))), (min((((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 2])), (arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]))))))));
                                arr_20 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5] [i_2 + 1] [i_6])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0 - 2] [i_1] [i_1] [i_1 + 1] [i_2 + 1])) : (((((/* implicit */int) var_7)) + (((/* implicit */int) var_14)))))));
                                var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_6])) || (((/* implicit */_Bool) arr_17 [i_6] [i_5] [i_2] [i_1] [i_0]))))), (min((((/* implicit */short) (unsigned char)159)), (arr_4 [i_0] [i_1] [i_6]))))))));
                                arr_21 [i_0 - 1] [i_1] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)-15880)) & (((/* implicit */int) arr_11 [i_5] [i_1] [i_2] [i_5])))), (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_1] [i_2])), ((short)-17043))))))), (var_5)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            {
                var_19 |= ((/* implicit */short) ((var_11) & (min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_12)) ? (arr_22 [(unsigned short)2]) : (6864463810720311002ULL)))))));
                arr_28 [i_7] [i_8] = (((((_Bool)1) ? (18446744073709551586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) << (((((/* implicit */int) min((arr_0 [i_7]), (((/* implicit */short) arr_2 [i_7] [i_8]))))) + (21634))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_12);
    var_21 = ((/* implicit */signed char) var_12);
}
