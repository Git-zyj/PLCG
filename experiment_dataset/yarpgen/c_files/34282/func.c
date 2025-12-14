/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34282
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)7242)), (arr_1 [i_0 + 2] [8ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 - 2] [i_0 + 3]) > (((/* implicit */unsigned long long int) 789902552)))))) : (((((/* implicit */_Bool) (unsigned short)1347)) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 - 1]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_12 = ((/* implicit */short) (signed char)(-127 - 1));
            var_13 = ((/* implicit */short) arr_1 [i_0] [i_0 - 2]);
        }
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (((((/* implicit */_Bool) 12382899730313688096ULL)) ? (arr_1 [(unsigned short)12] [i_0 + 2]) : (5ULL))))), (10507032235442867218ULL))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_3] [i_3])) : (((/* implicit */int) ((short) 12382899730313688096ULL))))) ^ (((((/* implicit */int) arr_5 [i_3])) | (((/* implicit */int) (unsigned char)255))))));
            var_16 = ((/* implicit */unsigned short) 1442182624);
            arr_9 [19ULL] [19ULL] [(short)11] = ((/* implicit */short) ((((((((/* implicit */int) arr_8 [(unsigned short)22])) <= (((/* implicit */int) (unsigned char)2)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [i_2])), ((unsigned short)48649)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (((((/* implicit */_Bool) 10507032235442867218ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (var_8))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) (signed char)-114)))) | (((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)1387)) : (((/* implicit */int) (unsigned char)122)))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    arr_14 [i_2] [i_4] [(signed char)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-15)) - (1703310617)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)122)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)60497)) < (((/* implicit */int) (unsigned char)81))))) : (((/* implicit */int) max(((unsigned short)49384), (((/* implicit */unsigned short) (signed char)-104))))))) : (((/* implicit */int) var_0))));
                    var_17 = ((/* implicit */unsigned short) arr_6 [i_4] [i_4]);
                }
            } 
        } 
    }
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-114)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_1)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((var_4), (((/* implicit */short) (unsigned char)69))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)113)), (var_9)))))) : (((/* implicit */int) var_5))));
    var_19 = ((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((5ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18453)))))) != (((/* implicit */int) var_4))))))));
}
