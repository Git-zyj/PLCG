/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242418
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
    var_11 = ((/* implicit */short) min((var_11), ((short)126)));
    var_12 = ((/* implicit */short) (((+((+(((/* implicit */int) var_2)))))) == ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)-11058))))) ? (((/* implicit */int) arr_0 [(short)8] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) + (((/* implicit */int) var_0))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_14 = ((/* implicit */short) min((var_14), ((short)-19452)));
            var_15 = ((short) ((short) var_6));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_16 = ((short) (short)126);
                var_17 ^= ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_1))));
                var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_1]))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1]))))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */int) (short)26976)) + (((/* implicit */int) var_1)))))) : (((/* implicit */int) (short)20741)))))));
            }
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((~(((/* implicit */int) var_3)))) / (((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) + (4765))))))))));
            var_21 = (short)-141;
            var_22 = ((short) ((((/* implicit */int) (short)26976)) % (((/* implicit */int) (short)-26970))));
        }
        for (short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            arr_11 [(short)0] [i_4] = var_0;
            var_23 |= arr_9 [i_4] [i_4] [i_4];
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_17 [i_4] [i_0] [i_4] [i_0] &= arr_15 [i_0] [i_4] [i_5] [i_5];
                        var_24 *= ((/* implicit */short) (-(((/* implicit */int) min((arr_7 [i_6]), (arr_7 [i_0]))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((short) (short)-5663))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */int) ((short) arr_16 [i_7 + 1] [i_7 + 1] [(short)3] [i_7 - 1] [i_7 - 2] [(short)4]))), (((((/* implicit */int) arr_16 [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 2] [i_7])) * (((/* implicit */int) (short)-18224)))))))));
                            var_27 = ((/* implicit */short) min((var_27), (var_0)));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_5] [i_7 + 1] [i_0] [(short)6]))))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_6] [i_7 + 1] [i_7] [i_4])) : (((/* implicit */int) ((short) (short)-141))))))));
                            arr_22 [i_0] [(short)11] = ((/* implicit */short) min(((+(((/* implicit */int) (short)32744)))), ((+(((/* implicit */int) arr_4 [i_7 - 1] [i_0] [i_0] [(short)15]))))));
                        }
                        for (short i_8 = 1; i_8 < 15; i_8 += 1) 
                        {
                            var_29 = var_3;
                            arr_25 [i_8] [i_8] [i_8] [i_6] [i_8] [i_4] [(short)7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_4] [i_5])) > (((((/* implicit */int) var_9)) & (((/* implicit */int) var_0))))))) << (((((/* implicit */int) var_8)) + (13892)))));
                            arr_26 [i_8] [i_6] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */int) (short)-146)) & (((/* implicit */int) (short)32745))))));
                        }
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
        }
        for (short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
        {
            arr_31 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) (((-(((/* implicit */int) var_0)))) > (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)1]))))) : (((/* implicit */int) ((short) arr_14 [i_0] [i_0] [(short)8] [i_9] [i_9])))))));
            var_31 = ((/* implicit */short) min((((((/* implicit */int) arr_7 [i_9])) >> (((((/* implicit */int) arr_3 [i_9] [i_9] [i_9])) + (13311))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
            var_32 = ((/* implicit */short) min((var_32), (arr_27 [i_0] [(short)2])));
            arr_32 [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_0]))))) ? ((-(((/* implicit */int) (short)10017)))) : ((-(((/* implicit */int) arr_28 [i_9]))))));
        }
        arr_33 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) ((short) var_7)))))) ? (((/* implicit */int) (short)729)) : (((/* implicit */int) min((arr_21 [i_0] [i_0] [i_0] [i_0] [(short)0]), ((short)-28825))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) (short)30600)))))));
        arr_38 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
    }
    for (short i_11 = 4; i_11 < 21; i_11 += 1) 
    {
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_11] [i_11]))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            var_35 *= ((/* implicit */short) ((((((/* implicit */int) arr_39 [i_11])) - (((/* implicit */int) var_4)))) == (((/* implicit */int) var_10))));
            var_36 *= ((/* implicit */short) ((((/* implicit */int) (short)9834)) == (((/* implicit */int) (short)-32745))));
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_34 [i_11 - 4]))));
            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (+(((/* implicit */int) var_9)))))));
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            var_39 = ((/* implicit */short) (((-(((/* implicit */int) (short)146)))) - (((/* implicit */int) arr_43 [i_11] [i_11 + 3] [i_11 + 2]))));
            var_40 = ((/* implicit */short) ((((/* implicit */int) (short)10010)) | (((/* implicit */int) var_2))));
            var_41 = var_1;
            /* LoopNest 2 */
            for (short i_15 = 1; i_15 < 23; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    {
                        var_42 = arr_50 [(short)16] [i_14];
                        arr_55 [i_11] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) arr_54 [i_11] [i_15 - 1] [i_16])) : (((/* implicit */int) arr_42 [i_11] [i_14]))));
                    }
                } 
            } 
        }
    }
    var_43 = ((/* implicit */short) min((var_43), (var_9)));
}
