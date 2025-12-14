/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50990
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
    var_20 = var_15;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_13 [i_0 + 2] [i_0 + 2] [i_2] [i_1] |= (+(var_3));
                        arr_14 [i_1] [i_1] [i_2] [i_3] [i_0] [i_2] = arr_0 [i_0] [i_0 + 3];
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            var_21 = ((unsigned long long int) max((var_3), (arr_2 [i_2])));
                            arr_21 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((((/* implicit */_Bool) 14ULL)) ? (0ULL) : (0ULL));
                        }
                        var_22 -= 17364382353166864998ULL;
                        var_23 = var_12;
                        arr_22 [i_0] [i_0] [i_2] [i_4] [i_4 + 1] = ((((unsigned long long int) (~(arr_15 [1ULL] [1ULL] [i_2] [10ULL])))) | (min((((((/* implicit */_Bool) var_1)) ? (5ULL) : (18446744073709551601ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        var_24 = arr_11 [18ULL] [i_0] [i_0] [i_0] [6ULL];
                        var_25 = var_8;
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_2] [i_0] [i_7 - 4] [0ULL] = 9223372036854775807ULL;
                                var_26 = 0ULL;
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    arr_37 [i_1] [i_0] [i_0] [i_1] = min((3ULL), (18446744073709551602ULL));
                    var_27 = max((13549901611992601215ULL), (18446744073709551615ULL));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            {
                                arr_42 [3ULL] [3ULL] [i_9] [i_0] [i_10 + 2] = max((((((/* implicit */_Bool) var_3)) ? (arr_15 [i_1] [i_10 + 2] [i_9] [i_9]) : (arr_15 [6ULL] [i_10 + 2] [i_9] [22ULL]))), (max((arr_15 [i_0] [i_10 + 2] [i_9] [i_10]), (0ULL))));
                                var_28 = ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [15ULL] [i_9] [i_10 - 1] [i_11])))))) ? (((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 5979699091038776709ULL)))) ? (arr_17 [i_0] [i_0] [i_0 + 1] [i_10 + 2]) : (((var_6) >> (((arr_38 [i_0] [i_1] [i_9] [i_9]) - (16433222012809973042ULL))))))) : (min((((unsigned long long int) 6536990526783085848ULL)), ((-(var_4))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 4) 
                {
                    var_29 = ((((/* implicit */_Bool) (+((-(var_11)))))) ? ((-(arr_44 [i_0 + 2] [i_1] [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((10114329385542341331ULL), (0ULL)))))))));
                    arr_46 [i_0] [i_0] [i_0] [i_1] = min(((~(var_10))), (arr_8 [i_12] [i_0] [i_0] [i_0]));
                }
                var_30 = 12043765314139806499ULL;
                var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((6ULL) != (7ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        {
                            var_32 = (+(18401898522551398070ULL));
                            arr_53 [i_1] [i_0] [i_14] = min(((~(arr_25 [i_0] [i_0] [i_0] [i_0]))), (max((arr_36 [i_0] [3ULL] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = var_4;
    var_34 = (+(var_7));
}
