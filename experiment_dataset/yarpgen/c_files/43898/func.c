/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43898
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
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */short) var_10)), (var_19)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(arr_6 [i_1])));
            arr_8 [i_1] = ((/* implicit */short) min(((-((-(arr_5 [i_0] [i_0]))))), ((~(max((arr_3 [(_Bool)1]), (((/* implicit */unsigned int) (_Bool)0))))))));
            arr_9 [i_0] [i_1] [i_1] = arr_2 [(_Bool)0];
            arr_10 [i_1] [i_1] = ((/* implicit */short) max(((+(((/* implicit */int) arr_2 [i_0])))), (min((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))), ((-(((/* implicit */int) arr_6 [i_1]))))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (min((((/* implicit */unsigned int) arr_6 [(short)12])), (min(((~(arr_3 [i_0]))), (min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_1 [(short)13]))))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_17 [(short)9] [i_2] [i_2] [i_3] = ((/* implicit */signed char) arr_14 [i_2]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_22 [i_0] [(short)7] [i_0] [i_0] [i_0] [i_2] [(short)21] = (-(max((max((arr_11 [i_3] [i_4]), (((/* implicit */unsigned int) arr_14 [i_2])))), (((/* implicit */unsigned int) min((arr_20 [i_0] [i_2] [i_2] [i_0]), (arr_1 [i_0])))))));
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [(signed char)16] = ((/* implicit */short) arr_19 [i_0] [i_0] [(signed char)14] [i_4] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_0] [i_3] [i_7] [i_7] [i_7]);
                            var_23 += ((/* implicit */signed char) max(((-((-(((/* implicit */int) arr_29 [i_0] [(short)16] [i_0] [i_0] [i_0] [i_7] [i_7])))))), (((/* implicit */int) max((((/* implicit */short) arr_16 [i_3] [i_3] [i_3])), (min((((/* implicit */short) arr_27 [i_0] [i_2] [i_3] [i_6] [i_7])), (arr_2 [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            arr_35 [i_2] [i_2] [i_3] [i_2] [i_9] [i_2] = ((/* implicit */_Bool) min((arr_5 [i_0] [i_8]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
                            arr_36 [(short)13] [i_3] [i_9] [i_3] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max(((signed char)-80), ((signed char)-17)))), (arr_28 [i_0] [i_2] [i_3] [i_8] [i_2])));
                            arr_37 [i_8 + 1] [i_2] [(short)9] [i_8 - 3] [i_8] [(signed char)7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_34 [i_0] [i_2] [i_2] [i_0] [i_9] [i_0]))));
                            var_24 = ((/* implicit */short) arr_31 [i_2] [i_2] [(signed char)4] [i_8 - 1]);
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
            {
                arr_40 [i_0] [i_2] = ((/* implicit */short) arr_28 [i_0] [i_2] [i_2] [i_2] [i_2]);
                arr_41 [(_Bool)1] [i_2] [i_2] = ((/* implicit */_Bool) arr_3 [i_0]);
            }
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
            {
                arr_44 [i_0] [i_2] [i_11] [i_2] = (+((~(min((arr_28 [i_0] [i_2] [i_11] [i_2] [i_2]), (((/* implicit */unsigned int) arr_42 [(short)14] [i_2] [i_2])))))));
                arr_45 [i_0] [i_2] [i_11] [i_0] = ((/* implicit */short) arr_16 [i_2] [i_2] [i_2]);
            }
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
            {
                arr_49 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-19))))));
                var_25 = ((/* implicit */unsigned int) arr_1 [i_0]);
                arr_50 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_2] [i_12] [i_12])))))));
            }
            var_26 = ((/* implicit */unsigned int) min((var_26), (arr_3 [i_0])));
            var_27 += ((/* implicit */_Bool) arr_43 [i_2] [i_2] [(short)20]);
        }
        var_28 = ((/* implicit */unsigned int) max(((short)-17898), ((short)-20392)));
    }
    var_29 &= ((/* implicit */unsigned int) var_7);
    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((min((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) var_13)), (var_11))))), (((/* implicit */unsigned int) var_8)))))));
    var_31 = ((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((+(((/* implicit */int) max((var_0), (var_3))))))));
}
