/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201174
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : ((((~(1609731638))) & (((/* implicit */int) (signed char)-25))))));
    var_20 = var_4;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3 - 3] [i_3] = ((/* implicit */short) min(((-(((/* implicit */int) arr_7 [i_2] [i_1] [(short)12] [i_2 + 1])))), (((/* implicit */int) arr_9 [i_1] [i_2 - 2] [i_2 - 2]))));
                        arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-19)))))))) : (((((/* implicit */_Bool) var_4)) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_2 - 2])))))));
                        var_21 = max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) arr_0 [i_3])) + (23426)))))) | (((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (var_17))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [(signed char)6] [i_3 + 1] [i_3 - 4] [i_3 - 3]))))));
                        arr_12 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_3 + 1] [i_1])) > (((/* implicit */int) arr_7 [i_1 - 3] [i_1] [i_3 + 1] [i_3]))))) / (((((/* implicit */int) arr_5 [i_1 + 1] [i_2 + 1] [i_3 - 3])) * (((/* implicit */int) arr_5 [i_1 + 3] [i_2 - 2] [i_3 - 3]))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */int) (unsigned short)65530)) << (((/* implicit */int) arr_1 [(short)9] [(short)9]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_4])) : (((/* implicit */int) var_3))))) > (((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) arr_16 [i_5] [i_4] [i_0])) : (arr_18 [i_0] [i_0] [i_4] [i_4])))))));
                    var_23 = ((/* implicit */unsigned char) (+(((arr_4 [i_5 - 2]) ? (((/* implicit */int) arr_4 [i_5 + 3])) : (((/* implicit */int) arr_4 [i_5 - 1]))))));
                    arr_19 [i_0] [(short)11] [i_4] = ((/* implicit */_Bool) (unsigned char)253);
                }
            } 
        } 
        arr_20 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_6 [i_0]))) % (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
}
