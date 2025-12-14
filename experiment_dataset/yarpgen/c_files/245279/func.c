/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245279
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) * (var_16)))) : (max((((/* implicit */long long int) (signed char)99)), (var_9)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-102))))) : (max((min((var_5), (((/* implicit */long long int) 1661670991U)))), (((/* implicit */long long int) var_8))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-103)), ((unsigned char)14))))) == (arr_3 [i_1 - 2] [i_1] [i_0])))) + (((/* implicit */int) (signed char)102))));
                arr_4 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-104);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~(((long long int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_12 [0U] [i_4] [i_3] [i_2] = ((/* implicit */_Bool) max((max(((-(var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23541)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (unsigned char)138))))))), (((/* implicit */unsigned int) (signed char)-124))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (~(max((arr_6 [i_3] [i_6 - 1]), (arr_6 [i_2] [(signed char)7])))));
                                arr_18 [i_2] [i_2] [i_4] [i_5 - 1] [i_6 - 1] = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)6616)), (1692055938U)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) < (arr_15 [i_3] [1U] [i_3] [i_3] [i_3] [i_3] [i_3])))), (max((((/* implicit */unsigned long long int) -6306597816861519485LL)), (15052509475479763115ULL))))))))));
                    arr_19 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_2] [i_3] [i_3] [i_4] [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) % (((long long int) var_17)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 3; i_7 < 8; i_7 += 3) 
                    {
                        arr_23 [i_2] [i_3] [i_2] [i_3] [(unsigned char)6] [i_7 - 1] = ((/* implicit */unsigned char) (-((+((-(((/* implicit */int) (signed char)89))))))));
                        arr_24 [i_2] [i_3] [i_3] [i_7] = ((/* implicit */unsigned char) var_5);
                        arr_25 [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 2; i_8 < 10; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            {
                var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (4294967295U)))));
                var_25 ^= ((/* implicit */unsigned long long int) ((min((var_9), (((/* implicit */long long int) arr_1 [i_9])))) == ((~(var_9)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_10 = 2; i_10 < 10; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_8))));
                        arr_37 [i_8] [i_10] [i_11] = ((/* implicit */int) var_12);
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_1))));
                    }
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_28 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (signed char)101))) % (((/* implicit */int) var_10))));
                        arr_42 [i_12] [i_10] [i_10] [i_12] [i_9] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_10])) && (((/* implicit */_Bool) var_17))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_8 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8 - 2]))) : (arr_35 [i_8 - 1] [i_8] [(signed char)0] [i_10 - 1] [i_10 + 1] [i_8]))))));
                    }
                    var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_3) : ((-(4294967295U)))));
                }
            }
        } 
    } 
}
