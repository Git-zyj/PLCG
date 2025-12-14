/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33484
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
    var_14 = ((/* implicit */short) min((var_10), (((/* implicit */long long int) var_12))));
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((((_Bool)1) ? (1073217536) : (((/* implicit */int) (_Bool)1)))))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((_Bool) ((((var_11) + (2147483647))) >> (((1554483445) - (1554483441)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65533)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_17 = max((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) (_Bool)1)) : (18))));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) 2080374784);
            arr_7 [i_0] = ((((/* implicit */_Bool) (~(((939524096U) << (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) (unsigned short)65063)));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2000489216U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_10)) ? (var_5) : (939524096U)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (max((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56915)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-123)))))))));
        }
        var_19 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_2)))))), ((-((((_Bool)1) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_4)))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_20 = (-((-(((/* implicit */int) (_Bool)1)))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) 5U))), (min((((/* implicit */int) (_Bool)1)), (0)))))) ? (((((/* implicit */_Bool) ((4294967295U) & (((/* implicit */unsigned int) 2147483647))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (1260074102U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23486)))));
                            arr_16 [i_0] [i_0] [9] [i_0] [i_0] = ((/* implicit */int) 35184372088831LL);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (signed char)5)) : (2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (18U)));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] = ((/* implicit */short) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) -6262856))))))), (max((((/* implicit */int) (signed char)-26)), (0)))));
            var_23 = min(((~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)224))))) ? ((~(var_3))) : (((((/* implicit */_Bool) 0)) ? (-708665557) : (((/* implicit */int) (signed char)3)))))));
        }
        for (int i_6 = 3; i_6 < 20; i_6 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) (signed char)-104)), (var_10)))));
            var_25 |= ((/* implicit */_Bool) min((((int) -32)), (((/* implicit */int) (unsigned short)18184))));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 20; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 20; i_8 += 2) 
            {
                for (signed char i_9 = 2; i_9 < 20; i_9 += 2) 
                {
                    {
                        arr_29 [i_0 + 1] [i_9] [i_9] [2LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-5))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)17842)))) : (((((/* implicit */_Bool) -2147473405)) ? (-288974861) : (2147483647)))));
                        var_26 = ((/* implicit */signed char) ((3328385576U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                var_27 = (unsigned short)8621;
                arr_33 [i_0] [i_7] [i_0] = ((/* implicit */int) ((var_10) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned int) -1815876635)))))));
            }
            for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_28 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) -10LL)) && (((/* implicit */_Bool) (unsigned short)42050)))))));
                arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) var_12)))));
                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-16))));
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 18; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            arr_45 [i_0] [i_0] [i_0] [i_12] [i_13] = ((/* implicit */_Bool) (signed char)6);
                            var_30 = ((/* implicit */int) ((signed char) 2147483647));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3328385576U)) ? (((/* implicit */int) (signed char)3)) : (2147483647)))) ? (((((/* implicit */_Bool) (unsigned short)53187)) ? (((/* implicit */unsigned int) -870876427)) : (var_1))) : (((((/* implicit */_Bool) (signed char)-96)) ? (var_1) : (((/* implicit */unsigned int) var_11))))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) -1757021319145264823LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11497))) - (4294967284U))))))));
                        }
                    } 
                } 
            }
        }
    }
}
