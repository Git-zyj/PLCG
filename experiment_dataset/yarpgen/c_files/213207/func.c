/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213207
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
    var_13 ^= max((max((((((/* implicit */_Bool) -1)) ? (-737678176) : (-175663924))), (((var_0) >> (((275709884) - (275709855))))))), ((+(-441165802))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((max((arr_3 [i_0] [i_1]), (var_4))) == (min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))));
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) ((arr_2 [i_0]) == (var_8)))) : (max((arr_0 [i_0]), (arr_0 [7])))))) ? (((((/* implicit */_Bool) 1107523320)) ? (var_8) : (arr_3 [i_1] [9]))) : (max((arr_3 [i_0] [i_1]), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_0 [i_1]) : (2147483631))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                arr_13 [i_0] [3] [i_1] = var_3;
                                var_14 = ((((min((((int) var_7)), (((/* implicit */int) ((arr_9 [i_0] [i_1] [i_2] [i_4]) < (var_5)))))) + (2147483647))) << (((((((((/* implicit */_Bool) max((arr_3 [5] [5]), (arr_6 [i_4] [8] [i_4])))) ? (var_11) : (max((arr_7 [i_1] [i_1] [i_3] [i_4]), (var_12))))) + (1590001873))) - (18))));
                                arr_14 [i_0] [i_0] [9] [9] [11] [i_0] = ((/* implicit */int) ((arr_3 [i_2 - 1] [i_2 - 3]) <= (min((arr_3 [i_2 - 1] [i_2 - 1]), (var_10)))));
                            }
                            for (int i_5 = 3; i_5 < 12; i_5 += 4) 
                            {
                                var_15 = var_12;
                                arr_18 [i_0] [i_0] [i_2] [i_3 - 1] [i_5 - 3] = 1049682760;
                                var_16 = (~(min((((((/* implicit */_Bool) 1107523322)) ? (2) : (238859075))), (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0] [i_1] [11] [i_5 - 3]) : (arr_9 [i_0] [i_2] [i_3] [i_0]))))));
                            }
                            for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                            {
                                var_17 = ((/* implicit */int) max((var_17), (min((max((arr_15 [i_0] [i_2 + 1] [i_2 - 3] [i_2] [i_3] [i_3] [i_3 + 2]), (arr_10 [0] [0] [0] [i_1] [i_1]))), (max((((int) arr_12 [i_0] [i_0] [2])), (arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_6])))))));
                                arr_23 [4] [4] [i_2 + 1] [i_2] [i_1] &= max((((int) max((var_3), (var_12)))), (((((var_6) + (2147483647))) >> (((/* implicit */int) ((var_1) >= (1801617362)))))));
                                var_18 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2] [i_0] [i_6]))))) : (min((max((1403542701), (1498899697))), (-918767369))));
                            }
                            var_19 = ((((/* implicit */_Bool) max((max((arr_16 [i_0] [i_0] [i_0] [i_0]), (992))), (max((var_10), (1801617349)))))) ? (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3 + 2] [i_3] [i_2] [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [i_1] [i_2] [i_2 - 2] [i_2] [i_3 + 2]) : (arr_15 [i_0] [i_1] [6] [i_0] [i_3 - 1] [i_3 + 2] [i_3 + 2]))) : (arr_12 [i_0] [i_2 - 2] [i_3 + 2]));
                            var_20 |= max((16769024), (7));
                            var_21 = min((-1107523341), ((-2147483647 - 1)));
                            var_22 = arr_3 [i_0] [i_1];
                        }
                    } 
                } 
            }
        } 
    } 
}
