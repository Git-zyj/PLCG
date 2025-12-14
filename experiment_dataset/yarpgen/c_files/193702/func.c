/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193702
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_4] [i_3 - 4] [i_4] [i_2] [i_2] = ((((((/* implicit */int) min((((/* implicit */signed char) var_6)), ((signed char)-1)))) <= ((-(((/* implicit */int) (unsigned char)4)))))) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_0)));
                                arr_15 [i_0] [i_2] = ((/* implicit */short) (~(((((((/* implicit */int) (signed char)-4)) + (2147483647))) >> (0U)))));
                                arr_16 [i_0] [i_1 + 1] [(signed char)9] [i_0] [i_1 + 3] = min(((+(((/* implicit */int) arr_10 [i_1] [i_2] [i_4 - 4])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2]))))));
                                var_12 = ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_7 [i_3 + 1] [i_1 + 2])))), (((arr_9 [i_1 + 1] [i_1 - 1] [i_2] [i_3] [i_3 + 2] [i_4 - 3]) || (((/* implicit */_Bool) ((unsigned int) 2882998317U)))))));
                                var_13 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_4 + 1])))), (((/* implicit */int) ((unsigned short) arr_2 [i_3 + 2])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */int) (+(((unsigned int) ((int) arr_10 [i_0] [i_0] [i_0])))));
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-21669)) : (((/* implicit */int) (short)21656))))));
                    }
                    arr_21 [i_0] [13U] = ((/* implicit */short) ((((/* implicit */int) (signed char)4)) < ((~((+(255)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        for (unsigned int i_7 = 3; i_7 < 17; i_7 += 2) 
        {
            for (unsigned int i_8 = 1; i_8 < 16; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 4; i_9 < 14; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) arr_12 [(unsigned char)3] [i_7 - 1] [(unsigned char)3] [i_7 - 1] [i_7 - 1]);
                                arr_35 [i_10] [6] [i_10] [i_10] [6U] [4U] [i_7 - 1] |= ((/* implicit */short) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)51))));
                                var_17 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_9] [i_6] [i_7 - 1] [i_10])) ? (((/* implicit */unsigned long long int) (+(var_10)))) : (((unsigned long long int) var_4)))));
                                var_18 += ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_9 [i_6] [i_7 - 1] [i_8] [i_8 - 1] [i_7 - 1] [i_7])))) ^ (((/* implicit */int) arr_12 [11ULL] [i_7 - 3] [11ULL] [i_8 + 2] [i_8 - 1]))));
                    arr_36 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 1; i_11 < 20; i_11 += 4) 
    {
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            {
                                arr_51 [i_11] [i_11] [i_13] [i_13] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_11 - 1] [17U] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11 - 1] [i_11]))) / (8380416U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_11 - 1] [i_11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_11 - 1] [i_11] [i_11] [i_11 + 1] [i_11] [i_11 + 1])))))));
                                var_20 = ((/* implicit */unsigned short) ((int) -3371194365517703475LL));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) min((((min((var_7), (((/* implicit */unsigned long long int) 2047)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), (arr_18 [i_11] [i_11] [i_11] [i_12] [i_12]))))))), (((/* implicit */unsigned long long int) (~(arr_3 [i_11 - 1]))))));
            }
        } 
    } 
}
