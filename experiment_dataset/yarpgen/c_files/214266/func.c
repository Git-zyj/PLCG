/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214266
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
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((unsigned short) min((arr_0 [i_0]), (arr_0 [i_0])));
        var_18 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_2 [i_0])))) > (min((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (unsigned char)221)))), (((/* implicit */int) min(((unsigned short)60268), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) (unsigned short)37068);
                        arr_15 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21033)) ? (16858403856307852477ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_18 [i_2] [13ULL] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [12LL] [i_1] [i_1] [21LL] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 + 1] [i_2] [i_2 - 1] [i_2]))) : (arr_13 [i_1] [i_1 - 1] [i_1] [23ULL] [(_Bool)1] [i_1 - 1])))) ? (((unsigned long long int) 14803054925566365266ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))))))));
                        var_20 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)160))) ? (((/* implicit */int) (unsigned short)44724)) : (((/* implicit */int) (unsigned short)65364))))));
                        var_21 ^= ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_12)))) != (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_10)))), (((short) (_Bool)1))))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((var_1) != (12734217174981150874ULL))) ? (((long long int) arr_19 [i_2 + 1] [i_2] [i_1 - 1] [(short)7])) : (((long long int) (unsigned short)44712))));
                        arr_22 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_5 + 2] [22LL] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_5 + 2] [(unsigned short)1] [i_5 + 1])) ? (((/* implicit */int) arr_10 [i_2] [i_5 + 2] [i_2] [i_5 - 1])) : (((/* implicit */int) arr_10 [i_2] [i_5 + 1] [i_5] [i_5 - 1]))))) : (((var_4) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44488)))))));
                        arr_23 [11ULL] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min(((unsigned short)65351), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)65234)) ? (7576247820830674031LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7658)))))));
                    }
                    var_24 = ((/* implicit */short) (+(7313215887551258407LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 24; i_6 += 2) 
                    {
                        for (short i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_2] [(short)21] = ((/* implicit */_Bool) var_0);
                                var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 4294966272ULL)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned short)1569))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                                var_26 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_2 + 1] [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_27 [i_2] [(unsigned short)7] [4ULL] [i_2 - 1] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_27 [i_6] [i_2] [i_6] [i_2 + 1] [i_2 + 1] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned short)20798)) ? (((/* implicit */int) arr_27 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1 - 1] [(_Bool)1])) : (((/* implicit */int) arr_27 [i_2] [21ULL] [i_2 - 1] [i_2 - 1] [i_0] [i_0])))) : ((-(((/* implicit */int) arr_27 [i_7] [i_7] [i_7 - 1] [i_2 - 1] [i_2 - 1] [i_1]))))));
                                arr_29 [20LL] [i_2] [20LL] [i_6 - 2] [1ULL] = max((((unsigned long long int) max((507597046722140640ULL), (((/* implicit */unsigned long long int) 7313215887551258419LL))))), (var_10));
                            }
                        } 
                    } 
                    arr_30 [(_Bool)1] [(short)0] [(short)0] [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (short)251)), ((unsigned short)5265)));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 |= ((/* implicit */unsigned short) max((min((arr_6 [i_8]), (((/* implicit */unsigned long long int) arr_7 [(unsigned short)6] [i_8])))), (max((5520259720223588092ULL), (arr_26 [i_8] [i_8] [i_8] [i_8])))));
        /* LoopSeq 1 */
        for (short i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) min((((((/* implicit */int) arr_5 [i_9 - 1])) == (((/* implicit */int) (_Bool)1)))), (((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_8] [(_Bool)1] [i_9 + 1]))))))))));
            arr_37 [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) max((min((-2967285709610716541LL), (((/* implicit */long long int) (short)-28067)))), (((/* implicit */long long int) (_Bool)1))));
            arr_38 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((1035082169494154250LL), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_9)))))) < (((unsigned long long int) ((((/* implicit */_Bool) 2967285709610716545LL)) ? (((/* implicit */int) (unsigned short)20790)) : (((/* implicit */int) (_Bool)1)))))));
            arr_39 [i_8] [i_8] = ((/* implicit */long long int) var_1);
            arr_40 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) arr_31 [i_8] [i_9 + 2])), (((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_9] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20821)))))));
        }
    }
}
