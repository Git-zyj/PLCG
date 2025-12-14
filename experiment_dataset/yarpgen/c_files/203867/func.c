/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203867
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
    var_14 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
        var_16 *= max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((signed char) (signed char)99))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_17 = (unsigned char)216;
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)40)) & (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))) : (max((arr_4 [i_1]), (arr_4 [i_1])))));
        arr_6 [i_1] [7LL] = ((/* implicit */long long int) (((-(arr_4 [i_1]))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (2063563359U))))))))));
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_4 [i_1]) / (arr_4 [i_1]))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) 4061745111U);
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) & (12582912U)));
        arr_10 [(_Bool)1] = ((/* implicit */signed char) max(((~(arr_1 [i_2] [(signed char)6]))), (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (arr_1 [i_2] [i_2]) : (arr_1 [i_2] [i_2])))));
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_8 [i_2] [i_2]);
        var_20 = ((unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_2])), (2146151313210961230LL)))) | ((+(arr_1 [i_2] [i_2])))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            {
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */long long int) (+(4294967277U)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_16 [i_3])))))) ? (((((((/* implicit */_Bool) arr_12 [(unsigned char)15] [i_4 - 1])) ? (arr_12 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_16 [(signed char)1])))) << (((((((/* implicit */_Bool) arr_14 [i_3 + 1])) ? (arr_13 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (2860497821U))))) : (134217727ULL));
                arr_19 [i_3] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_13 [i_4 + 1])))) ^ ((~(arr_12 [i_3] [i_3])))));
            }
        } 
    } 
    var_22 = var_7;
}
