/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242831
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_2]))) / (var_6)))) < (((((/* implicit */long long int) 3886854864U)) & (-9213454152207778366LL))))), ((!(((/* implicit */_Bool) 3075751423U))))));
                        var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_1])))) + (((((/* implicit */int) var_17)) + (((/* implicit */int) arr_0 [i_2]))))));
                    }
                } 
            } 
            arr_9 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(2072705500423350392LL)))) ? ((~(arr_2 [i_0]))) : (((/* implicit */long long int) 1U))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((arr_3 [i_1]) / (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
            arr_11 [i_0] [9LL] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_8))), (((/* implicit */unsigned int) arr_0 [i_1]))));
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_13 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (9213454152207778365LL) : (144115188075855856LL))), (min((((/* implicit */long long int) var_4)), (arr_2 [i_0])))));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_16 [i_4] [17U] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)36992)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) min((arr_15 [i_4]), (arr_15 [i_4]))))));
        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) 3755198764U)) : (5332896822248121961LL)));
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_14 [i_4] [i_4]))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_4] [i_4])), (arr_15 [i_4])))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6715841247170143541ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) : (4034503971U)));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4])) ? (max((max((var_2), (((/* implicit */unsigned long long int) arr_22 [i_4] [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) | (var_19)))))) : (min((((((/* implicit */unsigned long long int) 6836742729372910478LL)) & (var_9))), (((/* implicit */unsigned long long int) (unsigned char)0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (~(max((arr_20 [i_4] [i_5]), (-429031884102005887LL)))));
                                arr_28 [i_4] [i_5] [i_6] [i_5] [i_8] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) (~(arr_27 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5]))))))), ((~(((/* implicit */int) var_3))))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_5] [i_6]))))) ? (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_26 [14U] [i_6]))) - (var_13))))))));
                                arr_29 [i_4] [i_4] [i_5] [i_4] [i_8] &= ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_6]))) & (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) << (((arr_27 [i_4] [i_5] [i_6] [i_4] [12LL] [i_8]) - (1329422468U)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_23 [i_4] [i_5] [i_8])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    {
                        arr_38 [i_10] [i_11] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) var_15);
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_24 [i_11] [i_11])), (var_19)))) : (((((/* implicit */_Bool) arr_33 [(unsigned char)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_10]))) : (max((((/* implicit */unsigned long long int) var_17)), (arr_30 [i_4] [i_4] [i_4]))))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            {
                arr_43 [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_14))));
                arr_44 [i_13] &= ((/* implicit */unsigned int) arr_33 [i_12]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            {
                                arr_60 [i_15] [10U] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_59 [i_14] [i_14] [i_14] [i_14])) ? (((unsigned long long int) arr_54 [i_15] [i_16] [i_17] [(signed char)0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10889))) : (0LL))))));
                                arr_61 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) var_1);
                                arr_62 [i_18] [i_16] [i_16] [4U] [i_14] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) (~(908440426U)))) & (min((0LL), (((/* implicit */long long int) (unsigned char)126)))))), (((/* implicit */long long int) ((unsigned int) arr_34 [i_14] [i_15])))));
                            }
                        } 
                    } 
                } 
                arr_63 [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)61)), (var_15))))))), (arr_42 [i_14] [i_15])));
            }
        } 
    } 
    var_27 &= ((/* implicit */long long int) 18446744073709551615ULL);
}
