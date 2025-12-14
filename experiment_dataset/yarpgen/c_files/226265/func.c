/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226265
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
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) (~(2892089210U)));
            arr_6 [i_0] = max((max((((((/* implicit */_Bool) arr_0 [(short)8] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3082400275U))), (arr_2 [i_0] [i_1]))), (((unsigned int) min((var_5), (2497083234U)))));
        }
        for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
        {
            var_15 *= ((/* implicit */short) 1402878108U);
            /* LoopSeq 3 */
            for (short i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1])) ? (var_6) : (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_10 [i_3 - 1])))))));
                var_17 = var_9;
            }
            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                arr_16 [i_4] [i_2 + 2] [i_0] = ((((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18961))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) var_4))))));
                var_18 -= arr_1 [i_0] [i_0];
            }
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_19 = max((arr_12 [i_5]), (min((((/* implicit */unsigned int) (short)-18962)), (((((/* implicit */_Bool) arr_14 [i_0])) ? (arr_12 [i_0]) : (2892089210U))))));
                var_20 = arr_9 [i_0 - 1];
            }
        }
        for (unsigned int i_6 = 3; i_6 < 9; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                var_21 = arr_7 [i_6 + 3] [i_6 - 2] [i_6 + 3];
                /* LoopSeq 2 */
                for (short i_8 = 3; i_8 < 10; i_8 += 4) 
                {
                    var_22 = ((/* implicit */short) var_5);
                    arr_27 [i_0] [i_6 + 2] [i_7] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_3 [i_0 + 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [1U] [i_8] [i_8]))) : (((1112082855U) << (((/* implicit */int) (!(((/* implicit */_Bool) 1402878097U)))))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_21 [i_6 + 1] [i_6 + 2] [i_6 - 1]), (arr_21 [i_6 + 2] [i_6 + 2] [i_6 + 1])))) ? (((/* implicit */int) ((short) arr_21 [i_6 + 1] [i_6 + 3] [i_6 + 3]))) : ((-(((/* implicit */int) var_8))))));
                    var_24 &= ((short) 3004458310U);
                }
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_30 [i_0 + 2] [i_9] [i_7] [i_9] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) 2413238015U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22396))) : (var_12))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)22411)))))));
                    arr_31 [i_0] [i_0] [i_7] &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_7])))))));
                    var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(0U)))) ? (1337613486U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), ((short)13513))))))) ^ ((-(arr_29 [i_0 + 4] [i_0] [i_0 + 1] [i_9])))));
                }
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_6]), (arr_4 [i_0 + 2])))) ? (((unsigned int) arr_4 [i_0 + 3])) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0 - 1]) <= (arr_4 [i_6 + 3])))))));
            }
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                var_27 = min((arr_7 [i_0] [i_0] [i_10]), (((unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_12))))));
                var_28 = ((/* implicit */unsigned int) var_3);
                arr_34 [i_6 + 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_9)))));
            }
            var_29 += ((((/* implicit */_Bool) 0U)) ? (var_9) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)18962), (var_3))))) : (((((/* implicit */_Bool) arr_19 [i_0 + 4] [i_0 - 1])) ? (arr_23 [i_6 - 3] [i_0 + 2] [i_0 + 2]) : (var_6))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                var_30 = ((/* implicit */short) 3386407859U);
                arr_39 [i_0 - 2] [i_11] [i_6 - 2] [i_0 - 2] = ((/* implicit */unsigned int) var_2);
                var_31 = ((/* implicit */short) 3522026709U);
                arr_40 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] &= ((unsigned int) (-(arr_4 [i_0])));
            }
            /* vectorizable */
            for (short i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                arr_43 [i_0] = var_7;
                var_32 = ((/* implicit */unsigned int) ((short) 3142563590U));
                arr_44 [i_6 - 1] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_12])) ? (1152403725U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18947)))));
                var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
            }
            var_34 *= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_11 [i_0]))))));
        }
        for (short i_13 = 2; i_13 < 11; i_13 += 3) 
        {
            var_35 = ((/* implicit */short) arr_17 [i_13] [i_13] [i_0 + 2]);
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_42 [i_0] [i_0 + 2] [i_13] [i_13 - 1]))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_13 + 1])) << (((arr_42 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2]) - (3806543717U))))))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            arr_52 [i_0] [i_0] [i_0] |= (short)-3600;
            arr_53 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_50 [i_14] [i_14] [i_14]))));
        }
        for (short i_15 = 2; i_15 < 10; i_15 += 3) 
        {
            var_37 = arr_48 [i_0];
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((short) arr_4 [i_0 - 1])))));
            arr_58 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
            var_39 = ((/* implicit */short) arr_25 [i_0 + 2] [i_15 + 2]);
        }
    }
    var_40 = var_2;
}
