/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225350
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)28882)) ? (((/* implicit */int) (unsigned short)28867)) : (((/* implicit */int) (unsigned short)6))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), ((+(max((arr_6 [(unsigned short)8] [i_1] [(unsigned short)12]), (var_11)))))));
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned short) var_8);
                                var_21 = ((int) (unsigned short)6);
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)0))) ? (382925275) : (((/* implicit */int) (!(((/* implicit */_Bool) 24)))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                            {
                                var_23 = ((((/* implicit */_Bool) min((arr_4 [16] [i_2]), (var_16)))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_2])) >= (((/* implicit */int) arr_4 [(unsigned short)1] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11))))));
                                var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1])) & (((/* implicit */int) (unsigned short)28869))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)28887))) : (var_17)))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                            {
                                var_25 ^= ((/* implicit */unsigned short) ((int) arr_12 [2]));
                                var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33810)) ? (arr_3 [14]) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)36638)) ? (((/* implicit */int) (unsigned short)61413)) : (((/* implicit */int) (unsigned short)36667))))))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                            {
                                arr_21 [18] [(unsigned short)1] [i_2] [(unsigned short)1] [17] = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((unsigned short) var_8))), (max((((/* implicit */int) (unsigned short)65534)), (var_6))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)1800)) ? (var_17) : (((/* implicit */int) (unsigned short)28900)))), (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)36667))));
                                var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((int) (unsigned short)0))))));
                            }
                        }
                    } 
                } 
                arr_22 [(unsigned short)11] = ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1])) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((max((var_3), (-105241346))) <= (((((/* implicit */_Bool) arr_20 [i_0])) ? (var_10) : (arr_17 [i_1] [i_0] [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_29 = ((min((((int) (unsigned short)7)), ((~(arr_9 [i_0 + 1] [i_1 - 2] [i_8] [16] [i_9]))))) ^ (((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1])));
                            var_30 ^= ((/* implicit */unsigned short) arr_9 [11] [(unsigned short)15] [i_8] [i_9 - 1] [i_9 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
            {
                {
                    arr_34 [7] [7] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)41185)), (-382925288)))) ? (var_0) : (max((105241338), (382925281)))));
                    var_31 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 105241338))));
                }
            } 
        } 
    } 
    var_32 *= ((/* implicit */unsigned short) var_10);
}
