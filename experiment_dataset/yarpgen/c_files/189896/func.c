/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189896
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
    var_17 = ((/* implicit */int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (var_8)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = var_16;
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))))) : (((/* implicit */int) ((((/* implicit */long long int) (-(var_13)))) > ((-(arr_3 [i_0] [2LL]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (int i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_2] [i_3 - 1] [i_2] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_3)) : (arr_11 [i_3 - 1])));
                            arr_19 [i_1] [3] [i_3 - 1] [i_4 - 1] [i_3] [i_5] = var_6;
                            var_18 = ((/* implicit */long long int) ((((((/* implicit */long long int) arr_7 [i_4 + 2])) == (-4764590033080809206LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 284286499))))) : (((((/* implicit */_Bool) 284286499)) ? (1085964338) : (arr_8 [i_5])))));
                            var_19 = ((/* implicit */int) max((var_19), (((int) arr_12 [i_3 + 1] [i_3 - 2] [i_4 - 1] [i_4]))));
                            var_20 -= ((long long int) -1085964339);
                        }
                        arr_20 [10] [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3 - 2])) ? (822240138885051099LL) : (arr_11 [i_3 + 2])));
                        arr_21 [i_1] [i_3] [i_4 + 2] = (+(arr_17 [i_3 - 1] [i_3 - 1] [i_4 + 2] [i_4 - 1] [i_4 + 2]));
                        var_21 = ((/* implicit */long long int) arr_14 [i_1] [i_2] [i_3] [i_3] [14]);
                        var_22 += ((/* implicit */long long int) -841457091);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    var_23 = ((-6538473445599232533LL) / (arr_12 [i_1] [i_6] [i_6] [i_7]));
                    /* LoopNest 2 */
                    for (long long int i_8 = 3; i_8 < 15; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) arr_13 [i_1] [i_1] [i_8] [i_8 + 1]);
                                var_25 = (-((+(var_2))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6] [i_7] [i_8 - 2] [i_8] [i_8 - 1] [i_9])) ? (arr_17 [i_7] [i_7] [i_8 - 2] [i_8] [i_9]) : (arr_17 [i_7] [i_7] [i_8 - 2] [i_9] [i_9])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 13; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */int) min((var_27), ((~(((/* implicit */int) ((var_16) < (var_3))))))));
                                arr_40 [i_1] [i_1] [i_6] [i_6] [i_7] [i_10] [14LL] = ((/* implicit */int) ((((/* implicit */long long int) var_9)) / (var_14)));
                                var_28 = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) ((int) ((long long int) (+(-284286486)))));
    var_30 = var_11;
    var_31 = ((/* implicit */long long int) max((var_31), ((~(min((((/* implicit */long long int) -841457091)), (min((0LL), (-822240138885051104LL)))))))));
}
