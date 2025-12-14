/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245962
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */long long int) var_8);
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_10 -= ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_1]));
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (-2147483647 - 1));
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_9))) && (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))))))) <= (((/* implicit */int) (signed char)5))));
                    var_11 -= ((/* implicit */signed char) ((int) ((((/* implicit */int) min((var_7), (arr_5 [i_3] [i_0] [i_0])))) <= (((/* implicit */int) var_2)))));
                }
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */_Bool) (+(var_3)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-19)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (short)-25100))))) ? (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(short)1])) : (((/* implicit */int) (short)16926)))) : (((/* implicit */int) (short)22370))))));
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))));
                    arr_23 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_4])) / (((/* implicit */int) arr_11 [i_4] [i_4] [i_1] [i_4])))));
                }
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 8; i_8 += 1) 
                    {
                        arr_28 [i_1] [i_7] [i_7] [i_0] = ((/* implicit */long long int) (!((_Bool)1)));
                        var_15 += ((/* implicit */unsigned char) 3047767377U);
                        var_16 = min((((/* implicit */unsigned int) (_Bool)1)), (1411987513U));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_21 [i_0] [i_1] [i_7] [i_7] [i_1]))));
                        var_18 = ((/* implicit */unsigned short) (~(((var_4) ? (min((18360665045124922692ULL), (((/* implicit */unsigned long long int) 4294967287U)))) : (((((/* implicit */unsigned long long int) arr_27 [i_8] [i_7] [i_0] [i_0])) & (86079028584628908ULL)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 4; i_10 < 7; i_10 += 3) 
                        {
                            {
                                arr_35 [i_7] [i_7] [i_7] = ((/* implicit */short) max((((/* implicit */int) var_9)), (((((/* implicit */int) arr_0 [i_9 + 1])) * (((/* implicit */int) var_9))))));
                                arr_36 [i_10 - 1] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) (unsigned short)21740);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 9; i_11 += 1) 
                {
                    for (unsigned int i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        {
                            arr_42 [i_0] [(unsigned char)7] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-83)) || (((/* implicit */_Bool) arr_31 [i_12 + 1] [9LL])))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-28)), (var_5))))))));
                            var_19 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_12])) : (((/* implicit */int) var_8)))) * (((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12] [i_12 - 1]))))) ? (max((arr_26 [i_12 - 1] [i_12] [i_12] [i_12 + 1]), (((/* implicit */long long int) (signed char)107)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)70))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            for (unsigned char i_15 = 2; i_15 < 9; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_26 [i_13] [i_14] [i_15 + 1] [i_16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((signed char) var_1))))) : (((((/* implicit */_Bool) (signed char)35)) ? (arr_40 [i_15] [i_14] [i_15] [(signed char)0] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_15 - 2] [i_16] [i_16])))))));
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_47 [i_15 - 2] [i_15 - 1] [i_15 - 2])))));
                        arr_56 [i_16] [i_15] [i_15] [i_13] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_15] [i_16])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_14] [i_15 + 1]))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((long long int) var_5)))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_0))));
    }
    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
    {
        arr_60 [i_17] = ((/* implicit */long long int) ((((unsigned int) arr_58 [i_17])) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)31274), (((/* implicit */unsigned short) arr_57 [i_17]))))))));
        var_24 = ((/* implicit */unsigned short) var_4);
        arr_61 [i_17] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned long long int) 7416778653617052803LL)) : (86079028584628901ULL)))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                {
                    arr_69 [i_18] = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (unsigned char)57)))));
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 2) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_75 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_19])) & (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) max((arr_65 [i_17] [i_17] [i_17]), (((/* implicit */short) arr_62 [i_20]))))))))));
                                var_25 -= ((/* implicit */_Bool) ((int) ((((/* implicit */int) (signed char)10)) / (((/* implicit */int) (unsigned short)34254)))));
                            }
                        } 
                    } 
                    arr_76 [i_17] [i_17] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((-(arr_58 [i_17]))) / (((/* implicit */int) arr_74 [i_19] [i_18] [i_18] [i_17]))))) / (((18446744073709551611ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    arr_77 [i_18] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 15719648803512226614ULL)) ? (((/* implicit */int) arr_72 [i_19] [i_19] [i_18] [i_18] [i_17] [5U] [i_17])) : (((/* implicit */int) arr_72 [i_17] [i_18] [i_19] [i_19] [i_19] [i_18] [i_18]))))) & (max((4663461230214903612LL), (((/* implicit */long long int) arr_72 [i_19] [i_19] [i_18] [i_17] [i_17] [i_17] [i_17]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_22 = 4; i_22 < 17; i_22 += 4) 
    {
        arr_81 [i_22] = ((/* implicit */_Bool) (unsigned short)51146);
        arr_82 [i_22 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (signed char)5)))) : (((/* implicit */int) arr_65 [i_22] [i_22 - 2] [i_22 + 2]))));
        arr_83 [i_22] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 8261259178659481604LL)) <= (((((/* implicit */_Bool) arr_59 [(unsigned short)20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19902))) : (86079028584628905ULL)))));
    }
}
