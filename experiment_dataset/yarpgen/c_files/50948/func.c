/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50948
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0 - 1]));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30881)) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) var_0)))))));
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) << (((((/* implicit */int) arr_2 [i_2] [i_2])) - (20564)))))) == (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (var_8) : (arr_1 [i_2])))));
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 3; i_4 < 13; i_4 += 3) 
            {
                arr_18 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2] [1U] [1U])) && (((/* implicit */_Bool) var_4))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    arr_21 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) var_1);
                    arr_22 [i_3] [i_2] [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_4] [i_5]);
                    var_11 = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_6 [1U]))))));
                }
                var_12 += ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                var_13 = ((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_2]);
                arr_23 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4 - 1] [i_4 + 1])) || (((/* implicit */_Bool) var_10))));
            }
            /* LoopSeq 3 */
            for (short i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                arr_28 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25407))) == (arr_16 [i_6 + 1] [i_6 - 1] [i_2])));
                var_14 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)55772))));
            }
            for (int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                var_15 -= ((/* implicit */unsigned short) (~(((((((/* implicit */int) (signed char)-113)) + (2147483647))) >> (((var_8) - (1974280286U)))))));
                arr_31 [i_2] = ((/* implicit */long long int) (signed char)48);
            }
            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_8 + 1])) ? (((((/* implicit */_Bool) arr_32 [i_2] [i_8] [i_8] [i_8])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))))) : (((/* implicit */unsigned long long int) 2534531101U))));
                arr_34 [i_2] [i_2] = ((/* implicit */signed char) (~(457292392U)));
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned char i_10 = 4; i_10 < 10; i_10 += 4) 
                    {
                        {
                            arr_42 [i_2] [i_3] [i_8] [i_9] [i_9 - 1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_8 + 1] [i_2])) > (((/* implicit */int) arr_3 [i_8 - 1] [i_2]))));
                            var_17 += ((/* implicit */int) arr_25 [i_3] [i_3] [i_8]);
                            arr_43 [i_2] [i_3] [i_8] [i_9] [i_2] = ((/* implicit */signed char) ((var_4) / (((/* implicit */int) (unsigned short)65535))));
                        }
                    } 
                } 
            }
            var_18 = ((/* implicit */signed char) ((unsigned short) arr_26 [i_2] [i_2] [i_3]));
            /* LoopNest 2 */
            for (unsigned short i_11 = 3; i_11 < 13; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        arr_49 [i_2] [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -6455766540039483443LL))))) >> (((arr_12 [i_2] [i_11 - 2] [i_11 + 1]) - (1995347952U)))))) : (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -6455766540039483443LL))))) >> (((((arr_12 [i_2] [i_11 - 2] [i_11 + 1]) - (1995347952U))) - (3266742595U))))));
                        arr_50 [i_2] [i_11] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (short)32018);
                    }
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
        {
            arr_53 [i_2] [i_2] [i_13] = ((/* implicit */int) (signed char)-113);
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    for (unsigned char i_16 = 2; i_16 < 12; i_16 += 4) 
                    {
                        {
                            arr_62 [i_2] [i_2] = ((/* implicit */long long int) (unsigned char)255);
                            arr_63 [i_2] [i_2] [i_14] [i_15] [i_2] = ((/* implicit */unsigned short) (-(arr_58 [i_16 - 1] [i_2] [i_16 + 1] [i_16] [i_16 - 2] [i_16] [i_16 + 1])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
        {
            arr_66 [i_2] [i_2] = ((/* implicit */signed char) ((((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_2] [i_17]))))) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_59 [i_2] [i_2])) >> (((((/* implicit */int) var_0)) - (38499))))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)52602)) << (((5971018458275471883ULL) - (5971018458275471872ULL)))));
        }
        arr_67 [i_2] = ((/* implicit */signed char) arr_35 [i_2] [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (signed char i_18 = 3; i_18 < 14; i_18 += 4) 
    {
        arr_70 [i_18] [i_18] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_18])) ? (((/* implicit */int) arr_2 [i_18] [i_18])) : (((/* implicit */int) (unsigned short)52602))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_6))));
    }
    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_4)) : (14919504418371542258ULL)))) ? (((/* implicit */unsigned long long int) min((-3018026857850941708LL), (((/* implicit */long long int) (unsigned short)65535))))) : (max((((/* implicit */unsigned long long int) var_8)), (var_7))))) - (((/* implicit */unsigned long long int) var_4))));
}
