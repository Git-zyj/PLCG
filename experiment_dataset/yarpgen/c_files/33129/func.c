/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33129
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
    var_12 = var_10;
    var_13 ^= ((/* implicit */int) (unsigned short)0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] |= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [i_0])), ((unsigned char)255))))))));
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_4)) : (arr_1 [i_0])));
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_11);
                arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) + ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_10))))))));
            }
            var_14 = ((/* implicit */unsigned short) var_9);
            arr_13 [(signed char)12] [(signed char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) max((arr_2 [i_1] [i_0]), (((/* implicit */unsigned short) arr_3 [i_1])))))));
        }
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) << (((((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-9223372036854775806LL))) - (-9223372036854775795LL))) + (30LL)))));
            arr_18 [i_3] [i_0] = ((/* implicit */signed char) ((max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) ^ (var_11)))))) >= (var_5)));
        }
        var_15 = ((/* implicit */unsigned int) (((+(3355969349062433812LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_0])) >= (((/* implicit */int) arr_15 [i_0]))))))));
        var_16 *= ((/* implicit */short) ((unsigned int) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_0 [i_0] [i_0]) : (var_10))), (((/* implicit */long long int) arr_16 [i_0])))));
        arr_19 [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_0]);
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) (unsigned short)63);
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */long long int) 2147483647)) >= (3355969349062433812LL)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26))))))) ? (-3355969349062433802LL) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned short)31641)) : (arr_22 [i_4]))) - (((/* implicit */int) arr_9 [i_4] [i_4] [i_4])))))));
            }
        } 
    } 
}
