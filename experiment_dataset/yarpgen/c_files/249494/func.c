/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249494
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        var_17 = (+((-(arr_1 [i_0] [i_0 - 2]))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 += ((((/* implicit */_Bool) min((arr_5 [i_0]), (arr_5 [i_0])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                                var_19 ^= ((/* implicit */long long int) max((-1888402056), (2096640)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) (-((-(((/* implicit */int) var_14))))));
                    var_21 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1] [i_1 - 3] [i_1 + 1]))))), (max((var_5), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    var_22 = ((/* implicit */_Bool) var_0);
                    var_23 = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_24 = ((/* implicit */signed char) arr_7 [i_5] [i_5]);
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_9))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57296)) ? (2001836832U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        arr_18 [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            arr_24 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_5 [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) var_0)), (var_1))))))));
            var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (34359738367ULL)));
            var_28 = ((/* implicit */int) arr_15 [i_7]);
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 4) 
        {
            var_29 = ((/* implicit */unsigned short) var_16);
            var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) -791105395079371145LL)))));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)91))));
                            var_32 = ((/* implicit */int) var_11);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_12 = 1; i_12 < 9; i_12 += 2) 
        {
            arr_36 [i_12] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -791105395079371120LL)), (((((/* implicit */_Bool) (unsigned char)236)) ? (arr_2 [i_6]) : (((/* implicit */unsigned long long int) max((2147483643), (var_6))))))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        var_33 = arr_1 [i_12 + 1] [i_12 - 1];
                        var_34 = ((/* implicit */unsigned long long int) var_15);
                        arr_45 [i_6] [i_12] [i_13] = ((/* implicit */unsigned char) (_Bool)0);
                    }
                } 
            } 
            var_35 |= ((/* implicit */signed char) -1308078740);
            var_36 = ((/* implicit */signed char) arr_1 [i_6] [i_12]);
        }
        var_37 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)66)), (((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6])) ? (var_7) : (max((var_2), (((/* implicit */unsigned long long int) arr_21 [i_6] [i_6] [i_6]))))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
    {
        arr_49 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 15718639136989413180ULL)) ? (8388607) : (((/* implicit */int) (_Bool)1)))) : (var_15)));
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) arr_35 [i_15])) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) var_13))))));
    }
    var_39 |= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (var_13));
    var_40 = (-(var_6));
}
