/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229532
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_11 [i_2] [2LL] [2LL] [2LL] [i_2] = ((/* implicit */long long int) arr_8 [i_3] [i_1] [i_0]);
                        arr_12 [i_3] [i_2] [4] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) arr_3 [i_1] [i_0])), (((((/* implicit */_Bool) ((unsigned short) 2986623364U))) ? ((~(((/* implicit */int) arr_9 [i_3] [i_3] [i_2] [i_1] [i_0])))) : (((/* implicit */int) arr_10 [i_0] [8LL] [i_0]))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_2] = ((/* implicit */int) ((long long int) (_Bool)0));
                        arr_16 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            arr_19 [i_2] [i_1] [9LL] = ((/* implicit */long long int) 3348315684U);
                            arr_20 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */int) ((unsigned short) 1814865277));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            arr_25 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) var_0));
                            arr_26 [i_0] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)73)))));
                            arr_27 [i_0] [i_0] [i_0] [i_1] [i_4] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_6 - 3] [i_2 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_6 - 2] [i_2 - 1]))));
                            arr_28 [i_6] [i_0] [i_2] [i_0] [i_0] = 946651611U;
                        }
                        for (unsigned int i_7 = 3; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            arr_31 [i_2] [i_1] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (unsigned char)112);
                            arr_32 [i_0] [i_0] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)28582))))));
                            arr_33 [i_0] [i_0] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */int) (-(max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [(_Bool)1])))))))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_36 [(unsigned short)4] [i_0] [i_2] [i_0] [i_2] = ((max((((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_8] [i_0] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) -984230392)) : (-1503251452759482515LL))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) - (6908735849949239142LL))))) - (((/* implicit */long long int) (-(((/* implicit */int) var_10))))));
                        arr_37 [i_0] [8U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14287410682295354005ULL)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        arr_40 [i_2] [i_0] [i_2] [i_2] [i_9] = ((/* implicit */short) min(((-(14287410682295354013ULL))), (((/* implicit */unsigned long long int) max((1503251452759482513LL), (((/* implicit */long long int) (unsigned short)20331)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_43 [i_0] [i_0] [i_1] [i_2] [i_9] [i_2] = ((/* implicit */signed char) arr_39 [i_9] [i_10]);
                            arr_44 [i_2] [7] [i_2] [i_2 + 1] = ((/* implicit */long long int) var_7);
                            arr_45 [i_10] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) var_9);
                        }
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_48 [i_2] [i_11] [i_1] [i_1] [i_2] = ((unsigned int) ((((/* implicit */long long int) var_9)) + (18014398509481952LL)));
                        arr_49 [i_0] [i_0] [i_2] [i_0] = 2120752043;
                        arr_50 [i_0] [i_1] [i_2] [i_11] = min((((/* implicit */long long int) ((((/* implicit */_Bool) 2385851099U)) || (((/* implicit */_Bool) (signed char)-1))))), (((((/* implicit */_Bool) (unsigned short)51183)) ? (max((((/* implicit */long long int) var_10)), (var_1))) : (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) (unsigned short)32965))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_53 [i_0] [i_2] [i_2] [i_2] [i_2] [(unsigned short)6] = ((/* implicit */unsigned short) ((min((2120752048), (((/* implicit */int) (unsigned short)1539)))) - (((int) ((((/* implicit */int) arr_10 [i_0] [10U] [i_12])) >= (((/* implicit */int) var_8)))))));
                        arr_54 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min(((-(arr_13 [(signed char)4] [i_2 - 1] [i_2 - 1] [i_2]))), (((/* implicit */unsigned int) max((arr_2 [i_0] [i_1]), (((/* implicit */short) (_Bool)1)))))));
                        arr_55 [i_12] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2302583038U))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((-(12126717194242230135ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 946651611U)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (signed char)-78)))))));
                        arr_59 [i_0] [6U] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 1909116216U)) % (-1161096689519244654LL)));
                    }
                    arr_60 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((int) (unsigned short)57546));
                    /* LoopNest 2 */
                    for (signed char i_14 = 3; i_14 < 14; i_14 += 2) 
                    {
                        for (int i_15 = 1; i_15 < 14; i_15 += 2) 
                        {
                            {
                                arr_67 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) : (min((((/* implicit */long long int) 1909116218U)), (var_1)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) -1291503362))), (min((((/* implicit */unsigned int) (unsigned char)245)), (492246537U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (arr_4 [i_2] [i_2])))) ? (((/* implicit */long long int) arr_13 [i_2 + 1] [i_15 + 1] [i_14 - 3] [i_14 - 3])) : (2443359553899908072LL))));
                                arr_68 [i_0] [i_1] [i_1] [i_2] [i_15] = ((/* implicit */_Bool) max((2443359553899908072LL), (((/* implicit */long long int) min((-245175933), (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)186)))))))));
                                arr_69 [i_0] [12] [i_0] [i_14] [(unsigned short)0] = ((/* implicit */_Bool) (+(-5833046465451013165LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_12);
    var_18 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (int i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        arr_72 [(_Bool)1] = max((max((((/* implicit */long long int) (unsigned char)248)), (-6338876773226233418LL))), (((/* implicit */long long int) (unsigned short)7204)));
        arr_73 [i_16] [i_16] = ((/* implicit */unsigned short) ((unsigned int) ((2120752049) >= (arr_17 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))));
        arr_74 [i_16] = ((/* implicit */unsigned int) (-(((long long int) (unsigned short)14358))));
        arr_75 [i_16] = ((/* implicit */_Bool) (unsigned short)51176);
    }
}
