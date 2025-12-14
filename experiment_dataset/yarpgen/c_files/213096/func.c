/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213096
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
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 7980893011769584465LL))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) min((((long long int) arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0])))))));
                        var_21 = min((((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (unsigned short)28672)))))), (((((/* implicit */_Bool) ((1048576) * (((/* implicit */int) var_18))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_12))) : (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */int) (_Bool)1))))))));
                        arr_12 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) 4782011854526923903ULL);
                        arr_13 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)56218)), (((((/* implicit */int) arr_6 [i_0])) / (arr_9 [i_0] [i_0] [i_2] [(unsigned short)19])))))) ? (((((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_1] [i_2] [i_3])))) * (((var_0) / (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 911950312U))))), ((unsigned short)36863)))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) var_1);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((unsigned char) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) (short)-15220))))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned int) var_5);
            arr_23 [i_4] = ((/* implicit */signed char) (!(arr_11 [i_4] [i_4] [i_5] [9ULL] [i_5])));
            arr_24 [i_5] [i_5] [i_4] |= arr_8 [i_5];
        }
        var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-15215))) | (1950487876U))), (((/* implicit */unsigned int) ((short) arr_22 [i_4] [i_4])))))) ? (((((((/* implicit */_Bool) (unsigned short)511)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) arr_4 [i_4]))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)15228)))))) : ((-(((/* implicit */int) ((137438953470LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_7])) ? (((/* implicit */int) (short)15215)) : (((/* implicit */int) arr_11 [i_7] [i_7] [i_6] [i_4] [i_6])))), (((/* implicit */int) ((unsigned char) var_9)))))) ? (arr_22 [(unsigned char)4] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_4]), (((/* implicit */short) ((((/* implicit */int) arr_16 [i_4])) == (((/* implicit */int) (short)15872))))))))))))));
                    arr_29 [i_7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(0ULL)))) || (((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36863))) & (-5059630693126800637LL))))))));
                    arr_30 [i_4] [i_6] [i_6] [i_4] &= ((/* implicit */unsigned short) var_13);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_35 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)511)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31860)))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_11 [14U] [i_8 + 1] [i_8 + 1] [i_8] [i_8])))))));
        arr_36 [i_8] = ((/* implicit */long long int) ((arr_25 [i_8 + 1] [i_8 + 1]) * (((/* implicit */int) arr_27 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]))));
    }
    for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) 
    {
        arr_39 [i_9 + 2] [i_9] = ((/* implicit */int) (short)12);
        arr_40 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)519), (((/* implicit */unsigned short) arr_11 [i_9 + 2] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 1]))))) ^ (((/* implicit */int) var_17))));
    }
    var_26 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) (short)-15215)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)170)), ((short)-16360)))))));
}
