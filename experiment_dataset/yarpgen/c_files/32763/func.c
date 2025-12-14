/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32763
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 &= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (((unsigned long long int) var_5)))) + (((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_8))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) & (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) (~(min((0ULL), (((/* implicit */unsigned long long int) 127U))))));
    /* LoopSeq 2 */
    for (short i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            var_21 = ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
            var_22 *= ((/* implicit */unsigned char) ((((var_4) - (arr_1 [2LL]))) + (((/* implicit */unsigned long long int) ((arr_4 [(unsigned char)0] [6ULL]) >> (((((/* implicit */int) var_5)) + (29274))))))));
            var_23 *= ((/* implicit */short) var_12);
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 13; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (-9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32759))))));
                        var_25 = ((/* implicit */long long int) arr_9 [(unsigned char)3] [13LL]);
                    }
                } 
            } 
        }
        arr_17 [i_2 + 1] [4ULL] &= (~(var_3));
        arr_18 [i_2] [i_2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) arr_14 [i_2] [i_2 + 1] [i_2])) + (((long long int) var_5)))));
    }
    for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_8) << (((arr_16 [i_6] [i_6] [i_6] [13LL] [(unsigned char)3]) - (5091573022208227044LL))))))));
        arr_22 [i_6] [i_6] = ((/* implicit */short) (((~(min((((/* implicit */unsigned long long int) arr_10 [i_6])), (var_8))))) == (((/* implicit */unsigned long long int) 4602678819172646912LL))));
        arr_23 [i_6] = (i_6 % 2 == zero) ? (((/* implicit */long long int) min(((~(var_3))), (((var_7) << (((arr_10 [i_6]) - (780258484627885246LL)))))))) : (((/* implicit */long long int) min(((~(var_3))), (((var_7) << (((((arr_10 [i_6]) - (780258484627885246LL))) + (3539500190015222503LL))))))));
        var_26 &= ((/* implicit */short) min((((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (arr_14 [2LL] [2LL] [2LL]))), ((-(var_15)))));
    }
    var_27 = ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((((var_3) == (((/* implicit */unsigned long long int) -9223372036854775796LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((+(var_0))))))));
}
