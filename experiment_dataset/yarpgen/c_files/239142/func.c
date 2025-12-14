/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239142
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned char) (+(((unsigned int) ((unsigned char) var_9)))));
                                var_13 = ((/* implicit */unsigned long long int) var_0);
                                arr_13 [i_0] [i_0] [i_3] [8U] &= ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) (signed char)-113))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_6)))))) : (max((var_3), (arr_12 [13U] [12U] [12U] [13U] [i_1] [i_1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50294))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) (signed char)-108);
                        var_16 -= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-72)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))))));
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_0] [i_5] &= ((/* implicit */unsigned char) ((int) (signed char)103));
                            var_17 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) arr_1 [(unsigned char)17])), (3714803441U)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_18 = ((max((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < (var_4)))))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)65532))))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)54)) ? (var_4) : (((/* implicit */int) arr_9 [i_0] [(signed char)7] [i_5 - 1] [(signed char)7]))))) ? ((-(((((/* implicit */_Bool) 3242209011U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2070))))))) : (((((/* implicit */_Bool) (signed char)126)) ? (580163855U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14846)))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_25 [i_1] [i_1] [i_2 + 1] [i_5] [i_5] [i_2 + 1] = ((/* implicit */signed char) (unsigned short)15062);
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((var_7) ^ (580163884U))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((arr_4 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44289))))))))));
                            arr_29 [i_0] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) 3134770009U)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213)))))));
                        }
                    }
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_0 [(unsigned char)9]))))) * (var_3)))));
                        var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 179611627U)), (max((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26135))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -856530460)), (4294967294U))))))));
                        var_23 += ((/* implicit */unsigned char) ((signed char) arr_24 [i_0] [i_0] [i_0] [i_10] [i_10] [i_2] [i_2]));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        arr_36 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 644207028U)), (13004432994756855453ULL)))))))) + (((unsigned long long int) (unsigned char)28))));
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned int) ((856530463) | (((/* implicit */int) (unsigned short)26135))))) : (2179568198U))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_2])) >> (((((/* implicit */int) (unsigned short)14040)) - (14026))))))));
                    }
                    var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [10U]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        for (unsigned int i_13 = 2; i_13 < 20; i_13 += 3) 
        {
            for (signed char i_14 = 2; i_14 < 22; i_14 += 2) 
            {
                {
                    arr_45 [11U] [(signed char)6] [(signed char)6] = ((/* implicit */unsigned char) 46520565U);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -627131038)) ? (856530459) : (((/* implicit */int) (signed char)86))))) < (arr_42 [i_12] [i_12] [(unsigned short)6] [(unsigned short)6])));
                }
            } 
        } 
    } 
}
