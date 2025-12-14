/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230862
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
    var_12 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((signed char) var_1))) != (((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)96)) - (((/* implicit */int) arr_0 [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) : (17971839956412766602ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned char) max(((signed char)96), (((/* implicit */signed char) arr_4 [i_0] [i_2 - 1]))))), (((unsigned char) ((unsigned long long int) var_1)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 6; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((int) (((!(((/* implicit */_Bool) (signed char)-99)))) ? (min((var_9), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) var_3)) : (arr_2 [(unsigned char)1] [i_3])))))));
                                arr_22 [i_4] [i_4] = ((/* implicit */signed char) arr_4 [i_4] [i_4]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        arr_25 [i_4] [i_4] = ((/* implicit */signed char) (~(arr_23 [i_5 - 1])));
                        arr_26 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) arr_18 [i_4] [i_8 - 1] [i_5 - 1] [i_5 - 1] [i_4])) : (((/* implicit */int) arr_6 [i_8 - 1] [i_4] [i_4] [i_4]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            arr_30 [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) (signed char)-118);
                            arr_31 [i_8] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))))) ? (((((/* implicit */_Bool) -738400034)) ? (((/* implicit */int) (short)-758)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_19 [i_3] [i_8 + 2] [i_9 + 1] [i_8 + 2] [i_5 - 1]))));
                            var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8 + 2] [i_3] [i_5 - 1] [i_3])) ? (arr_15 [i_9] [8ULL] [8ULL] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))));
                        }
                        for (signed char i_10 = 1; i_10 < 7; i_10 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) (short)757)) - (729)))))))));
                            var_16 -= ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_3] [i_4] [i_5] [i_8] [(signed char)0] [i_5] [i_10 + 3])) != ((+(((/* implicit */int) (signed char)-89))))));
                        }
                        var_17 &= ((/* implicit */unsigned char) ((arr_28 [i_8] [i_8 + 1] [i_5 - 1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned short)62358)))))));
                        arr_36 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8] [i_4] [i_8 + 1])) ? (var_11) : (arr_29 [i_4] [i_3] [i_4] [i_4] [(unsigned short)8] [i_8])))) ? (((/* implicit */int) arr_35 [i_4] [i_5] [8] [i_4] [i_4] [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) 4056759322U)) || (((/* implicit */_Bool) var_6)))))));
                    }
                }
            } 
        } 
        arr_37 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(var_8)))))) ? (((/* implicit */int) var_3)) : ((+(((((/* implicit */int) arr_7 [i_3] [i_3])) & (((/* implicit */int) arr_12 [i_3]))))))));
    }
}
