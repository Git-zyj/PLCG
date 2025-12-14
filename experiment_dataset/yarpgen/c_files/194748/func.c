/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194748
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) max((var_6), (var_7)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_2 [19ULL] [i_0 + 3]))));
        arr_3 [18ULL] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) max((var_4), (var_4)))) >= (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), (var_7)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), ((((~(((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0] [i_0 + 3] [18ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_3), (var_6)))))))))));
                    arr_11 [(signed char)3] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((var_1), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_8 [i_0 - 2] [i_0] [i_2 - 1])), ((unsigned char)245))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    {
                        arr_19 [i_5] [(signed char)21] [i_5] [i_5 + 1] = (~(arr_6 [i_3] [i_5]));
                        arr_20 [i_4] [i_3 - 1] [1ULL] [17ULL] [(unsigned short)1] = ((/* implicit */unsigned char) (+(((unsigned long long int) (unsigned char)10))));
                        arr_21 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (11097779198522127280ULL) : (var_1)))) ? (((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) arr_10 [i_3] [i_3 - 3] [i_4] [i_3])) : (((/* implicit */int) arr_10 [(unsigned short)0] [i_3 - 3] [i_4] [i_3])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_3] [i_3 - 3] [i_4] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3 - 3] [i_4] [(unsigned char)4]))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)10))))))))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0 - 3] [i_5 - 3] [i_3 + 1]))))) ? (((/* implicit */int) arr_12 [i_0] [i_5 + 2] [i_3 - 4])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) arr_12 [i_0 - 2] [i_5 - 3] [i_3 - 2]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 3) 
    {
        arr_25 [i_6] [(unsigned short)10] &= ((/* implicit */unsigned long long int) ((arr_5 [11ULL] [i_6] [11ULL]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16)))));
        var_20 += ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_6 - 1])))))) ? (18446744073709551610ULL) : (var_10));
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_30 [i_7] [(unsigned char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_12 [i_7] [i_7] [4ULL]), (((/* implicit */unsigned short) (unsigned char)246))))) << (((var_1) - (6317077905482822222ULL)))))) == (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551615ULL))), (((arr_29 [(unsigned short)0]) | (arr_24 [i_7] [i_7])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    {
                        arr_41 [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)19])) ? ((~(((/* implicit */int) (signed char)31)))) : (((/* implicit */int) ((var_5) >= (arr_24 [i_7] [(unsigned char)10]))))))), (((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9] [(signed char)16])))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 2) 
        {
            for (signed char i_12 = 2; i_12 < 15; i_12 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_7] [13ULL])) && (((/* implicit */_Bool) arr_29 [i_7])))))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((unsigned long long int) arr_38 [i_12] [i_11] [i_11] [(unsigned char)9])) > (((((/* implicit */_Bool) 14826711672252458982ULL)) ? (var_10) : (9178302543048381218ULL))))))));
                    arr_48 [i_7] [i_7] [i_12] [i_7] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (var_11))))))));
                    arr_49 [12ULL] [i_12] [i_12] [i_7] &= ((/* implicit */unsigned char) (~((+(15757453676736786296ULL)))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((0ULL), (((/* implicit */unsigned long long int) (signed char)-2)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (15757453676736786308ULL)));
}
