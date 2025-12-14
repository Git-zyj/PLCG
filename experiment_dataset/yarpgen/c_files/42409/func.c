/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42409
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                var_10 = var_3;
                arr_6 [i_1] = ((/* implicit */unsigned short) (~(var_1)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_2] [i_2])))) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (((((/* implicit */int) arr_10 [i_1])) >> (((/* implicit */int) arr_0 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 2] [6U] [i_1 - 2] [i_4] [i_4 + 3])) ? (-1276308917785545843LL) : (((long long int) var_6))))));
                                var_11 = ((/* implicit */int) var_2);
                                var_12 &= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_11 [i_2] [6] [6] [i_3])))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4066019003U))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((((/* implicit */long long int) var_7)) > (var_0))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_2] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 15; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) arr_19 [i_5] [i_5 + 2] [i_6] [i_7 - 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_5 + 2] [i_5])) != (-1771796875)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [i_7 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6] [i_7 - 1])) || (arr_21 [i_9] [i_7] [i_9] [i_5 + 2] [i_7] [i_5 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2941449618002589733LL)))))));
                                var_15 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 4066019006U)) ? (((/* implicit */int) (signed char)-8)) : (arr_23 [i_5] [i_6] [i_5] [i_8]))) : (((/* implicit */int) (short)-28))))), (((arr_21 [i_5] [i_5 + 2] [i_7] [i_7 - 1] [i_6] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5 - 1] [i_7] [i_7 - 1] [i_6] [i_9]))) : (228948290U)))));
                                var_16 = ((/* implicit */signed char) min((var_16), (min((max((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)13875))))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)9))))), (((/* implicit */signed char) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_24 [i_5 + 1] [i_6] [i_5] [i_5] [i_5 + 2])))))))));
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4125285108399784601LL)) ? (((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_4)) : (arr_19 [i_5] [i_7] [i_8] [i_9]))) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_24 [i_5] [i_7] [i_6] [i_7] [i_7])) : ((~((-(arr_19 [i_6] [i_7] [i_7] [i_9]))))));
                                arr_25 [i_7] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [(unsigned short)7] [i_7 - 1] [i_6] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_20 [i_7] [i_7]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_9])))))))))) : (((arr_16 [i_5 - 1] [i_7 - 1]) >> (((arr_16 [i_5 - 1] [i_7 - 1]) - (2415183886U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    for (short i_13 = 3; i_13 < 14; i_13 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) 1137234613U);
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1669312565)) ? (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_9)))))) : (((long long int) arr_17 [i_10] [i_13 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (unsigned char)178);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_15] [i_15])) ? (arr_31 [i_15] [i_14] [i_11] [i_10]) : (-140935155))))) <= (((/* implicit */int) min(((!(((/* implicit */_Bool) -1771796875)))), ((!(((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_15] [i_15] [i_15])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
