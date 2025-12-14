/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19716
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
    for (signed char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) 1438393228U);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0 + 4]) : (arr_3 [i_0 + 2])))), (-1LL)));
                                var_14 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_1] [i_2 + 2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) 954329808)) : (9994646998602516307ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))) : (((((/* implicit */unsigned long long int) -1LL)) ^ (16258043400814134772ULL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        arr_16 [i_0 - 4] [i_0 - 4] [i_2] [i_5] |= var_9;
                        var_15 ^= ((/* implicit */_Bool) 806044762850452931LL);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 19; i_7 += 2) 
                        {
                            {
                                arr_21 [i_6] [i_2] [i_6 - 1] [i_7 - 1] = ((/* implicit */_Bool) ((unsigned int) ((((int) var_5)) % (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_8 [i_2 + 2]))))))));
                                var_16 = (+(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), (arr_4 [i_6 - 1] [i_0 + 2])))));
                                arr_22 [i_0] [i_6] [i_2] [i_6] [i_7] = ((/* implicit */signed char) ((unsigned char) arr_3 [i_2]));
                                var_17 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) ((unsigned char) (unsigned char)255))) : (max((var_6), (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_25 [i_8] [i_8] = ((/* implicit */unsigned short) ((((int) arr_11 [i_8] [i_8] [i_8] [i_8] [i_8])) == (((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))));
        var_18 += ((/* implicit */short) (signed char)-63);
    }
    /* LoopSeq 1 */
    for (short i_9 = 3; i_9 < 21; i_9 += 1) 
    {
        var_19 &= ((/* implicit */unsigned char) arr_27 [i_9] [i_9 - 3]);
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10] [i_9 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9 - 1]))) : (2188700672895416843ULL)))))) ? (((var_9) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_11]))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_13] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_31 [i_10] [i_12] [i_10]))))))))))));
                                var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((-1LL) ^ (arr_26 [i_13]))) == (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_10])))))), (arr_27 [i_9 - 3] [i_10])));
                                arr_40 [i_9] [i_9] [i_11] [i_12] [i_9] = ((/* implicit */int) var_0);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) - (arr_39 [i_9 + 2] [i_9 + 2] [i_9 - 2] [i_9 + 2])))) - (max((((unsigned long long int) 0LL)), (((/* implicit */unsigned long long int) arr_27 [i_9 - 1] [i_9 - 3]))))));
                    var_23 = ((/* implicit */unsigned int) (unsigned char)151);
                }
            } 
        } 
    }
    var_24 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) 1018609826U))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    var_25 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12))), (((/* implicit */unsigned long long int) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56)))))))))));
}
