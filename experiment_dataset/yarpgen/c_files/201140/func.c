/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201140
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        var_20 |= ((/* implicit */short) arr_8 [i_0] [i_0] [(short)7] [i_3 - 1]);
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [(signed char)7] = ((/* implicit */unsigned char) ((((arr_9 [i_2 + 1]) > (((((/* implicit */int) arr_6 [i_0] [i_0])) * (((/* implicit */int) arr_6 [i_0] [i_2 + 1])))))) || (((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0 + 1])))));
                        var_21 |= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) min(((short)19663), (((/* implicit */short) arr_7 [i_1] [i_0] [i_1] [i_3]))))), (((unsigned int) var_16)))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (short)-20673))))))));
                    }
                    var_22 ^= ((/* implicit */long long int) (~(min((arr_10 [i_1] [i_1] [i_1] [i_0]), (((/* implicit */int) ((((/* implicit */int) (short)-17939)) >= (((/* implicit */int) arr_0 [i_0])))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned long long int) max((arr_9 [i_0]), (arr_9 [i_0])))))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_0] [8ULL] [8ULL] [i_0]), (((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) (+(min((var_5), (((/* implicit */unsigned long long int) -409442963)))))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_9 [i_0 - 1])), ((~(2575058652U))))))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    arr_15 [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (-3221241332592162795LL));
                    arr_16 [i_0] = ((/* implicit */long long int) (-(-1654830200)));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_1] [i_4] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(short)0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12)))))));
                        arr_22 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) == (arr_4 [i_0] [i_1] [i_1]))))));
                        var_25 = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_4] [i_5]);
                    }
                    for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        arr_25 [i_6] [i_4] [i_4] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) (unsigned short)706);
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_1 [i_0 + 2] [i_0]))));
                    }
                    var_27 ^= ((/* implicit */long long int) (-((-(arr_23 [i_0] [i_0])))));
                }
                for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_26 [i_0] [i_0] [i_7]))))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0 + 2] [0U] [i_0 + 2] [5U]))))) && (((((/* implicit */int) arr_17 [i_0 - 1] [i_1] [i_1] [i_0 - 1])) != (((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]))))));
                    arr_29 [i_0] [i_1] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                }
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 15; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 4; i_10 < 14; i_10 += 2) 
                        {
                            {
                                arr_37 [i_0] [i_1] [i_8] [i_9] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_10 + 1] [i_9 - 1]))))), (var_8)));
                                arr_38 [i_10] [i_10] [i_9 - 2] [8ULL] [i_8] [8ULL] [i_0] |= ((/* implicit */unsigned long long int) (+(min(((~(var_2))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_19 [i_0])))))))));
                                var_30 = ((/* implicit */int) (+(17964284109854778218ULL)));
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */unsigned char) min((((((/* implicit */int) ((7026658755667005532ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1141)))))) ^ (arr_4 [i_0] [15LL] [i_0 + 1]))), (max((arr_23 [i_0 + 1] [i_0 + 2]), (arr_23 [i_0 + 3] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) (+(((482459963854773378ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 - 1] [i_1])))))));
                                var_33 += ((/* implicit */short) ((int) (+(((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_0 + 3] [i_8])))));
                                var_34 ^= max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_0)))), ((~(482459963854773397ULL))))), (min((((/* implicit */unsigned long long int) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))))), (((((/* implicit */unsigned long long int) arr_9 [i_12])) % (var_4))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((unsigned char) min((((/* implicit */int) max(((short)-19916), (((/* implicit */short) arr_26 [i_14] [i_14] [i_8]))))), (arr_49 [i_0 + 1] [i_1] [i_8] [i_8] [i_14])))))));
                                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_14] [(signed char)15] [(signed char)15] [i_14])) && (((/* implicit */_Bool) arr_44 [i_0 + 1]))))))));
                            }
                        } 
                    } 
                    var_37 += ((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_8] [i_1]);
                }
                arr_50 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) max((max(((short)(-32767 - 1)), (((/* implicit */short) arr_20 [i_0] [i_1])))), (((/* implicit */short) arr_43 [i_0] [i_0] [i_0 + 2])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 2; i_15 < 14; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                var_38 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [7] [7]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_52 [i_15 + 2] [12LL]))))));
                /* LoopNest 3 */
                for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 1; i_19 < 13; i_19 += 3) 
                        {
                            {
                                var_39 = var_16;
                                arr_64 [i_19] [i_16] [i_17] [i_18] [6U] [i_19] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (short)-19916))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_40 = max((var_10), (min((((/* implicit */long long int) ((var_13) >= (11420085318042546084ULL)))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_7))))));
    var_41 = ((/* implicit */_Bool) var_6);
}
