/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232540
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(var_3)))))));
    var_11 = ((/* implicit */short) ((unsigned long long int) var_4));
    var_12 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [(short)16] = ((unsigned long long int) 1633118862);
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((var_8), (((/* implicit */long long int) arr_3 [12ULL])))), (-2800111474381893559LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (((var_3) % (((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)71), (((/* implicit */unsigned char) arr_0 [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)184))))));
            var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) ((((/* implicit */_Bool) -5207148544357364957LL)) || (((/* implicit */_Bool) (unsigned short)32768)))))))));
            var_15 = ((/* implicit */_Bool) (-(466476997U)));
            arr_11 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_2]);
            /* LoopSeq 1 */
            for (int i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    arr_18 [i_0] = ((unsigned int) arr_17 [i_3 - 1] [i_3 - 2] [i_4 - 1]);
                    var_16 ^= ((/* implicit */long long int) (signed char)32);
                    arr_19 [i_0] [i_2] [i_3 - 1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 22ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_3 - 1])) : (((/* implicit */int) (unsigned short)7180))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_22 [(unsigned char)8] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_0] [i_2] [i_2] [(_Bool)0]))))) ? (min((arr_17 [i_2] [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [11] [i_0])))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_17 [i_0] [i_2] [i_5]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_25 [14LL] [i_5] [i_3] [i_2] [i_2] [i_0] = ((/* implicit */int) arr_21 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 - 2]);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0])) ? (arr_17 [i_3 + 1] [i_6] [i_3]) : (arr_23 [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 - 2])));
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) 5207148544357364957LL);
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)184)), ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)52028))))) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)-26)))) : (((int) var_3))));
                        var_20 = ((/* implicit */long long int) arr_17 [i_2] [i_3 - 2] [i_3 + 1]);
                        arr_29 [i_0] [(short)13] [i_2] [i_3] [i_5] [i_7 + 1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)65535))))));
                    }
                    arr_30 [i_0] [(signed char)15] [i_0] [i_0] = (+(5207148544357364956LL));
                    arr_31 [i_0] [i_2] [7] = ((/* implicit */unsigned int) var_4);
                }
                for (unsigned int i_8 = 2; i_8 < 17; i_8 += 2) 
                {
                    var_21 &= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_7)), (arr_24 [i_3 - 1] [7U] [i_8 - 1] [i_8]))) * (((((/* implicit */_Bool) 466477009U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0] [i_2] [i_3] [i_8 - 2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) : (((unsigned int) -8131146135792841731LL))))));
                    var_22 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                }
                for (int i_9 = 3; i_9 < 14; i_9 += 2) 
                {
                    var_23 = ((/* implicit */long long int) arr_12 [i_9]);
                    arr_36 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 465909926U)) : (((((-1596368439) <= (((/* implicit */int) (signed char)-73)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18576))) : (-1LL)))));
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [0] [0] [0] [i_9] [i_3] [i_3]))));
                }
                var_25 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)27088)) : (((/* implicit */int) arr_12 [i_0]))))) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)13298))))))), (((/* implicit */unsigned int) ((signed char) arr_34 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 1])))));
            }
        }
        for (short i_10 = 2; i_10 < 16; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (unsigned short)59296)))) & (((/* implicit */int) (unsigned char)0)))));
                    var_27 &= ((((/* implicit */_Bool) 3084665419608274232LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 465909926U))))) : (((/* implicit */int) min((min((var_0), (((/* implicit */unsigned short) (signed char)116)))), (((/* implicit */unsigned short) var_4))))));
                    var_28 = ((/* implicit */short) var_5);
                    var_29 = ((/* implicit */short) arr_27 [i_0] [i_0] [i_0] [10] [i_0]);
                }
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), ((unsigned short)55887)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17411))) : (min((min((((/* implicit */long long int) (unsigned char)191)), (5207148544357364957LL))), (((/* implicit */long long int) arr_27 [i_0] [i_10 - 1] [i_10 + 2] [i_11] [i_11]))))));
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((((((/* implicit */_Bool) arr_20 [i_11] [i_10 + 2] [i_0] [i_0])) ? (arr_20 [i_0] [i_10] [i_10 - 1] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))))), (((((/* implicit */_Bool) arr_20 [i_11] [i_11] [7] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_20 [i_0] [i_10] [i_10] [14U]))))))));
            }
            var_32 = ((/* implicit */long long int) max((((/* implicit */int) var_4)), ((-((-(0)))))));
        }
        for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_14 = 1; i_14 < 16; i_14 += 3) 
            {
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_14 + 2] [i_14 - 1] [i_14 + 1] [i_14 - 1])) ? (((5668964093338886514ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23254))))) : (((((/* implicit */_Bool) arr_15 [i_0])) ? (arr_15 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_14 - 1] [i_14 + 1] [i_13 + 2])) ? (((/* implicit */int) arr_37 [i_14] [i_14])) : (((/* implicit */int) arr_48 [i_14 - 1] [i_14 + 2] [i_13 - 2]))));
            }
            var_35 = ((/* implicit */long long int) max(((~(min((((/* implicit */unsigned int) arr_37 [i_0] [i_13 + 2])), (var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_13 + 1])) : (((/* implicit */int) var_1)))))));
            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_39 [i_13 + 2] [i_13 + 2]), (arr_39 [i_13 + 1] [i_13 - 2])))) ? ((-(var_3))) : (max((arr_39 [i_13 + 1] [i_13 - 1]), (((/* implicit */unsigned int) (unsigned short)23254)))))))));
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_1)))))))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_50 [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_13 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (arr_15 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (min((2667211744173610956ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_13])))))));
        }
        arr_52 [i_0] = ((/* implicit */unsigned char) ((((arr_50 [i_0]) | (arr_50 [i_0]))) | (min((((/* implicit */unsigned long long int) var_9)), (arr_50 [i_0])))));
    }
    var_38 = ((/* implicit */signed char) (~(min((max((((/* implicit */long long int) var_2)), (6498687989544264793LL))), (((/* implicit */long long int) max((1536), (((/* implicit */int) (signed char)-13)))))))));
}
