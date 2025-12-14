/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243868
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
    var_15 = ((/* implicit */unsigned short) min((max((var_1), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), ((((!(((/* implicit */_Bool) var_3)))) ? (max((((/* implicit */long long int) var_11)), (-2228659342824824871LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -3345152483424458467LL)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_16 += ((/* implicit */unsigned char) (~(-3345152483424458467LL)));
            arr_4 [10] [10] [10] = ((/* implicit */unsigned char) (~(arr_3 [i_0])));
            arr_5 [i_0] [i_0] [i_0] = max((((arr_1 [i_1]) ? ((~(((/* implicit */int) (signed char)53)))) : ((~(var_7))))), (((((/* implicit */_Bool) max((var_10), (((/* implicit */short) arr_1 [i_0]))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_9)))));
            arr_6 [i_0] [0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 3] [i_1 + 3])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32453))))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) arr_3 [i_0])) : (var_4)))));
            arr_9 [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32452))) : (var_0)))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_0))));
                arr_14 [i_0] [i_2] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18894)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) -319273022)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_12), (var_6))))))) : (min((((/* implicit */long long int) max((var_2), (var_2)))), (((((/* implicit */_Bool) arr_7 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)2112)))))))));
                arr_15 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_12)), (var_10))))) : (var_0)));
            }
            for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((var_6) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (unsigned short)45164))));
                            var_20 += ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (_Bool)0))));
                            arr_27 [i_5] [i_5] [i_4] [i_4] [i_2] [10] [i_5] = ((/* implicit */_Bool) min((max((min((((/* implicit */long long int) var_7)), (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)12))))))), (((/* implicit */long long int) max((arr_2 [i_2]), (((/* implicit */short) var_6)))))));
                        }
                    } 
                } 
                arr_28 [i_0] = ((/* implicit */signed char) var_4);
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((1447303973) <= (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) var_13)), (var_11)))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) : (arr_8 [12ULL] [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_7] = (((_Bool)1) ? (937503793) : (max(((-2147483647 - 1)), (((/* implicit */int) var_12)))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 3; i_8 < 11; i_8 += 3) 
            {
                for (short i_9 = 2; i_9 < 12; i_9 += 4) 
                {
                    for (unsigned char i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_40 [1U] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (14153458573110453256ULL) : (((/* implicit */unsigned long long int) min((2038208045497798760LL), (((/* implicit */long long int) 231825188)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3070))) : (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (11ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (24U))))))));
                            var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)62741), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-99)), (var_10)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */long long int) arr_0 [i_0] [3U])), (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7016770334173893355LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_41 [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_3)) ? ((+(15793427749736762728ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
            } 
        }
        arr_42 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (var_7) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1])))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) (signed char)-10)))) : (((((/* implicit */int) var_13)) + (((/* implicit */int) (_Bool)1))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)18746)) ? (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [(signed char)2] [i_12])) ? (((/* implicit */int) arr_52 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_54 [(unsigned char)11] [i_12] [i_13] [i_11])))))))));
                        var_24 = ((/* implicit */unsigned long long int) var_8);
                    }
                    arr_55 [i_11] [(_Bool)1] [i_12] [i_13] &= ((/* implicit */short) ((((/* implicit */_Bool) max((2038208045497798760LL), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)128)), (var_8))))))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : (-7016770334173893328LL))), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_48 [i_11] [i_11] [(signed char)8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
}
