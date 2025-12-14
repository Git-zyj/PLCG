/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212741
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0]));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1105008080417395874ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))) || (((/* implicit */_Bool) 1481702772027060334LL)))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((signed char) (+(arr_2 [i_0]))))));
        var_19 &= ((/* implicit */short) (+(((/* implicit */int) ((short) (-(((/* implicit */int) arr_1 [i_0] [(signed char)17]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_4 [i_1] [i_1])))));
        arr_7 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */long long int) (~(min((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27167)) % (((/* implicit */int) arr_5 [i_1])))))))))) : (((/* implicit */long long int) (~(min((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27167)) * (((/* implicit */int) arr_5 [i_1]))))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */long long int) (unsigned short)41411);
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min(((unsigned short)24111), (((/* implicit */unsigned short) var_14))))))) | (((((/* implicit */_Bool) (~(1348637329U)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-26)))) : ((-(((/* implicit */int) arr_5 [14LL])))))))))));
        arr_11 [i_2] &= ((/* implicit */unsigned short) ((arr_0 [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_2]) >= (arr_0 [i_2])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] &= ((/* implicit */signed char) ((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((1105008080417395874ULL), (17341735993292155723ULL))) != ((~(var_16)))))))));
        arr_15 [i_3] = ((/* implicit */_Bool) ((signed char) var_8));
    }
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                {
                    var_23 &= ((/* implicit */long long int) ((signed char) arr_24 [i_5] [i_5] [i_5] [i_5]));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        arr_28 [(unsigned short)14] [i_5] [i_6] [i_7] &= ((/* implicit */unsigned short) arr_18 [i_5]);
                        arr_29 [2LL] [i_4] [(short)9] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_4] [i_5] [i_7]))));
                        arr_30 [i_6] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */long long int) arr_25 [i_6]);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) arr_19 [i_8] [i_8]);
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_40 [i_8] [i_8] &= ((/* implicit */long long int) ((unsigned long long int) 1105008080417395874ULL));
                arr_41 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (arr_13 [i_8] [i_10])));
            }
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        {
                            var_26 = 17341735993292155741ULL;
                            var_27 = ((/* implicit */long long int) arr_38 [i_8]);
                        }
                    } 
                } 
            } 
            arr_49 [i_9] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_15))));
            arr_50 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */int) arr_5 [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)48)))))));
        }
        arr_51 [i_8] [i_8] = ((/* implicit */long long int) arr_21 [i_8] [i_8]);
    }
    for (long long int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
    {
        arr_55 [i_14] [i_14] = ((/* implicit */unsigned int) min((((((13545542447607226394ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : ((~(1105008080417395881ULL))))), (max((((/* implicit */unsigned long long int) var_10)), (1105008080417395913ULL)))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned short) arr_5 [i_14])))));
    }
}
