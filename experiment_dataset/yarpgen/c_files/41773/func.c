/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41773
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
    var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1291367958U)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned short)11218))))), (1291367958U)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (max((min((3003599312U), (((/* implicit */unsigned int) (short)14332)))), (((/* implicit */unsigned int) ((unsigned char) var_9)))))));
        arr_2 [i_0] [7U] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((_Bool) 1196758635)), (arr_1 [i_0] [(unsigned char)6])))) < (((((/* implicit */_Bool) (short)-14342)) ? (((/* implicit */int) (short)-14355)) : (((/* implicit */int) (unsigned short)25782))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) (unsigned short)49691);
            var_13 ^= ((/* implicit */unsigned char) (-(0ULL)));
            arr_6 [i_0] = arr_1 [i_0] [i_0];
        }
        arr_7 [12U] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_1 [i_0] [i_0])))) + (2147483647))) >> (((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (3925947975U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))))) - (3925947965U)))));
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) 1916652591U))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14356))) : (var_4))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)38283)))))));
        arr_12 [i_2] = ((/* implicit */signed char) (~(1407987163403373390LL)));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_9 [i_3 + 1]))));
                        arr_20 [i_4] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14342)) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)183)) ? (18203073701863943093ULL) : (((/* implicit */unsigned long long int) 119793563)))))));
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13081))) > (18446744073709551615ULL)))), (arr_10 [i_2] [i_5]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    {
                        arr_26 [i_2] [21LL] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 3003599320U)), (arr_21 [i_6 - 2] [i_3 - 2]))))));
                        arr_27 [i_2] [i_2] [i_3] [i_2] = max(((-(arr_17 [i_3 + 1] [i_3 + 1] [i_6 - 1]))), (min((1675930490U), (arr_17 [(_Bool)1] [i_3 - 2] [i_3]))));
                        arr_28 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 - 1] [i_3]))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)51345))))) ? (arr_18 [i_2] [i_6 + 3] [(signed char)1] [i_2]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (4179938155U))))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((4294967277U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))))))));
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38293)) || (((/* implicit */_Bool) 2598453043125916676LL)))))) > (arr_8 [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (0ULL))))) * (((((/* implicit */_Bool) 4008177009U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196)))))))) : (((((((/* implicit */unsigned long long int) arr_8 [i_2])) >= (243670371845608506ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4)))) : (((18203073701863943116ULL) >> (6)))))));
            arr_31 [14LL] |= ((/* implicit */unsigned long long int) var_3);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_2] [i_2] [i_2]))))) * (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1291367965U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)1))))), (1682372504U)))));
            var_19 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) (+(var_2)))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_34 [i_2] [22] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) 2627568393U)) ? (((/* implicit */int) ((unsigned char) 3984212985U))) : (((/* implicit */int) (!((_Bool)1))))))));
            var_20 = max((((/* implicit */int) ((((/* implicit */_Bool) (short)11316)) || (((/* implicit */_Bool) 1682372497U))))), (66846720));
        }
    }
    var_21 = max((((((/* implicit */_Bool) var_0)) ? ((+(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_7)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
    {
        var_22 *= 3003599314U;
        arr_39 [i_10] = ((/* implicit */long long int) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
    {
        arr_42 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_11])) ? (2612594798U) : (arr_37 [i_11])));
        var_23 = ((/* implicit */unsigned char) (-(arr_41 [i_11])));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((max((arr_18 [(_Bool)1] [i_12] [i_12] [(_Bool)1]), (arr_18 [i_12] [i_12] [i_12] [8U]))), (arr_18 [i_12] [i_12] [i_12] [4LL]))))));
        arr_45 [i_12] [i_12] = ((/* implicit */unsigned short) ((unsigned int) 2612594780U));
    }
    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        arr_48 [2U] &= ((/* implicit */unsigned char) arr_16 [i_13] [i_13]);
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */unsigned long long int) -1267897686576185600LL)) : (2771322230864574659ULL))))))));
    }
    var_26 += var_4;
}
