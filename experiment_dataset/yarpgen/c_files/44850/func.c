/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44850
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
    var_11 = ((/* implicit */unsigned int) max((var_9), (var_9)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) max((var_3), (((/* implicit */short) var_7))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) ^ (arr_0 [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)27)) | (((/* implicit */int) (_Bool)1)))))));
            var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1] [i_1] [i_0])), ((~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */short) (unsigned char)20))))) ? (((/* implicit */long long int) ((unsigned int) arr_3 [i_0] [i_0] [i_1]))) : (min((((/* implicit */long long int) (unsigned char)203)), (2402503155838861973LL))))) : (((/* implicit */long long int) var_4))));
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))));
            var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) != (((/* implicit */int) arr_4 [i_0]))))) : ((~(((/* implicit */int) var_2))))));
        }
        for (short i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                var_15 ^= ((/* implicit */unsigned short) max((((((((/* implicit */int) var_10)) | (909561608))) % (((/* implicit */int) arr_4 [i_0])))), (max((((((/* implicit */_Bool) 16733720651093076425ULL)) ? (((/* implicit */int) arr_6 [i_0])) : (arr_7 [i_0] [i_2] [i_3]))), (((/* implicit */int) ((_Bool) var_10)))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((unsigned char) var_5))), ((-(-4961244228407674460LL))))), (((/* implicit */long long int) ((unsigned int) ((arr_3 [i_3] [i_2] [i_0]) && (((/* implicit */_Bool) arr_2 [i_0])))))))))));
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [i_3])))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)53366)) : (-1722729261))))))));
                /* LoopSeq 2 */
                for (long long int i_4 = 2; i_4 < 24; i_4 += 2) 
                {
                    var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_2] [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_2] [i_2 - 1]))))) : (((((/* implicit */_Bool) (unsigned char)145)) ? (16733720651093076418ULL) : (((/* implicit */unsigned long long int) 2947305723U)))));
                    var_18 = ((/* implicit */unsigned short) var_3);
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (unsigned char)246)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                }
                for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 3; i_6 < 24; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))) | (2027112286U))), (((/* implicit */unsigned int) var_2))));
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_8 [i_6] [i_6] [i_6 - 2])))) ? (max((((/* implicit */unsigned long long int) max(((unsigned char)162), (((/* implicit */unsigned char) arr_3 [i_2] [i_3] [i_6]))))), (arr_1 [i_2 + 1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53859)) ? (((/* implicit */int) (unsigned short)60082)) : (((/* implicit */int) (unsigned short)46861))))), ((-(281470681743360LL))))))));
                        var_22 = ((/* implicit */unsigned char) ((_Bool) max((arr_17 [i_2 - 1] [i_6 - 2] [i_2] [i_6] [i_6]), (arr_17 [i_2 - 1] [i_6 + 1] [i_2] [i_6] [i_6]))));
                        arr_18 [i_0] [i_2] [i_3] [i_5] [i_2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (var_6) : (1476513034U))));
                    }
                    var_23 *= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_0)), (754814159U)))));
                    var_24 |= arr_3 [i_0] [i_2 - 1] [i_3];
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_7 = 1; i_7 < 24; i_7 += 3) 
                    {
                        arr_23 [i_0] [i_2] [i_3] [i_5] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_5))));
                        arr_24 [i_0] [i_2] [i_3] [i_5] [i_7] [i_7] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_5] [i_7])) : (((/* implicit */int) var_8))))) ? ((-(var_0))) : (((/* implicit */int) var_2))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_0] &= ((/* implicit */short) (~(min((max((9475702917221914677ULL), (((/* implicit */unsigned long long int) (short)-1030)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_0] [i_2] [i_5] [i_5] [i_8])))))))));
                        var_25 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_21 [i_0] [i_3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_2 - 1] [i_5] [i_8 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (3540153166U))))), (((/* implicit */unsigned int) var_10))));
                    }
                }
            }
            /* LoopSeq 2 */
            for (signed char i_9 = 4; i_9 < 23; i_9 += 2) 
            {
                arr_32 [i_0] [i_0] [i_9] [i_9] &= ((/* implicit */int) arr_14 [i_0] [i_9] [i_9] [i_0] [i_2]);
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 4; i_11 < 22; i_11 += 2) 
                    {
                        {
                            arr_38 [i_0] [i_2] [i_9] [i_10] [i_2] = ((/* implicit */unsigned long long int) max((arr_37 [i_11] [i_10] [i_9] [i_2] [i_0]), (((/* implicit */long long int) var_4))));
                            var_26 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)1055)), ((unsigned short)11693)));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 3; i_12 < 23; i_12 += 2) 
            {
                var_27 = ((/* implicit */signed char) ((arr_37 [i_0] [i_2] [i_12] [i_2] [i_12]) * (((min((var_9), (((/* implicit */long long int) var_3)))) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                arr_42 [i_12] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1266435592U))))), (var_5)));
            }
            var_28 = (~(max((((/* implicit */unsigned long long int) arr_40 [i_0] [i_2 + 1] [i_2 + 1])), (arr_41 [i_2] [i_2 - 1] [i_2 - 1]))));
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 24; i_13 += 3) 
            {
                arr_47 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) (short)0)), ((~(((/* implicit */int) (_Bool)1))))));
                var_29 = ((/* implicit */int) (((~(((/* implicit */int) arr_36 [i_13 - 1] [i_2 + 1] [i_2] [i_2] [i_2])))) != (((((/* implicit */_Bool) arr_36 [i_13 - 1] [i_2 - 1] [i_2] [i_2] [i_0])) ? (((/* implicit */int) arr_36 [i_13 + 1] [i_2 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_36 [i_13 + 1] [i_2 - 1] [i_2] [i_2] [i_2]))))));
                /* LoopSeq 1 */
                for (unsigned short i_14 = 1; i_14 < 22; i_14 += 1) 
                {
                    arr_52 [i_2] [i_2] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_0)) - (var_6)));
                    var_30 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-52)) < ((-(((/* implicit */int) arr_9 [i_13 + 1]))))));
                }
                var_31 ^= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (short)-1048)), (754814150U))), (((/* implicit */unsigned int) max((var_3), (((/* implicit */short) var_7)))))));
            }
        }
        for (long long int i_15 = 4; i_15 < 23; i_15 += 2) 
        {
            arr_55 [i_0] |= (+(((/* implicit */int) ((_Bool) max((arr_16 [i_0] [i_15] [i_15] [i_15] [i_0]), (((/* implicit */unsigned long long int) 3623741294U)))))));
            arr_56 [i_0] = ((/* implicit */unsigned char) arr_25 [i_0] [i_15] [i_15]);
            arr_57 [i_0] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) max(((short)3), (((/* implicit */short) arr_33 [i_0] [i_15] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (2100254131U)));
        }
        for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            var_32 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) arr_27 [i_0]))))), ((unsigned char)131))))));
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (max((((((/* implicit */_Bool) var_8)) ? (4783145217215084495ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_16]))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_16]))))));
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((13663598856494467121ULL), (((/* implicit */unsigned long long int) (unsigned short)37466))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_16])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8965)))))) : (3762873124664635538LL))))));
        }
        var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7335))));
    }
}
