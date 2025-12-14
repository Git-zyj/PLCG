/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191634
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
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_5))))) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0))))))) ^ (((/* implicit */int) var_10))));
    var_15 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((short) ((int) arr_1 [i_0])));
        var_17 += ((/* implicit */short) ((((((((/* implicit */_Bool) arr_2 [(signed char)6])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [(unsigned short)0])))) % (((/* implicit */int) arr_1 [(signed char)12]))));
        arr_3 [(signed char)10] |= ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) arr_2 [2ULL]))), (((unsigned short) arr_2 [14]))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) arr_4 [i_2] [i_1]);
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [(unsigned short)8])) <= (((/* implicit */int) arr_1 [i_1])))))))) < (((((/* implicit */int) ((unsigned short) var_5))) | ((~(((/* implicit */int) var_13))))))));
        }
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) min(((+(max((var_4), (((/* implicit */unsigned long long int) arr_2 [i_1])))))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_3]));
        var_20 += ((/* implicit */signed char) var_12);
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)21346))));
        var_22 += (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44190)) && (((/* implicit */_Bool) (unsigned short)21346))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        var_23 = ((/* implicit */int) var_7);
        arr_17 [i_5] [i_5] = arr_15 [i_5];
    }
    for (long long int i_6 = 3; i_6 < 22; i_6 += 2) 
    {
        arr_20 [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6] [i_6 + 1])) || (((/* implicit */_Bool) arr_19 [i_6 - 3])))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (unsigned int i_8 = 3; i_8 < 21; i_8 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_6] [i_7]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6 - 3])) ? (((/* implicit */int) arr_16 [i_7] [i_6])) : (((int) arr_22 [i_7] [i_7] [i_8]))))))))));
                    arr_26 [i_6] = ((/* implicit */short) arr_23 [i_8] [i_7] [i_6]);
                    var_25 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_7])) ? (max((((/* implicit */unsigned long long int) var_5)), (var_4))) : (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7] [i_8 + 2])))));
                    var_26 &= ((unsigned int) arr_18 [i_6] [i_6]);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        var_27 = ((/* implicit */unsigned int) max(((signed char)(-127 - 1)), ((signed char)34)));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_12 = 1; i_12 < 20; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_9] [i_12 + 1])) != (((/* implicit */int) arr_21 [i_11]))));
                        var_29 = ((/* implicit */long long int) ((unsigned char) arr_16 [i_12 + 1] [i_10]));
                        arr_37 [i_9] [i_10] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_9] [i_12])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (signed char)-53))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_12] [i_10] [i_12])) && (((/* implicit */_Bool) var_13)))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_30 ^= ((/* implicit */short) ((max((arr_24 [i_9] [i_10] [i_13]), (((/* implicit */unsigned int) arr_30 [i_10])))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9] [i_11])))));
                        arr_40 [i_9] [i_11] [i_10] [i_13] [i_9] = ((short) ((short) arr_19 [i_11]));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                    {
                        var_31 += ((/* implicit */unsigned short) ((arr_24 [i_9] [i_9] [i_11]) % (arr_24 [i_10] [i_11] [i_14])));
                        arr_43 [i_9] [i_10] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_9] [i_10] [i_11])) ? (((/* implicit */int) arr_29 [i_11] [i_14])) : (((/* implicit */int) ((signed char) arr_34 [i_10] [i_11])))));
                        var_32 |= ((((/* implicit */int) arr_35 [i_9])) + (((/* implicit */int) arr_35 [i_10])));
                        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_11]))));
                    }
                    var_34 = ((/* implicit */short) min((((arr_36 [i_10]) * (arr_36 [i_10]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_9] [i_10])) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_25 [i_11] [15] [i_9])) : (((/* implicit */int) var_13)))))))));
                    var_35 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_23 [i_9] [i_10] [i_11])))), (((/* implicit */int) max((((/* implicit */short) ((signed char) arr_30 [i_11]))), (var_13))))));
                    arr_44 [i_9] [i_10] [i_11] = ((/* implicit */int) arr_27 [i_10]);
                }
            } 
        } 
    }
}
