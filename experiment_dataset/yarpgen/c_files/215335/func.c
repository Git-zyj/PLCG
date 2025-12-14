/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215335
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
        var_15 = ((/* implicit */long long int) min((12920806207652015697ULL), (((/* implicit */unsigned long long int) -9))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) (short)7974);
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((13628060165909853929ULL), (((/* implicit */unsigned long long int) arr_0 [i_1])))))))) < (((/* implicit */int) (unsigned char)83))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            {
                arr_10 [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) (_Bool)0);
                var_17 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 1])) ? (arr_6 [i_3 + 1] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 1]))))), (((((/* implicit */_Bool) (short)-27510)) ? (arr_6 [i_3 - 1] [i_2]) : (arr_6 [i_3 - 1] [i_3])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */_Bool) 18446744073709551615ULL);
        var_18 *= ((/* implicit */int) ((unsigned short) max(((-(((/* implicit */int) var_13)))), ((-(((/* implicit */int) (short)0)))))));
    }
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-75)), (var_11)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_5 - 1])))), (((/* implicit */int) arr_11 [i_5]))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_11))));
    }
}
