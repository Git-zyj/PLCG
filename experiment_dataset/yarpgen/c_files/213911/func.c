/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213911
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)32767)), (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))))))) ? (((/* implicit */int) arr_2 [i_0])) : ((+((+(-1354328353)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = -1354328353;
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [(short)8] [i_1]))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            arr_13 [i_2] = ((/* implicit */_Bool) ((unsigned char) (~(1354328352))));
            arr_14 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */int) arr_7 [1U] [i_3])), (1354328352))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        arr_21 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 1194118101120611548ULL))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_5] [i_4 - 1] [i_4]), (arr_11 [i_2] [i_4 + 1] [i_4 + 1]))))) : (((((/* implicit */_Bool) arr_17 [i_2] [(short)5] [i_4] [(short)5])) ? (((long long int) 3525251828550512146ULL)) : (((/* implicit */long long int) ((int) (short)32767)))))));
                        arr_22 [i_2] [i_3] [i_4] [8] = ((/* implicit */short) 1121566962U);
                        arr_23 [i_2] [i_2] [i_4 - 1] [i_4] [i_5 + 1] = ((/* implicit */int) ((long long int) min((arr_20 [i_2 + 1]), (arr_20 [i_2 + 1]))));
                        var_14 = ((/* implicit */signed char) min((1354328352), (((/* implicit */int) min((arr_10 [i_2 + 1] [i_5 + 1]), (arr_10 [i_2 + 1] [i_5 + 1]))))));
                        var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1354328353)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_5 + 1])) ? (2305840810190438400LL) : (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) min(((+(2308817113U))), (((/* implicit */unsigned int) min((var_3), (var_1)))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            arr_26 [i_6] [(unsigned short)5] [i_6] = ((/* implicit */unsigned short) (~(((((631149846) + (((/* implicit */int) arr_18 [1ULL] [i_6] [i_6])))) / (((/* implicit */int) var_7))))));
            var_16 = ((/* implicit */unsigned short) ((((arr_20 [i_2 + 1]) <= (arr_20 [i_2 + 1]))) ? (min(((~(((/* implicit */int) arr_18 [5ULL] [i_2] [i_6])))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1354328353) : (-1446136808))))) : (((/* implicit */int) arr_18 [i_2] [i_6] [i_2]))));
            arr_27 [i_2 + 1] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) arr_9 [i_2 + 1] [i_6])));
            arr_28 [i_2] [i_6] = ((/* implicit */short) (-(max(((((_Bool)0) ? (var_3) : (((/* implicit */int) (unsigned short)13958)))), ((~(arr_19 [i_6])))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    {
                        arr_36 [i_7] [i_8] [i_8 + 1] [i_8] [i_2 + 1] [i_8 + 1] = ((int) 1354328353);
                        arr_37 [(short)10] [i_7] [i_7] [6LL] [i_9] = ((/* implicit */int) (short)-364);
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_2] [i_7] [i_8])) ? ((+(((/* implicit */int) arr_15 [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
                        arr_38 [i_2] [i_2] [i_7] [5LL] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)-32515))) ? (((/* implicit */int) arr_3 [i_2] [i_2 + 1] [i_8 + 1])) : (((((/* implicit */_Bool) arr_25 [i_9] [i_7] [i_8 - 1])) ? (((/* implicit */int) arr_11 [i_9] [i_2 + 1] [i_8])) : (((/* implicit */int) arr_7 [i_8] [i_7]))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
        }
        arr_39 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-69)) ? (max((((/* implicit */long long int) max((2620230727U), (((/* implicit */unsigned int) (unsigned short)56101))))), (arr_17 [i_2 + 1] [i_2 + 1] [(signed char)0] [i_2 + 1]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (2130706432LL)))));
    }
    var_19 = ((/* implicit */signed char) min((var_5), (((/* implicit */long long int) var_7))));
}
