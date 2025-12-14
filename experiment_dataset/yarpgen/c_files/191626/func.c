/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191626
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        arr_8 [i_3 - 4] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) var_3)) ? (((arr_1 [i_0 - 2]) + (arr_6 [i_0 - 2] [i_0 - 2] [i_3 - 3] [2ULL]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))));
                        var_15 = arr_2 [i_0] [i_1] [i_2];
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (min((var_10), (549754765312ULL)))));
                            arr_12 [i_1] [i_1] [i_2] [i_1] [6ULL] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) 12298706130267245044ULL))))))));
                            var_17 &= ((((/* implicit */_Bool) (((+(549754765292ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))))) ? (16831670735136461721ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_11 [i_0] [14ULL] [i_2] [i_1] [i_0])))))))));
                            var_18 = ((/* implicit */unsigned long long int) ((var_1) != (min((arr_4 [i_1]), (arr_2 [i_0 - 2] [i_0 + 1] [i_3 + 1])))));
                            arr_13 [i_1] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1] [i_4]))))))));
                        }
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), ((((!(((/* implicit */_Bool) arr_9 [i_3] [16ULL] [i_3 - 1] [i_2])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 549754765312ULL)))))))) : ((+(32505856ULL)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [22ULL] [i_5] = ((((/* implicit */_Bool) ((var_12) % (arr_1 [i_0])))) ? (((245684778459304559ULL) / (arr_10 [i_0 - 1] [i_1] [1ULL] [i_2] [i_5]))) : (((unsigned long long int) arr_4 [i_1])));
                        var_20 ^= ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 1] [i_5 + 1] [i_5 - 1])) ? (arr_11 [i_0] [i_0 + 1] [i_5 - 2] [i_5 + 3] [i_5 - 1]) : (arr_6 [i_0 + 1] [i_0 + 1] [i_5 + 1] [i_5 + 1]));
                        var_21 = arr_14 [i_0] [i_1] [i_2] [i_1];
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        var_22 = (+(min((((245684778459304559ULL) % (arr_0 [16ULL]))), (35184355311616ULL))));
                        arr_20 [i_1] [i_1] = (((~(18446743523954786323ULL))) ^ ((~(arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_1]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_23 = 18201059295250247056ULL;
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (25ULL)));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (19ULL) : (arr_22 [12ULL] [i_1] [i_1] [i_2]))))))));
                            var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_22 [i_0 - 2] [i_1] [20ULL] [i_2]))))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (arr_4 [i_2])));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            arr_29 [12ULL] [i_1] [i_2] [i_7] [i_1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2040975120655039692ULL)))) ? (((13489837502744126365ULL) / (arr_6 [i_1] [2ULL] [i_7 + 3] [i_9]))) : (((((/* implicit */_Bool) 18201059295250247056ULL)) ? (var_5) : (var_7)))))) ? ((+(((arr_7 [i_2]) * (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 13489837502744126365ULL)) ? (245684778459304553ULL) : (18446743523954786323ULL))) != (((14847800099069061448ULL) ^ (18446744073709551615ULL))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_29 += (+(((10502472194899939225ULL) & (7750013268859174861ULL))));
                            arr_34 [i_0 - 2] [i_1] [i_1] [i_2] [12ULL] [i_10] = 18201059295250247075ULL;
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            arr_38 [i_2] [i_2] [i_2] [i_2] [i_1] = arr_37 [i_7 + 3] [i_7 - 2] [i_7 - 4] [i_7 + 3] [i_7 + 3];
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0])))));
                            arr_39 [i_0 - 2] [i_1] [i_0 - 2] [i_7] [1ULL] = 255ULL;
                        }
                        arr_40 [i_0] [i_1] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) arr_10 [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 - 3] [i_7 + 2]))))), (549754765312ULL));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) (!(((arr_41 [i_0] [i_1] [i_2] [i_12] [i_0 - 2] [i_12]) != (arr_32 [i_0] [i_1] [i_1] [i_12] [i_0 - 2] [i_2])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((unsigned long long int) ((min((13489837502744126359ULL), (arr_25 [i_0] [5ULL] [i_0] [i_0] [i_13]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_13] [i_1] [i_13] [7ULL] [i_13])))))))))));
                            var_33 = max(((~((~(16506664813574195578ULL))))), (12442769439419439234ULL));
                            var_34 ^= ((arr_31 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2]) * (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_12]))))), ((+(arr_22 [i_1] [i_2] [i_12] [i_12]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) arr_1 [i_14 + 1])) ? (arr_5 [i_2]) : ((~((~(25769803776ULL)))))))));
                                var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5673072676613737503ULL)) ? (((/* implicit */int) ((9223354444668731392ULL) != (arr_33 [i_14 + 1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551588ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_37 = ((((/* implicit */_Bool) min((var_3), (((((/* implicit */_Bool) var_3)) ? (1028767514325807101ULL) : (13682815588398490552ULL)))))) ? (min((((9223354444668731403ULL) >> (((13489837502744126359ULL) - (13489837502744126298ULL))))), (((3462514305661569413ULL) << (((var_7) - (3625487121246387873ULL))))))) : (var_9));
}
