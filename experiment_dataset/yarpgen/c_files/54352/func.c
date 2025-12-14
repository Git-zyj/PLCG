/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54352
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 -= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (+(var_13)))), (min((17477189043378979184ULL), (((/* implicit */unsigned long long int) var_11)))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3529121544U)) ? (((/* implicit */int) (unsigned short)29887)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] [i_4] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1 + 4] [i_0 - 3] [2U] [i_0] [2U])) ? (((/* implicit */int) arr_11 [i_1 + 3] [i_0 + 1] [5LL] [i_0] [(_Bool)0])) : (arr_3 [i_0])));
                            var_16 += ((/* implicit */unsigned short) ((((18446744073709551604ULL) > (((/* implicit */unsigned long long int) 1040187392)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(unsigned char)2] [i_0])) ? (arr_10 [i_3] [i_1] [(unsigned short)10] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)162))))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4])) ? (7350477768831272035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [0U] [i_4] [i_4] [i_4] [0U])))));
                            var_18 = ((/* implicit */unsigned char) (unsigned short)22816);
                        }
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_2] [i_1 + 2] [i_3 + 2]), (arr_7 [2ULL] [i_0] [i_2] [i_1 + 3] [i_3 + 1])))) ? (((((/* implicit */_Bool) arr_7 [(_Bool)0] [i_0 - 2] [i_2] [i_1 + 2] [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_1 - 1] [i_3 - 1])) : (((/* implicit */int) arr_7 [(unsigned short)10] [i_0] [i_3] [i_1 + 4] [i_3 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 12418827880253734617ULL))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (unsigned short i_7 = 4; i_7 < 9; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (arr_2 [i_5 - 1] [i_6])))), (max((var_13), (((/* implicit */unsigned int) arr_0 [i_5 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (signed char i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            {
                                arr_26 [i_9] [i_5] [i_7] [i_6] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 6292364072656221931LL)) ? (arr_10 [i_9] [i_9] [i_9] [i_8] [4U]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)232)) > (((/* implicit */int) arr_5 [11U])))))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_5 - 1]), (((/* implicit */unsigned short) arr_4 [i_5 - 1] [i_5 - 1]))))))));
                                var_21 = ((/* implicit */unsigned char) ((((arr_9 [i_8]) > (((/* implicit */long long int) ((/* implicit */int) (short)-5655))))) ? (min((((/* implicit */int) ((_Bool) (unsigned char)100))), ((-(((/* implicit */int) arr_1 [i_5])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) (short)5658))))) : ((-(arr_22 [i_5] [i_5] [(unsigned char)5])))))));
                                arr_27 [i_9] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) arr_2 [i_5] [i_9]))));
                                arr_28 [i_9] [i_6] [(short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_25 [i_8] [i_8] [i_7] [(unsigned char)7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [i_5 + 1] [i_6] [i_5 + 1] [i_9]), (arr_25 [i_9 - 1] [i_8] [i_7 - 3] [i_6]))))) : (((unsigned int) (_Bool)1))));
                                var_22 &= var_1;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8920))));
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (int i_11 = 3; i_11 < 7; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    {
                        arr_35 [i_5 + 1] [i_11] [i_10] [i_5 + 1] = ((/* implicit */unsigned int) arr_24 [(signed char)1]);
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 1; i_13 < 9; i_13 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (unsigned char)86))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [10U] [i_11] [(unsigned char)6])) ? (6292364072656221935LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_10] [i_11 - 2] [i_10] [i_13 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_11] [i_11 + 3] [i_13] [i_13]) > (arr_8 [i_10] [i_11 - 2] [i_11] [i_10]))))) : (max((((/* implicit */long long int) (unsigned short)64155)), (6406568724898755263LL)))));
                        }
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) var_0);
                            arr_41 [i_12] [i_12] [i_10] [i_10] [(unsigned short)8] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_5] [i_5] [i_11] [i_11] [i_14]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) : (((((/* implicit */_Bool) 12761026090635562523ULL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 1] [(_Bool)1] [i_5 - 1] [(_Bool)1] [(_Bool)1]))))));
                            var_27 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12761026090635562520ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_9 [(unsigned char)1])))) ? (min((-7827512596087969048LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_10] [i_12])))))));
                        }
                        var_28 = ((/* implicit */unsigned short) 12399355325089227649ULL);
                        var_29 *= ((/* implicit */unsigned long long int) (-(-1606623345)));
                    }
                } 
            } 
        } 
        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_9)) - (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [i_5 - 1])) > (779629805))))))) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    }
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (signed char)-71))));
    var_32 = ((/* implicit */long long int) var_6);
    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((((/* implicit */int) (signed char)109)) > (1610612736)))))))))));
}
