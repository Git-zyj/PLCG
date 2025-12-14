/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46260
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), ((+(((((/* implicit */_Bool) max((16572641686343831276ULL), (((/* implicit */unsigned long long int) (signed char)-125))))) ? (((unsigned long long int) var_6)) : (max((((/* implicit */unsigned long long int) (signed char)-111)), (var_13)))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 4; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (signed char)-127)), (18446744073709551615ULL)))));
                        var_18 = ((/* implicit */unsigned long long int) (((~(arr_10 [i_3] [i_3] [i_3 + 1] [i_0] [i_0] [i_0]))) >= (((var_10) + (arr_9 [i_3 + 2] [i_3] [i_3 - 3] [i_3])))));
                        arr_11 [19ULL] &= ((unsigned long long int) 23ULL);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_19 -= (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)127))))), (arr_1 [i_1 + 2] [i_2 + 2]))));
                            var_20 = 1384875463524388718ULL;
                            var_21 = max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_4 [i_1] [i_0]))))))), (((unsigned long long int) arr_5 [i_0] [i_2])));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_5 = 4; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [9ULL] |= ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)19)))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (var_10))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_22 = ((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_1] [24ULL] [i_5 - 2]))));
                            var_23 += ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_5 + 1])) ? ((~(var_6))) : (((unsigned long long int) var_8)));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        for (signed char i_8 = 2; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned long long int) var_7);
                                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            {
                                arr_33 [i_0] [(signed char)5] [(signed char)12] = (~((((~(var_14))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                                arr_34 [i_0] [i_1 + 1] = ((/* implicit */signed char) var_8);
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_29 [i_1 - 1] [i_0] [i_9] [i_10])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        arr_38 [i_12] [14ULL] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (((unsigned long long int) (signed char)-46))));
                        var_27 += arr_8 [i_0];
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_9)))) ? (((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))) : ((+(8791798054912ULL))))));
    /* LoopNest 3 */
    for (signed char i_13 = 4; i_13 < 18; i_13 += 3) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                {
                    arr_47 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_13 - 3] [i_13 + 1] [i_13 - 2])) ? (arr_42 [i_13 - 2] [i_13 + 2] [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                    arr_48 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((unsigned long long int) (~(arr_19 [i_15] [i_13 + 2] [i_13] [i_13 - 3] [i_13]))));
                }
            } 
        } 
    } 
}
