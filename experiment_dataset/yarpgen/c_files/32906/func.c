/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32906
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */short) max((min((arr_3 [i_0] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) * (((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) var_6))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) min((arr_4 [i_0 + 1] [i_0 + 1]), (arr_4 [i_0 + 1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0 + 1] = ((/* implicit */_Bool) ((4U) * (4294967289U)));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) var_11)))))));
        arr_15 [i_5 - 1] [i_5] = ((/* implicit */unsigned int) arr_14 [i_5 - 1]);
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_21 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                    arr_22 [i_5 - 2] [i_5] [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967292U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_5 - 1] [i_7] [i_5] [i_7]) && (arr_18 [i_5 - 1] [i_6 + 3] [i_5] [i_6 + 1]))))) : ((~(max((((/* implicit */unsigned int) arr_17 [i_5 + 1] [i_7])), (var_4)))))));
                    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (+(arr_20 [i_7] [i_6] [i_5 - 1])))))));
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        arr_26 [i_8] |= ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (arr_11 [i_8] [i_8] [i_8] [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 5642367523324336546ULL)) ? (((/* implicit */unsigned long long int) -308736369)) : (12875623149840723241ULL))))), (((/* implicit */unsigned long long int) min((arr_8 [i_8]), (((/* implicit */unsigned int) (_Bool)1)))))));
        arr_27 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((arr_11 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) min((arr_13 [i_8]), (((/* implicit */long long int) (signed char)-83)))))))));
    }
    for (int i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        arr_30 [i_9] = ((/* implicit */unsigned long long int) var_12);
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) min((min((((arr_18 [i_9] [i_9] [i_9] [i_9]) ? (2672662676821659108ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) var_3)) && ((_Bool)1)))), (min(((short)-4211), ((short)-10034))))))));
            arr_33 [i_9] [i_10 + 1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) var_0))), (((unsigned long long int) var_6))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                arr_38 [i_10 + 1] [i_11] &= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((18U) >> (((max((17179958521314971858ULL), (((/* implicit */unsigned long long int) 2515782814U)))) - (17179958521314971839ULL)))))) : (var_0)));
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 4) 
                    {
                        {
                            arr_43 [i_9] [i_9] [i_10 + 1] [i_11] [i_12] [i_13] [i_13 - 2] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_9] [i_10 + 1] [i_13 - 1] [i_12 + 3] [i_13 + 1])) ? (((/* implicit */unsigned long long int) 520093696U)) : (arr_40 [i_9] [i_13 - 1] [i_11] [i_12] [i_13 + 1]))));
                            arr_44 [i_13 - 2] [i_12 + 1] [i_11] [i_10 + 1] [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned int) arr_6 [i_9] [i_10] [i_12 + 3]))) ? (((((/* implicit */_Bool) arr_40 [i_9] [i_10 + 1] [i_11] [i_12] [i_13])) ? (14564239750719508727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_9] [i_11] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9]))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */short) (signed char)-60)), (var_5))), (((/* implicit */short) var_9)))))));
                            var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_8)), (var_4)));
                            var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)18810)) / (((/* implicit */int) (signed char)-58))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) min((var_8), (arr_1 [i_11] [i_12 - 2]))))))) : (var_14)));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */int) arr_4 [i_14 + 1] [i_14 + 1])) > (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9] [i_14 + 1] [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_9]))) & (var_4))))))));
            var_23 = min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (((unsigned int) var_14)))), (((/* implicit */unsigned int) ((signed char) var_12))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (max((var_3), (((((/* implicit */_Bool) arr_45 [i_14 + 1] [i_14 + 1] [i_14 + 1])) ? (((((/* implicit */_Bool) var_10)) ? (2263817814U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10014))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_5)))))))))));
        }
    }
}
