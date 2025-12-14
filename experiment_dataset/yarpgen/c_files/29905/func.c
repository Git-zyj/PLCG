/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29905
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] [i_3] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) < (((unsigned long long int) arr_0 [i_0] [i_0]))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))) : (((arr_4 [i_0]) ? (((/* implicit */unsigned long long int) var_2)) : (8073505604142160643ULL)))));
                        var_17 = ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_3]) << (((((((/* implicit */_Bool) (short)-6661)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) + (15162)))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned short) ((arr_6 [i_0] [i_3] [i_2] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)12528)))));
                        var_20 |= ((/* implicit */unsigned int) (unsigned char)15);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_7 [i_1] [i_4] [i_2] [i_4])) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))));
                    }
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (-(8ULL)));
                        var_22 = ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_5] [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (3451316605U)))) : (((/* implicit */int) arr_3 [i_5])));
                    }
                    arr_19 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        arr_23 [i_6] = arr_10 [i_6] [i_6] [i_6] [i_6] [i_6];
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    arr_30 [i_6] [i_8] = ((/* implicit */unsigned short) arr_9 [i_6] [i_7] [i_7] [i_8]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_9] [i_10])) ? (((/* implicit */int) (unsigned short)15511)) : (arr_17 [i_6] [i_7 + 2] [i_8] [i_9] [i_6])));
                            var_24 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            arr_38 [i_6] [i_7] [i_8] [i_6] [i_9] [i_11] = ((((/* implicit */unsigned int) arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])) - (((unsigned int) var_15)));
                            arr_39 [i_6] [i_7] [i_8] [i_6] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_10);
                            var_25 = ((/* implicit */unsigned long long int) var_7);
                        }
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            arr_42 [i_6] [i_6] [i_6] [i_6] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) - (8073505604142160643ULL)))) ? (arr_26 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                            var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_9] [i_7] [i_7 + 3]))));
                            var_27 += ((/* implicit */unsigned long long int) var_13);
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 3) 
                        {
                            arr_46 [i_6] [i_7] [i_8] [i_9] [i_13] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) / (var_15))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                            arr_47 [i_6] [i_7] [i_8] [i_9] [i_9] [i_6] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (((((/* implicit */_Bool) var_15)) ? (2507173612U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                            var_28 += ((/* implicit */long long int) (signed char)38);
                        }
                        var_29 = (-(var_5));
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_7 - 1]))));
                        var_31 = arr_29 [i_7] [i_9];
                        arr_48 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) (short)0))));
                    }
                    for (long long int i_14 = 2; i_14 < 16; i_14 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            var_32 = min(((~(((((/* implicit */_Bool) (short)-5213)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6])))))), ((-(131008))));
                            var_33 |= (-(((((((/* implicit */_Bool) (signed char)-1)) ? (var_2) : (((/* implicit */int) var_16)))) * (((/* implicit */int) ((-131027) <= (var_7)))))));
                            var_34 = ((/* implicit */int) var_6);
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (15345163820382382857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_7] [i_8] [i_14] [i_6])))));
                            arr_54 [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_13 [i_6] [i_7] [i_8] [i_8] [i_14] [i_15])))) ? (min((((/* implicit */int) (short)5213)), (131008))) : (min((-1249185566), (arr_13 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))));
                        }
                        for (int i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            arr_57 [i_6] [i_6] = ((/* implicit */unsigned char) arr_0 [i_14] [i_7]);
                            var_36 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) var_12)), (237930389U))), (((unsigned int) (-(((/* implicit */int) (unsigned short)24984)))))));
                            arr_58 [i_6] [i_6] [i_8] [i_14] = ((/* implicit */unsigned long long int) (-(min((1690575474U), (((/* implicit */unsigned int) arr_7 [i_6] [i_7 - 1] [i_14 - 2] [i_14]))))));
                            var_37 *= ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_6] [i_6] [i_8] [i_14] [i_14])) ? (436440108U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23851)))))))), (((/* implicit */long long int) ((_Bool) var_2)))));
                        }
                        for (unsigned long long int i_17 = 2; i_17 < 15; i_17 += 2) 
                        {
                            var_38 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_44 [i_7] [i_7 + 2] [i_6])) ? (((/* implicit */int) arr_16 [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) arr_16 [i_14 - 2] [i_14 + 1] [i_14 - 1] [i_14 + 1])))), (((/* implicit */int) var_0))));
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_6] [i_8] [i_6])) ? (((/* implicit */int) var_3)) : (min((var_2), (((/* implicit */int) var_9))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_1 [i_7])))) ? (201807195U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : ((+(arr_31 [i_17] [i_17 + 2] [i_14 - 2] [i_14 - 1] [i_7 + 1])))));
                        }
                        var_40 -= ((/* implicit */unsigned long long int) (~(-1769102454)));
                        arr_62 [i_6] [i_7] [i_7] [i_7] [i_7] = (-(min((arr_36 [i_7 + 1] [i_7] [i_6] [i_14 + 1] [i_14]), (arr_36 [i_7 + 4] [i_7 + 4] [i_6] [i_14 - 2] [i_14]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (int i_19 = 0; i_19 < 17; i_19 += 3) 
                        {
                            {
                                var_41 = ((/* implicit */signed char) arr_51 [i_6] [i_7] [i_8] [i_18]);
                                arr_69 [i_6] [i_6] [i_8] [i_18] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26100)) * (((/* implicit */int) arr_20 [i_7 + 3] [i_7]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) 2171453838U)))));
                                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) var_13))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_43 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(var_2)))), (arr_49 [i_6] [i_6] [i_6] [i_6])));
        var_44 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_6]))) : (1518685027U)))))))) < (0U)));
    }
    var_45 = ((/* implicit */signed char) min((var_45), (var_6)));
}
