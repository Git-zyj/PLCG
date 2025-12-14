/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50522
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0 - 2] [i_0] [i_2] [4LL] = ((/* implicit */int) ((_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_0] [i_1 + 1]))))));
                            var_15 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_13)) | (13235547822355734720ULL)));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 14801074940646676296ULL))))) >= (var_9)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (-(-4036117670748709989LL)))) ? (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) -101372123)) : (var_2))) : (((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3])))))))))));
                                arr_16 [i_6 + 1] [i_0] [i_4] [i_0] [i_0 - 3] = ((/* implicit */signed char) ((arr_4 [i_0] [i_1] [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 - 2] [i_4] [i_0] [i_0])))), (((_Bool) var_3))))))));
                                arr_17 [i_0] [i_0] [i_1 - 1] [i_4] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~((~(((long long int) arr_2 [i_4])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 1) 
            {
                {
                    arr_26 [i_7] [4ULL] [4ULL] [i_7] |= ((/* implicit */unsigned long long int) ((_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) * (18446744073709551615ULL)))));
                    var_19 = ((/* implicit */long long int) arr_23 [i_7] [i_7] [i_7]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_20 = max((arr_31 [i_10] [i_13]), (((((unsigned long long int) 274877644800ULL)) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_13] [1ULL] [i_11] [1]))) / (arr_34 [i_12] [i_12 - 1])))))));
                        var_21 &= ((((((/* implicit */_Bool) arr_21 [i_12 - 1] [i_12 - 1] [i_12 - 1])) ? (arr_21 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_21 [i_12 - 1] [i_12 - 1] [i_12 - 1]))) != (max((((unsigned long long int) arr_28 [i_13])), (min((arr_14 [i_10]), (4105445196382402558ULL))))));
                        arr_36 [i_12] [i_12] [i_12] [i_10] = ((/* implicit */signed char) ((long long int) ((max((var_4), (((/* implicit */unsigned long long int) var_7)))) >= (max((6332839349880506869ULL), (((/* implicit */unsigned long long int) arr_1 [i_10])))))));
                    }
                } 
            } 
        } 
        arr_37 [i_10] = ((/* implicit */_Bool) ((signed char) (+(var_6))));
    }
    for (int i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        var_22 *= ((/* implicit */_Bool) ((unsigned long long int) 4036117670748709989LL));
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 7; i_16 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (7059055910336874968LL)));
                    var_24 ^= ((/* implicit */unsigned long long int) arr_0 [i_15] [i_15]);
                }
            } 
        } 
    }
    var_25 = 14341298877327149058ULL;
}
