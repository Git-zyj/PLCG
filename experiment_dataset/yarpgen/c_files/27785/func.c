/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27785
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
    var_17 -= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)41912))))))), (min(((-(((/* implicit */int) (signed char)-66)))), (((/* implicit */int) var_14))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [5] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)57502)) - (57489)))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)127)) - (122))))))))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)69))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [4] [i_0] [i_0] [4] [i_0] = ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? ((~(-1701843272))) : (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4] [i_4])));
                            arr_15 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)21540)) != (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) << (((((/* implicit */int) arr_13 [(signed char)8] [i_1] [i_1] [i_3] [i_4])) - (16023)))));
                            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (-((((_Bool)1) ? (arr_0 [i_2]) : (((/* implicit */int) var_10))))));
                            arr_17 [i_3] = (((-(((/* implicit */int) arr_7 [(unsigned short)12] [i_4] [i_4] [(signed char)6])))) < (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]) | (-536870912))));
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) ((((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) <= (arr_11 [5] [i_1] [(unsigned short)6] [i_1] [i_1] [i_1])))) << (((((/* implicit */_Bool) (signed char)63)) ? (((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))))))));
                            arr_21 [i_5] [i_5] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_9 [i_3] [i_3] [6] [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))))));
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_0)))) : ((~(var_16))))))));
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))))) ? (-1440454623) : ((~(((/* implicit */int) (_Bool)0)))))) != (((/* implicit */int) (unsigned short)56392))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) arr_18 [i_0] [(signed char)5] [(signed char)5]);
                    arr_29 [i_7] [i_6] [i_0] [i_0] = min((min(((!((_Bool)1))), ((!(((/* implicit */_Bool) arr_10 [i_7] [i_6] [i_7] [i_7])))))), ((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_19 [(unsigned short)0] [i_7] [i_0] [(signed char)2])) : (arr_0 [(signed char)1])))))));
                    arr_30 [i_0] [i_6] [i_7] = ((/* implicit */signed char) (unsigned short)30364);
                }
            } 
        } 
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) * (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0])) / (((/* implicit */int) (unsigned short)56371))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_24 [i_0])))) : (((((/* implicit */int) arr_28 [i_0] [i_0])) / (arr_18 [i_0] [i_0] [i_0])))))));
    }
}
