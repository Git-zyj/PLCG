/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212559
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
    var_19 = ((/* implicit */long long int) var_9);
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_17), (var_12))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 24; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (arr_1 [(_Bool)1])));
                    var_22 = ((/* implicit */long long int) var_2);
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0]);
                        arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (-713818409330694155LL) : (var_18))));
                    }
                }
            } 
        } 
        var_23 = (~(((var_17) | (var_14))));
        var_24 = ((/* implicit */int) ((((var_0) + (9223372036854775807LL))) >> (((((int) var_13)) + (1030238172)))));
        var_25 = ((/* implicit */int) -713818409330694157LL);
    }
    /* LoopSeq 4 */
    for (int i_4 = 2; i_4 < 19; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) ((((-713818409330694181LL) + (9223372036854775807LL))) << (((713818409330694164LL) - (713818409330694164LL)))))))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4])))))))) != (min((((((/* implicit */long long int) arr_9 [i_4] [i_4 - 2])) + (-713818409330694150LL))), (arr_13 [i_4] [i_4]))))))));
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_21 [i_5] = ((((min((((((/* implicit */int) var_9)) << (((/* implicit */int) arr_2 [i_5])))), (-1326784307))) + (2147483647))) << (((/* implicit */int) arr_2 [i_5])));
        var_27 &= ((/* implicit */int) (-(((long long int) min((((/* implicit */long long int) var_2)), (-713818409330694169LL))))));
        var_28 = ((/* implicit */long long int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) 1967350123)) ? (((/* implicit */int) arr_2 [i_5])) : (-1)))), (((arr_13 [i_5] [i_5]) - (((/* implicit */long long int) var_8)))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [2LL])) ? (arr_15 [i_5]) : (((/* implicit */long long int) arr_20 [i_5])))))))))));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 5073015920970852792LL)) ? (((/* implicit */long long int) var_11)) : (min(((((_Bool)0) ? (-713818409330694150LL) : (((/* implicit */long long int) 1162749497)))), (713818409330694149LL)))));
    }
    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        var_30 = ((/* implicit */long long int) arr_4 [(_Bool)1] [(_Bool)1]);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_31 = ((((/* implicit */_Bool) min(((-(var_4))), (((/* implicit */long long int) ((var_8) <= (1016078492))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_30 [i_6] [i_6] [i_6] [i_6]))))) : (min((((/* implicit */long long int) min((arr_9 [i_9] [i_7]), (-806211950)))), (((var_15) & (((/* implicit */long long int) 806211917)))))));
                        arr_32 [i_6] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) -713818409330694150LL)) && (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 806211917)) || (((/* implicit */_Bool) var_13))))))));
                        arr_33 [i_6] [i_7] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (-3LL) : (((/* implicit */long long int) 5)))), ((-(arr_29 [i_6] [i_6] [i_8] [i_9]))))))));
                        var_32 = ((/* implicit */int) var_4);
                    }
                } 
            } 
        } 
        var_33 = min((((/* implicit */int) ((((806211941) >> (((var_17) + (123949510))))) >= (((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6] [i_6])) ? (806211949) : (var_8)))))), (min((((/* implicit */int) ((-5559238613757038491LL) >= (((/* implicit */long long int) arr_4 [6] [6]))))), (min((-287965941), (((/* implicit */int) var_10)))))));
        arr_34 [i_6] = arr_22 [i_6] [i_6];
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_34 = var_14;
        var_35 &= (_Bool)1;
        var_36 += ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_30 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_7 [12]))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_36 [(_Bool)1]) : (-13LL))) : (min((5486896093101598905LL), (((/* implicit */long long int) arr_4 [24] [10])))))));
    }
}
