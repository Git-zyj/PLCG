/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197946
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
    var_11 &= ((/* implicit */int) min((var_2), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1479097848773520559LL)))) ? (arr_4 [i_1] [i_0]) : (arr_4 [i_0] [16LL])));
            arr_7 [(signed char)16] [i_1] [(signed char)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) var_10)) : (var_2)));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] [i_2] = (!(((/* implicit */_Bool) ((arr_8 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : (1125899873288192ULL)))));
            arr_12 [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) arr_10 [i_2] [i_0] [i_0])))) : (((/* implicit */int) arr_9 [i_2]))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
        {
            arr_15 [i_0] [(short)5] [i_0] |= ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (_Bool)1)))));
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_3 [(short)1] [(short)1] [(short)1]))));
        }
        arr_16 [i_0] [i_0] = ((/* implicit */short) min((min(((+(var_5))), (((/* implicit */unsigned long long int) arr_4 [i_0] [17U])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (3195046535U)))) && (((/* implicit */_Bool) (((_Bool)1) ? (arr_13 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [(short)12])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) /* same iter space */
        {
            arr_19 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_4 - 1] [i_4 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4 + 1]))))))) : (min((arr_1 [i_0]), (((/* implicit */long long int) var_3))))));
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((unsigned long long int) ((unsigned short) arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_9 [i_4])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) 1942665786490651983LL))));
            arr_24 [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-23701)) + (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned short)1893)) : (((/* implicit */int) var_6))));
        }
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_20 [i_0] [i_0])), (arr_5 [i_0] [i_0] [i_0])))) ? (min((((long long int) arr_1 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_0] [i_0])) : (((/* implicit */int) arr_14 [12ULL]))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)44))))))))));
    }
}
