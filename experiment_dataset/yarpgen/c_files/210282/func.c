/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210282
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
    var_20 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (min((var_17), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_13) : (-8355540818685073617LL))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_1 + 1] [i_1 - 1]);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_22 *= ((/* implicit */unsigned long long int) min((arr_5 [i_1 + 1]), (((arr_3 [i_3 + 2]) ? (((/* implicit */int) arr_3 [i_3 + 3])) : (((/* implicit */int) arr_3 [i_3 + 2]))))));
                        var_23 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 4895506510669062462ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) : (0LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 4895506510669062462ULL)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (signed char)-113)))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_2] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned long long int) ((min((576460752303423487ULL), (((/* implicit */unsigned long long int) arr_3 [i_4])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))))));
                        var_24 = ((((((/* implicit */_Bool) 207047009295082323ULL)) ? (((/* implicit */long long int) 2147483647)) : (((long long int) arr_1 [i_4])))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_3)))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] = ((((/* implicit */_Bool) min((arr_12 [i_0]), (((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_1] [i_2] [i_1])), (var_8))))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))) : (13551237563040489153ULL))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_16)) : (arr_5 [i_0])))) : (((arr_3 [i_2]) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_6))))));
                        arr_17 [i_0] [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_5 [i_0]))))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (var_3) : (arr_14 [i_4] [i_1] [i_4])))) : (((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (var_17))))), (576460752303423499ULL)));
                    }
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1] [2LL])) ? (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [14LL])) ? (arr_10 [i_1 + 1] [i_1] [i_2] [i_2] [i_2]) : (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_2]))) : (((((/* implicit */_Bool) (short)-1352)) ? (var_5) : (((/* implicit */unsigned long long int) arr_14 [i_1 + 1] [i_1] [(_Bool)1]))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (signed char)10)))) : (((/* implicit */int) ((unsigned char) var_18)))))) + (min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
}
