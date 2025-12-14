/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210217
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_9 [4] [(_Bool)1] [i_2] [i_3] [i_3] [i_2] = (((~(((int) 15037010121116656117ULL)))) <= (var_8));
                        var_11 = ((/* implicit */unsigned int) ((max((9223372036854775807LL), (8909091122656378826LL))) + (((((/* implicit */_Bool) arr_2 [7LL] [i_1 + 1] [i_1])) ? (-8909091122656378827LL) : (((/* implicit */long long int) arr_0 [i_1]))))));
                        arr_10 [(_Bool)0] [i_3] = ((/* implicit */int) (-(arr_1 [i_1])));
                        arr_11 [(unsigned char)7] [i_0] [(unsigned char)7] [i_3] = -8909091122656378799LL;
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) (+(((long long int) min((((/* implicit */unsigned int) arr_0 [3U])), (4285936540U))))));
        var_12 *= ((/* implicit */_Bool) max((((((((var_2) ? (arr_0 [i_0]) : (-339308461))) + (2147483647))) >> (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [7ULL] [7ULL])))))), (var_9)));
        arr_13 [(unsigned char)5] = ((/* implicit */unsigned char) max(((~(min((var_6), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))), (var_9)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        arr_18 [i_4] = ((arr_14 [i_4 + 2] [i_4]) / (arr_14 [i_4 - 2] [i_4]));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            var_13 -= ((/* implicit */unsigned char) (~(arr_20 [i_8 + 1] [14U] [i_4 + 3])));
                            var_14 += ((/* implicit */_Bool) arr_22 [(short)20]);
                        }
                        var_15 |= ((((arr_14 [20ULL] [8LL]) < (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? ((-(var_9))) : ((~(((/* implicit */int) var_0)))));
                        arr_30 [i_4] [7LL] [(_Bool)1] [i_6] [i_4] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_28 [i_7] [(unsigned char)6] [i_7] [18ULL] [i_7 - 1] [18LL]) : (8909091122656378798LL)));
                        arr_31 [i_4] = ((/* implicit */short) -8909091122656378799LL);
                    }
                } 
            } 
        } 
        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) 4285936520U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551612ULL)));
        arr_32 [i_4] = ((/* implicit */_Bool) var_8);
    }
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 8909091122656378835LL)), (14928532224799318186ULL))))))), (3ULL)));
}
