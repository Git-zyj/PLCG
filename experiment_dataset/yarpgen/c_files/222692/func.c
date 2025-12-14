/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222692
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((1082155053U) & (1082155055U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
        }
        var_10 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (arr_4 [i_0] [i_0] [i_0])));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) arr_4 [i_0] [i_2 + 1] [i_2 + 1]))));
            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_1 [i_0] [i_2 + 1])))))));
        }
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(unsigned char)17] [i_3 + 1] [i_3 + 1])) + (((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
            arr_14 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_3 - 1] [(unsigned short)7]))));
            var_14 = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) 1082155044U)) == (var_7))));
        }
        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
            arr_18 [i_0] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0] [i_0]))));
            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_4]))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_4])) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        }
        arr_19 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_0]))));
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) max((3212812241U), (3212812214U)))) && ((!(((/* implicit */_Bool) var_8))))))), (((unsigned char) ((long long int) arr_0 [i_5])))));
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_21 [i_5]), (((/* implicit */long long int) 3212812242U))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))) <= (1082155067U)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_5]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            arr_34 [i_9] [i_5] [i_9] = ((/* implicit */unsigned char) var_4);
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (long long int i_11 = 2; i_11 < 8; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            var_20 ^= ((/* implicit */signed char) max((max((((/* implicit */long long int) arr_28 [i_5] [i_5] [4LL])), (var_2))), (((/* implicit */long long int) min((arr_23 [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) arr_28 [i_9] [i_9] [i_9])))))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_5]))));
                            arr_45 [i_5] [i_5] [i_5] [i_5] [(unsigned short)2] [i_5] [i_5] = ((/* implicit */long long int) arr_13 [i_11 - 2] [i_9 - 1] [i_9 - 1]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_14 = 2; i_14 < 7; i_14 += 1) 
            {
                for (signed char i_15 = 1; i_15 < 9; i_15 += 3) 
                {
                    for (long long int i_16 = 1; i_16 < 8; i_16 += 4) 
                    {
                        {
                            arr_57 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (~((~(1082155053U)))));
                            var_22 = ((/* implicit */signed char) (-(max((3212812242U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3212812242U)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_17 = 3; i_17 < 9; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned short) max((max((arr_52 [(signed char)2] [i_17 + 1] [i_13] [(signed char)2]), (3212812214U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_3)))))))))));
                        var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)55)), (min((((/* implicit */long long int) (~(((/* implicit */int) arr_44 [i_5] [i_13] [i_17 - 1] [i_5] [i_18] [i_5]))))), (arr_4 [i_5] [i_13] [i_17])))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_19 = 4; i_19 < 8; i_19 += 4) 
        {
            var_25 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_5] [i_5] [i_5]))));
            arr_66 [i_5] [i_5] [9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7795))) + (3212812234U)));
        }
    }
    for (long long int i_20 = 1; i_20 < 20; i_20 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_21 = 0; i_21 < 24; i_21 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) (+((-(((((/* implicit */unsigned long long int) var_6)) + (arr_67 [i_20] [i_20])))))));
            arr_71 [i_20] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_20 - 1] [i_20] [i_20 + 1])) ? (var_6) : (((/* implicit */long long int) min((1082155040U), (1082155090U)))))))));
        }
        arr_72 [i_20] = ((/* implicit */unsigned char) ((((max((arr_68 [i_20]), (((/* implicit */long long int) arr_69 [i_20])))) << (((arr_67 [9LL] [i_20 + 1]) - (3224260433590818447ULL))))) ^ (min((arr_68 [i_20 + 1]), (arr_68 [i_20 + 4])))));
    }
    for (long long int i_22 = 1; i_22 < 20; i_22 += 4) /* same iter space */
    {
        arr_75 [i_22] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_9)))), ((~(((/* implicit */int) (signed char)-69)))))));
        var_27 = ((/* implicit */unsigned short) 1082155090U);
    }
    var_28 = var_7;
    var_29 = ((/* implicit */signed char) 1082155103U);
}
