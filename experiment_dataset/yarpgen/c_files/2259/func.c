/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2259
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_0 [i_0 + 1]))));
                arr_8 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 4]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4513942477994939217LL)) ? (-1466267860699166719LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                var_19 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) != ((-(var_2)))));
            }
            var_20 = ((/* implicit */unsigned int) ((unsigned char) (-((~(arr_0 [i_1]))))));
        }
        arr_9 [i_0 + 2] &= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) var_15))))) - (((((/* implicit */unsigned long long int) var_17)) + (1122249013323784686ULL)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_21 ^= ((/* implicit */short) var_2);
        arr_12 [i_3] = ((/* implicit */unsigned short) (-(min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_3])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_4 = 3; i_4 < 12; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (int i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_22 += ((/* implicit */signed char) arr_13 [i_5]);
                            arr_21 [i_3] [i_5] [i_5] [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_5] [i_5])) ? (14454344384959993LL) : (((/* implicit */long long int) arr_0 [i_4 + 1]))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-6578577202751889996LL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (arr_4 [i_3] [i_4] [i_5]))) : (arr_0 [i_3])));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_12))));
                var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) var_9))));
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((var_12) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 3] [i_4 + 2])) ? (arr_0 [i_8]) : (var_17))))));
                        arr_27 [i_3] [i_8] [i_8] [i_3] [i_9] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_3]))));
                        arr_28 [i_9] [i_4] [i_8] [i_9] [i_3] [i_9] &= ((/* implicit */_Bool) (+(var_7)));
                        arr_29 [i_3] [i_4 + 2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(16924762912987646187ULL)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4])))));
                        arr_30 [i_3] [i_9] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)61))));
                    }
                } 
            } 
        }
        for (short i_10 = 3; i_10 < 12; i_10 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) arr_1 [i_10])))));
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                for (unsigned short i_12 = 4; i_12 < 11; i_12 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            var_28 &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (var_7) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))))));
                            var_29 = ((/* implicit */signed char) var_12);
                            var_30 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_22 [i_3] [i_10 - 3] [i_11] [i_3])))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37209))) - (arr_0 [i_3]))))), (((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned char)192)))))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3280607684U)) + (var_10)));
                        }
                        for (unsigned char i_14 = 2; i_14 < 13; i_14 += 2) 
                        {
                            arr_44 [i_14] [i_12] [i_3] [i_10 + 3] [i_3] = ((/* implicit */unsigned short) var_14);
                            var_32 = ((/* implicit */unsigned char) 13088987094253078632ULL);
                        }
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_12]))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-5036292779715417003LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))))))));
                        var_34 = ((/* implicit */signed char) var_17);
                    }
                } 
            } 
        }
        for (short i_15 = 3; i_15 < 12; i_15 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_16))))))) * (((((/* implicit */unsigned long long int) arr_43 [i_3] [i_3] [i_3] [i_3] [i_3])) / (((arr_41 [i_15 + 2] [i_15] [i_15 - 1] [i_3] [i_3] [i_3] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_3] [i_3] [i_3] [i_15] [i_15 - 2] [i_15] [i_15]))) : (var_2))))))))));
            var_36 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_34 [i_3])) * (((/* implicit */int) var_6))))));
            arr_48 [i_3] [i_15] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) 413545296)) ? (arr_17 [i_3] [i_3] [i_3] [i_15] [i_15 - 2] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_3] [i_3])), (arr_1 [i_3]))))))))));
            arr_49 [i_3] [i_15 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_4) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14094))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (var_13) : (((/* implicit */int) arr_38 [i_3] [i_15 - 2] [i_15 + 2] [i_3]))))))))) : (min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (arr_17 [i_3] [i_3] [i_15] [i_15 - 1] [i_15 + 3] [i_15]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))));
        }
    }
    var_37 = ((/* implicit */unsigned int) var_2);
    var_38 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_11)))));
}
