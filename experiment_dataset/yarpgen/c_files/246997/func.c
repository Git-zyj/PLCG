/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246997
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
    var_15 &= ((((/* implicit */_Bool) (signed char)85)) ? (1941272739) : (var_6));
    var_16 = var_7;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)85))))), ((signed char)-32)));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_18 = max((4177920), (min((((/* implicit */int) (signed char)-56)), (((((/* implicit */int) (signed char)85)) / (1001572031))))));
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_0]) : (arr_0 [i_0] [i_0]))) / (((((/* implicit */_Bool) (signed char)-87)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_7 [i_0] [6] [i_2]))))));
                    arr_9 [i_0] [i_1] = (+(((int) ((((/* implicit */_Bool) arr_3 [13])) ? (var_13) : (arr_2 [i_0])))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_20 [i_5] [i_4] [i_3] [(signed char)0] [i_0] = ((/* implicit */int) (signed char)64);
                                var_20 = ((/* implicit */int) (signed char)-112);
                                var_21 -= ((signed char) ((int) 567183330));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_1] [(signed char)13] [i_6] = (signed char)20;
                        var_22 = ((int) 4177904);
                    }
                    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) 1016710057);
                            var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 243492115)) ? (((/* implicit */int) arr_14 [(signed char)0] [i_1] [i_0] [i_7])) : (((/* implicit */int) (signed char)77))));
                        }
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_3] [i_7] [i_0] [i_0] [i_7] = ((((arr_13 [2]) / (((/* implicit */int) (signed char)-77)))) % (((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_7 [i_0] [(signed char)8] [i_0])))));
                            arr_35 [i_1] [(signed char)4] [i_9] [i_1] [11] [(signed char)4] = ((/* implicit */signed char) arr_16 [(signed char)0] [12] [3] [3] [i_0] [i_0]);
                        }
                        var_25 = ((/* implicit */int) ((arr_19 [i_1] [6] [(signed char)7] [i_1] [i_1] [i_1] [i_1]) == (arr_19 [3] [3] [(signed char)17] [(signed char)17] [(signed char)15] [i_7] [(signed char)17])));
                    }
                    for (int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        arr_38 [(signed char)15] [6] [7] = ((int) arr_33 [i_0] [2] [i_3] [i_3] [i_3] [i_10] [i_0]);
                        var_26 |= ((/* implicit */int) arr_23 [i_0] [i_1] [i_3] [i_3] [7] [i_10]);
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    arr_41 [i_0] [i_1] [14] = ((/* implicit */signed char) ((int) (signed char)54));
                    arr_42 [6] [i_0] [i_11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_11] [7] [i_11])) ? (((/* implicit */int) arr_36 [i_0])) : (arr_16 [i_0] [i_0] [10] [(signed char)17] [i_11] [i_11])));
                }
            }
        } 
    } 
}
