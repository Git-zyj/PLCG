/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204168
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((min((8087408518581544880ULL), ((+(var_13))))) << ((((!(((/* implicit */_Bool) 13455894277605069701ULL)))) ? ((+(var_4))) : (0ULL)))))));
        arr_4 [i_0] = arr_2 [i_0] [i_0];
        arr_5 [i_0] = arr_0 [i_0];
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_2 [i_1 + 1] [i_1 + 1]) - (var_5))))));
        arr_9 [6ULL] |= ((unsigned long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (((unsigned long long int) 4986034463796954751ULL))));
        var_20 = arr_6 [i_1];
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [i_3] = arr_13 [i_2] [8ULL] [i_2];
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            arr_23 [i_2] [i_3] [i_2] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((2ULL) < (var_13)));
                            arr_24 [i_2] [i_2] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) max((var_2), (arr_21 [0ULL] [i_3] [i_4] [i_5] [i_5])))) ? ((~(((((/* implicit */_Bool) arr_7 [i_2])) ? (4990849796104481914ULL) : (var_11))))) : ((~(var_0))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (min(((~(arr_3 [i_2] [i_2]))), (((14053344453128565021ULL) | (5277124162892050564ULL)))))));
                            arr_25 [i_2] [8ULL] [i_3] [i_3] [i_4] [i_2] [i_6] = var_2;
                        }
                        arr_26 [i_2] [i_3] [i_3] [i_3] = min((((unsigned long long int) (+(arr_13 [i_2] [i_3] [i_4])))), ((((!(((/* implicit */_Bool) 10918905551829862939ULL)))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (var_16))))))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 1) /* same iter space */
                    {
                        var_22 = ((((/* implicit */_Bool) 0ULL)) ? (8087408518581544880ULL) : (860503053379093086ULL));
                        var_23 = (+(((((/* implicit */_Bool) 18446744073709551603ULL)) ? (var_7) : (min((0ULL), (18446744073709551612ULL))))));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 1) /* same iter space */
                    {
                        var_24 = ((((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_8) : (var_9)))) % (min((((((/* implicit */_Bool) var_3)) ? (var_13) : (arr_10 [i_2]))), (((((/* implicit */_Bool) var_12)) ? (var_1) : (arr_29 [i_3] [i_3] [i_3] [i_8 - 3] [i_2] [i_2]))))));
                        arr_32 [i_2] [15ULL] [i_2] [i_4] [i_4] [i_8 - 3] = ((((arr_29 [i_2] [i_2] [i_4] [i_8] [i_8 + 2] [8ULL]) + (14ULL))) << ((((~(var_17))) - (8392602442136239881ULL))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_9 + 2] [i_9 - 1])) ? (12570194764041341046ULL) : (arr_2 [i_9 + 1] [i_9 + 1]))) > (6770892252236745664ULL)));
                            arr_36 [i_2] [i_3] [i_4] [i_2] [i_9 + 2] = var_16;
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [3ULL] [i_3] [i_4] [i_8] [i_9 + 1]))));
                        }
                    }
                }
            } 
        } 
        arr_37 [i_2] = (+(((arr_28 [i_2] [i_2]) & (arr_28 [i_2] [i_2]))));
        var_27 = min(((((!(((/* implicit */_Bool) arr_16 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_15)))))) : ((-(var_5))))), (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (8106299210914090967ULL) : (var_5)))));
        var_28 &= (+((+(var_15))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9805649967439875489ULL) == (18446744073709551615ULL))))) > (((unsigned long long int) ((var_14) & (arr_21 [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 2]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 3; i_11 < 6; i_11 += 1) 
        {
            var_29 *= arr_33 [i_10] [i_10] [i_10] [i_11] [i_11] [i_11];
            var_30 = ((/* implicit */unsigned long long int) max((var_30), ((~(max((18446744073709551615ULL), (10119820218575950641ULL)))))));
            arr_44 [i_10] [i_10] [i_10] = ((((((/* implicit */_Bool) ((unsigned long long int) var_0))) && (((/* implicit */_Bool) 1ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_13)))), (((((/* implicit */_Bool) arr_2 [i_10] [i_11 + 2])) && (((/* implicit */_Bool) 12013496510670506380ULL)))))))) : (2ULL));
        }
        var_31 = arr_7 [i_10];
        var_32 = ((var_8) ^ ((~(613576320060363867ULL))));
    }
}
