/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247187
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) % (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)-1657))))))))));
            arr_4 [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-224))) % (max((((/* implicit */unsigned long long int) var_17)), (arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) (short)-224)) * (((/* implicit */int) (unsigned char)244)))))));
            arr_8 [i_0] [2LL] [i_2] = ((/* implicit */short) ((8864482076001428699LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)225)))));
        }
        for (short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((3339021384322087353LL), (((/* implicit */long long int) 4294967277U)))), (((/* implicit */long long int) max((var_5), ((unsigned char)157))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])) : (arr_2 [i_5] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-1684), (((/* implicit */short) arr_7 [i_0]))))))));
                        var_21 = ((/* implicit */unsigned int) (((~(arr_11 [i_0]))) | (((arr_11 [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1LL)) ? (var_16) : (var_16))))))));
                        arr_16 [i_0] = ((/* implicit */unsigned int) max((-8393470599522290705LL), (((/* implicit */long long int) (_Bool)1))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))) ? (max((((/* implicit */unsigned long long int) ((12U) >> (((arr_18 [i_0] [i_0] [i_6] [i_3]) - (17674159827682316125ULL)))))), (max((((/* implicit */unsigned long long int) var_8)), (4974692875851242424ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 3163193552U)), (arr_10 [i_0] [i_0]))))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_26 [i_8 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (max((((/* implicit */unsigned long long int) (signed char)-15)), ((+(arr_2 [i_8] [i_8 + 1])))))));
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 9; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                {
                    var_24 |= ((/* implicit */short) (-(var_7)));
                    var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) arr_28 [i_9]))))) : (max((4467570830351532032ULL), (arr_22 [(signed char)0] [i_9] [i_9] [i_10])))))));
                }
            } 
        } 
        arr_34 [i_8] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1984))) / (var_7)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 24)), (18446744073709551590ULL)))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551611ULL))))), (min((var_6), (((/* implicit */long long int) arr_31 [i_8 + 1] [i_8 + 1])))))) : (((((/* implicit */_Bool) arr_7 [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [0ULL]))) : (var_6)))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_12 = 1; i_12 < 14; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) var_1);
                arr_44 [i_11] [i_12] = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (-3339021384322087353LL))), (((/* implicit */long long int) (_Bool)1))))));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_5))));
            }
            var_28 = ((/* implicit */_Bool) max((var_28), ((!(((((/* implicit */int) arr_37 [i_12 - 1] [i_12])) >= (((/* implicit */int) arr_37 [i_12 + 1] [i_12 + 1]))))))));
            /* LoopNest 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
                    {
                        {
                            arr_53 [i_11] [i_11 - 1] [i_12] [(short)9] [i_11] = ((/* implicit */unsigned short) (+(((arr_46 [i_11 - 1]) % (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            arr_54 [i_15] [i_12] [i_14] [i_15] [i_12] = ((unsigned int) min((arr_41 [i_12] [i_11 + 1] [i_12]), (arr_41 [i_12] [i_11 - 1] [i_12])));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_17 = 1; i_17 < 14; i_17 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_36 [i_17]))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (((arr_57 [4LL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)224))))))))))));
        }
        /* vectorizable */
        for (long long int i_18 = 1; i_18 < 14; i_18 += 4) /* same iter space */
        {
            var_31 = (+(arr_61 [i_18] [(_Bool)1] [i_11 + 1]));
            var_32 = ((/* implicit */long long int) min((var_32), (((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_45 [14LL] [i_18])) : (((/* implicit */int) arr_39 [0ULL])))))));
        }
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((6LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
    }
    var_34 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)1023)), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & ((-(var_3)))))));
    var_35 -= var_7;
    /* LoopNest 3 */
    for (long long int i_19 = 0; i_19 < 15; i_19 += 1) 
    {
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    arr_70 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_14))))) ? (((/* implicit */unsigned long long int) arr_46 [i_20])) : (max((((/* implicit */unsigned long long int) (signed char)9)), (15818754066576509936ULL)))))) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_19])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_22 = 1; i_22 < 12; i_22 += 3) 
                    {
                        var_36 = ((/* implicit */short) (~(9223372036854775807LL)));
                        var_37 = ((/* implicit */unsigned int) (((-(var_11))) | (((arr_51 [i_19] [i_19] [i_21] [i_19] [i_19]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    }
                }
            } 
        } 
    } 
}
