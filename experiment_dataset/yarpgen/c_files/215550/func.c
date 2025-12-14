/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215550
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((131071ULL) != (((/* implicit */unsigned long long int) arr_10 [i_1] [i_2])))))) * (((34359738367LL) >> (((131071ULL) - (131070ULL)))))));
            arr_12 [i_2] [i_1] = ((/* implicit */long long int) (~(((0ULL) & (((/* implicit */unsigned long long int) arr_10 [i_1] [i_2]))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_1])) & (arr_19 [i_1] [i_3] [i_4] [i_5] [i_1])));
                            arr_23 [i_1] [i_3] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((1358272885U) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_1] [i_3] [i_1] [i_5] [i_6]) != (arr_20 [i_1] [i_3] [i_4] [15LL] [i_3])))))));
                            arr_24 [i_6] = ((/* implicit */long long int) ((16290349446722497762ULL) << (((arr_5 [i_3]) - (8877004664723681997LL)))));
                        }
                    } 
                } 
            } 
            var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 18446744073709551608ULL))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (long long int i_8 = 3; i_8 < 18; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            var_14 |= (-(-5603704053717763393LL));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((arr_14 [i_8 - 1] [i_8 - 1] [i_8 + 2]) ^ ((~(1082771583379027908ULL)))))));
                            arr_33 [i_1] [i_1] [i_3] [9LL] [(_Bool)1] [i_9] = ((/* implicit */long long int) 7965891166041048842ULL);
                        }
                        arr_34 [10U] [10U] [13LL] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_8 - 1] [i_8 - 1] [(_Bool)1] [i_8 - 2])) ? ((~(3657165950U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -3350502889329450896LL))))))));
                        var_16 &= -4637302799247459710LL;
                        arr_35 [i_7] [i_7] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [18ULL] [i_3] [7LL] [i_3] [i_1] [i_8 - 2]))));
                    }
                } 
            } 
        }
        for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            arr_39 [i_1] [i_10] [1LL] = ((/* implicit */unsigned int) 945548864035921998ULL);
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 20; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_11 - 1])) && (((/* implicit */_Bool) max((-7768994933922721125LL), (-2104408602185670076LL))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13612547244669205437ULL)) ? (((/* implicit */unsigned long long int) -9223372036854775805LL)) : (959405383629817637ULL)));
                        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (0ULL)))) < (((/* implicit */int) ((-2104408602185670079LL) == (-2857763297615153308LL)))))))));
                    }
                } 
            } 
            var_20 = ((0ULL) - (((((0ULL) * (18446744073709551615ULL))) / (((arr_42 [i_10] [i_1] [i_1] [i_10] [i_1] [i_1]) * (18446744073709551615ULL))))));
        }
        arr_44 [i_1] [i_1] = ((/* implicit */long long int) arr_19 [i_1] [i_1] [i_1] [5LL] [i_1]);
        arr_45 [i_1] |= max(((~(-2104408602185670076LL))), (((/* implicit */long long int) ((arr_43 [0ULL] [i_1] [i_1] [i_1] [i_1]) & (arr_43 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        var_21 = max((((/* implicit */unsigned long long int) (-(-2LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [1U] [i_1]))) * (33554431ULL))));
        var_22 = ((/* implicit */long long int) (~((~(var_7)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 4) 
    {
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    var_23 |= ((/* implicit */_Bool) arr_7 [i_13 + 2]);
                    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_13] [i_13] [i_13] [i_14 + 1] [i_13])) ? (arr_20 [i_13] [i_14] [i_14] [i_14 + 1] [i_14]) : (((/* implicit */long long int) 1874866422U))))) ? (((9223372036854775807LL) - (((-2104408602185670076LL) & (((/* implicit */long long int) 47851455U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((7693460596490725060LL) & (((/* implicit */long long int) 4247115841U)))) == (((/* implicit */long long int) 4247115840U))))))));
                    arr_53 [i_13] [i_14] [i_13] = ((/* implicit */_Bool) max((47851427U), (((/* implicit */unsigned int) arr_13 [i_14] [i_13]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(6775784688753042815LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_3)))) : (var_4))) ^ (((var_4) + (var_4)))));
    var_26 &= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((496LL) < (2104408602185670075LL))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
}
