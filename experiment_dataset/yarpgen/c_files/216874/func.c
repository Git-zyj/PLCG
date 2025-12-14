/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216874
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
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] = (((~(min((1098420785), (-1899055910))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))));
                var_13 = (-(((-1098420794) & (67108863))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_14 = ((/* implicit */int) max((var_14), ((+(arr_4 [i_1] [i_0 + 1])))));
                    arr_9 [i_1] = (~(((((/* implicit */_Bool) -1739655770)) ? (-67108861) : (67108863))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = var_2;
                                var_16 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 - 1] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_17 = (i_1 % 2 == 0) ? (((((arr_4 [5] [i_5]) + (2147483647))) << (((arr_16 [i_0] [i_0] [i_1] [7]) - (974379706))))) : (((((arr_4 [5] [i_5]) + (2147483647))) << (((((((arr_16 [i_0] [i_0] [i_1] [7]) - (974379706))) + (1024836210))) - (28)))));
                        var_18 = ((((/* implicit */_Bool) arr_2 [i_1] [i_5])) ? (arr_2 [i_1] [i_1 - 2]) : (arr_2 [i_1] [0]));
                        arr_18 [i_0] [i_0] [i_2] [i_5] [i_5] &= (-(arr_2 [i_5] [i_1]));
                        var_19 &= ((((/* implicit */_Bool) arr_11 [i_0 + 1] [10] [i_5] [i_0])) ? (arr_16 [i_0 - 1] [i_1 + 1] [i_5] [i_5]) : (((arr_12 [7] [i_1 + 2] [i_1] [i_1 + 2] [i_5] [9]) & (var_10))));
                    }
                    for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_20 = ((arr_0 [i_1 - 1]) - (((((/* implicit */_Bool) arr_14 [i_1] [i_6] [i_6] [i_2] [i_1] [i_1 + 2] [i_1])) ? (arr_12 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_1] [i_6]))));
                        var_21 = arr_15 [i_0] [i_1];
                    }
                }
                for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 1; i_8 < 10; i_8 += 4) 
                    {
                        var_22 = min((-1098420786), (-1205540139));
                        var_23 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_25 [i_0 - 1] [i_1] [i_7] [4])))) ? (var_6) : (((int) arr_15 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 16383)) ? (-1525362533) : (88771966))) : (((((/* implicit */_Bool) (~(var_3)))) ? (arr_6 [i_0 - 1] [i_1] [5]) : (arr_14 [i_1] [i_0 - 1] [i_1] [i_0 + 1] [i_0] [i_7] [i_1]))));
                        var_24 = (i_1 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) ((int) ((var_5) >> (((arr_2 [i_1] [i_1]) - (1592257243))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483640)) ? (min((901492786), (var_12))) : (1573946942))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) ((var_5) >> (((((arr_2 [i_1] [i_1]) - (1592257243))) + (71056653))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483640)) ? (min((901492786), (var_12))) : (1573946942)))))));
                    }
                    for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_25 &= max((max((var_11), (arr_25 [i_0 - 1] [i_7] [i_1] [i_7]))), (arr_11 [i_9] [i_7] [i_7] [i_0 + 1]));
                        var_26 = ((/* implicit */int) min((var_26), (((((-1098420780) + (2147483647))) << (((901492786) - (901492786)))))));
                        var_27 = ((((((((/* implicit */_Bool) -1525362533)) ? ((~(1205540138))) : (max((6), (1525362512))))) + (2147483647))) >> (((((int) ((int) var_12))) - (833863706))));
                        var_28 = (+(((((/* implicit */_Bool) ((var_9) & (arr_11 [i_0] [i_0 + 1] [i_1] [6])))) ? (arr_15 [i_0 - 1] [i_1]) : (((arr_11 [i_0] [3] [i_1] [i_9]) & (var_12))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_29 = min((arr_3 [i_1]), (1073741760));
                                arr_35 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_7] [i_1] [i_11] [1]) / (arr_30 [i_10] [i_7] [i_1])))) ? (arr_4 [i_7] [i_1]) : (min((arr_25 [i_0] [i_1] [i_0] [9]), (var_4)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (var_7))) : (max((685171646), (-88771967))));
                            }
                        } 
                    } 
                    var_30 = arr_8 [i_7] [6] [i_1 + 1] [i_0];
                }
                var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_1])) ? (arr_22 [i_0] [2] [i_1]) : (arr_22 [i_0] [6] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1 - 3] [i_1]))))) : (((int) var_4)));
            }
        } 
    } 
    var_32 = (~(-1590545293));
}
