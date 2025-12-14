/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234527
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_4 [(signed char)10] [i_0] &= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-23618))) / (-7113775736949022298LL)))), ((+(var_6))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_1 - 1] [i_1 + 1])), (var_1))))));
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_0 [i_0] [i_1]))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_13 -= (-(((((/* implicit */int) var_5)) & (((/* implicit */int) arr_0 [i_0] [(unsigned char)10])))));
                    var_14 = (~(((/* implicit */int) (short)23614)));
                }
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        arr_15 [i_0] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */int) var_11);
                        var_15 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)22770))))) % (((1038463192078457622ULL) & (((/* implicit */unsigned long long int) var_3))))));
                        var_16 += ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0] [i_3 + 1] [8]))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(14090157732573192915ULL)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_1 [i_6] [i_2]) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_6 [i_3] [i_5] [i_6])))))))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(arr_1 [i_0] [i_3 - 3]))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_19 [i_3] [i_0] [i_2] [i_3] [i_5] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1860220226525199219LL)))) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) ((((/* implicit */int) (short)-5138)) <= (((/* implicit */int) var_5)))))));
                        var_19 -= ((/* implicit */short) ((long long int) (+(((/* implicit */int) (unsigned short)0)))));
                        var_20 = ((/* implicit */_Bool) max((var_20), ((!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20275))) > (10421582246696962241ULL)))))));
                    }
                    for (short i_8 = 4; i_8 < 8; i_8 += 4) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] [8] = ((/* implicit */int) (short)-20276);
                        var_21 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -369021176985706368LL)) ? (((/* implicit */int) (short)-29434)) : (((/* implicit */int) var_5))))));
                        arr_23 [i_0] [i_2] [i_8] &= ((/* implicit */signed char) (short)32755);
                    }
                    var_22 = ((/* implicit */signed char) ((arr_17 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0]) == (((/* implicit */int) (signed char)-126))));
                    var_23 -= ((/* implicit */long long int) ((_Bool) 8025161827012589374ULL));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) 18446744073709551615ULL))));
                }
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-111))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)12))) : (16007462806255857816ULL)));
            }
            /* LoopNest 2 */
            for (short i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (signed char)61))));
                        var_27 = (-(var_4));
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1)))))));
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_0] [i_0])) ? (((((/* implicit */_Bool) 8025161827012589382ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) : (10692800849403858660ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_11 = 3; i_11 < 9; i_11 += 3) 
        {
            var_30 = (+(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (short)-23633))))) ? (((((/* implicit */_Bool) 8025161827012589374ULL)) ? (var_1) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3938569547U)) ? (((/* implicit */int) (short)23644)) : (((/* implicit */int) (short)-23633))))))) ? (min((min((3885496541440450042ULL), (((/* implicit */unsigned long long int) (short)-5135)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10421582246696962241ULL))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_11] [i_0] [i_0] [i_11 - 1])))))));
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        {
                            var_32 ^= ((/* implicit */unsigned int) ((((8025161827012589375ULL) | (7264321433766876276ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20276)))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_11] [i_14])) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5138))) : (6044232609001694190LL)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (arr_9 [i_0] [6] [i_12] [i_13] [i_14])));
                            arr_37 [i_0] [i_14] [i_12] [i_14] [i_12] [i_0] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) arr_14 [i_12] [i_11 - 1] [0] [i_0] [i_14]))))) ? (((((/* implicit */_Bool) ((arr_25 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32767))))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))));
                            var_34 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                        }
                    } 
                } 
                var_35 *= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (short)-5141)), (var_6))), (max((((/* implicit */unsigned long long int) arr_34 [i_11 - 2] [i_11 - 3] [i_11 - 3] [i_11 + 3] [i_11])), (10421582246696962206ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), ((~(8025161827012589382ULL)))));
                    arr_40 [i_0] [i_12] [i_0] [i_15] [i_12] = ((/* implicit */unsigned char) (signed char)122);
                    arr_41 [i_0] [i_11] [i_12] [i_15] = ((/* implicit */unsigned short) var_7);
                }
                var_37 = ((/* implicit */signed char) (unsigned short)9670);
                var_38 = ((/* implicit */short) min((((/* implicit */int) arr_8 [2LL] [i_11] [i_12] [i_12])), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 3691941248560735239ULL)))))))));
            }
        }
    }
    for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 1) 
    {
        var_39 = ((/* implicit */short) (signed char)84);
        arr_46 [i_16] = ((/* implicit */short) (-(((((/* implicit */int) (unsigned short)9655)) >> ((~(-1)))))));
    }
    var_40 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-5138)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32742)) ? (((/* implicit */int) (short)16216)) : (((/* implicit */int) (short)32767))))), (min((((/* implicit */long long int) var_8)), (var_4)))))));
    var_41 = ((/* implicit */int) 450388683U);
    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) var_10))));
}
