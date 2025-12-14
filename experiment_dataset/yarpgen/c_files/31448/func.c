/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31448
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
    var_12 = ((/* implicit */long long int) var_7);
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_5))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) ((unsigned char) 5915364910715877294LL));
        var_15 *= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_4)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_16 *= ((/* implicit */unsigned char) arr_2 [i_0]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */int) arr_3 [i_1 + 3] [i_2 - 2]))));
                var_18 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) 5915364910715877264LL)))));
                var_19 = ((/* implicit */unsigned int) min((var_19), ((+(arr_1 [i_0])))));
                var_20 = ((/* implicit */int) ((unsigned int) (unsigned short)18976));
                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [4] [i_1 + 2] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_2 - 1] [i_2]))));
            }
            for (unsigned char i_3 = 2; i_3 < 22; i_3 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) (+(max((-5915364910715877294LL), (-5915364910715877295LL)))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_3 - 1])) ? (var_1) : (((/* implicit */int) arr_3 [i_3 - 2] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_3] [i_0])))))));
            }
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 4; i_6 < 22; i_6 += 3) 
                {
                    var_24 = (!(((/* implicit */_Bool) arr_10 [i_4] [i_5 - 1])));
                    var_25 = ((/* implicit */short) var_3);
                }
                var_26 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_3 [i_5 + 1] [i_5 + 1])) & (((/* implicit */int) var_7)))));
            }
            for (signed char i_7 = 4; i_7 < 21; i_7 += 2) 
            {
                var_27 = arr_10 [i_0] [i_0];
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)248)) << (((/* implicit */int) (_Bool)1)))))));
                var_29 = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (unsigned char i_8 = 2; i_8 < 22; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (signed char i_10 = 1; i_10 < 22; i_10 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_9] [(unsigned char)3] [i_0] [i_9] [i_9]))))) ? (((/* implicit */long long int) ((-1563276670) | (((/* implicit */int) (signed char)-37))))) : (((5915364910715877294LL) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            var_32 = ((/* implicit */signed char) (+(arr_18 [i_4] [i_8] [i_9] [i_10 + 1])));
                            var_33 = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_8] [(_Bool)1] [i_8 + 1] [i_8 - 1] [i_8 - 1]))));
            }
            for (signed char i_11 = 1; i_11 < 22; i_11 += 4) 
            {
                var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46559)) & (((/* implicit */int) arr_23 [i_11] [(_Bool)1] [i_0] [i_11] [(_Bool)1] [i_11] [i_11 - 1]))));
                var_36 = ((/* implicit */unsigned char) var_4);
            }
            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_4]))));
        }
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (long long int i_14 = 1; i_14 < 21; i_14 += 4) 
                {
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_12] [i_13] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_12] [i_13] [i_12] [i_0]))) : (var_9)))) ? (3082666399439781078LL) : (((/* implicit */long long int) var_2)))) != (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))))))));
                        var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)37))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
    {
        var_40 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_11))))))), ((+(-5915364910715877304LL)))));
        var_41 = ((/* implicit */unsigned char) (+(((int) arr_18 [i_15] [21] [21] [21]))));
    }
    var_42 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (unsigned char)12)) ? (-5915364910715877302LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17340))))), (((/* implicit */long long int) max((3002493881U), (((/* implicit */unsigned int) -1798538287)))))))));
}
