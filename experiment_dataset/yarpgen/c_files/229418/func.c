/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229418
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
    var_12 |= var_5;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = arr_1 [(unsigned short)10] [(unsigned short)10];
        arr_2 [i_0] [(_Bool)1] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) - (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [14ULL])))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0] [12LL] [i_0])) ? (var_2) : (((/* implicit */long long int) (+(arr_3 [(_Bool)1])))))) >> (((arr_1 [i_0] [i_0]) + (8578206760433191384LL)))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5829936222539203097ULL)));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 36028796750528512LL)) && ((((_Bool)1) || (((/* implicit */_Bool) var_4)))))));
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [2ULL])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)87)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [7LL] [i_0])) >> (((var_2) - (1218529293122140265LL))))))))))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_16 |= ((/* implicit */int) ((((((/* implicit */int) ((arr_10 [0LL] [i_3] [2U]) && (((/* implicit */_Bool) arr_7 [i_2] [15LL]))))) > (((/* implicit */int) (_Bool)1)))) ? (((max((var_2), (36028796750528505LL))) | (((((/* implicit */_Bool) arr_14 [i_5] [i_4 + 1] [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [9LL] [i_3] [i_4 + 1]))) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_6)), (576460752302899200LL))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [(_Bool)1] [i_3] [i_3])))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    {
                        arr_24 [i_6] [i_0] = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_6] [i_7 + 1] [i_6]))) % (arr_17 [0U] [i_2] [i_6] [i_7])))) && (((/* implicit */_Bool) ((arr_7 [6LL] [i_7]) - (arr_7 [i_0] [i_0])))))))) : ((~(((((/* implicit */long long int) var_10)) % (arr_1 [12U] [14U])))))));
                        arr_25 [(_Bool)1] [i_2] [i_6] [(signed char)14] [(unsigned short)15] = ((/* implicit */unsigned short) ((long long int) arr_7 [i_7] [(short)4]));
                    }
                } 
            } 
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_2))));
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((var_4) >> (((var_2) - (1218529293122140265LL)))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_11 + 1] [i_11 - 3] [i_11] [i_11 - 3] [i_11 + 1])) ? (((arr_35 [i_11 - 1] [i_11 - 3] [i_11 - 3] [i_11 - 2] [i_11 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_31 [i_11 + 1] [i_11 - 1] [i_11 + 2] [i_11 - 2])), (var_0)))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_27 [i_11]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? (((/* implicit */int) ((((unsigned int) arr_28 [i_9])) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_27 [(unsigned short)12]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_36 [i_8] [1LL] [18ULL] [i_10] [(unsigned short)16] [i_11]), (((/* implicit */unsigned short) arr_33 [i_8] [i_9] [i_10] [2LL]))))))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8]))) == (max((((arr_26 [14U]) << (((274877906943LL) - (274877906919LL))))), (max((((/* implicit */unsigned int) var_0)), (var_10)))))));
                        arr_37 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_33 [(short)1] [i_10] [i_11 - 2] [i_10])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_27 [i_8])))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_40 [i_12]) + (arr_40 [i_12]))))));
                    arr_44 [i_8] [i_8] [i_12] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_42 [10U] [i_8] [i_13]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_31 [i_8] [i_12] [i_13] [15U]))))) ? ((((_Bool)1) ? (-6145605799556802411LL) : (((/* implicit */long long int) 401805476U)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_41 [i_8] [i_12] [22]), (((/* implicit */unsigned short) arr_31 [i_8] [i_8] [i_8] [i_8])))))))) + ((+(max((arr_34 [i_8] [i_12] [i_13]), (((/* implicit */long long int) arr_27 [i_8]))))))));
                    arr_45 [i_8] [(_Bool)1] [i_8] = ((/* implicit */int) (signed char)-1);
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                arr_53 [i_15] [i_12] = ((/* implicit */_Bool) min(((+(arr_27 [i_8]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_26 [i_8])) : (arr_40 [i_8])))) ? (max((((/* implicit */unsigned int) arr_43 [i_8] [i_8] [i_8] [(_Bool)1])), (arr_26 [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((max(((~(var_4))), (var_4))) <= (((/* implicit */long long int) var_7))))));
                                arr_54 [i_14] [i_12] [i_13] [i_14] [(signed char)1] = ((/* implicit */unsigned short) arr_32 [i_12]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) arr_47 [i_8] [i_8] [i_8] [23U]);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
}
