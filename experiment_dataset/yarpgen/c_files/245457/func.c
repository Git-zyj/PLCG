/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245457
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) 15LL)));
            arr_7 [i_1] [i_1] [i_1] = ((unsigned long long int) (+(max((15LL), (((/* implicit */long long int) arr_3 [i_1]))))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                arr_10 [i_1] = ((/* implicit */int) arr_3 [i_2]);
                var_18 ^= ((/* implicit */unsigned long long int) ((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) + (87)))))))) <= (((/* implicit */unsigned long long int) ((int) 5LL)))));
            }
            for (short i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3] [i_3 - 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_1] [i_0])))))))) >= (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_1)), (19LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)196)) == (((/* implicit */int) (unsigned char)10))))))))));
                arr_13 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */int) max((arr_5 [i_3 - 1] [i_3 + 1] [i_3 + 1]), (arr_5 [i_3 - 1] [i_3 + 1] [i_3 - 1])))) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                arr_14 [(signed char)4] [i_1] |= ((/* implicit */int) (~(-13LL)));
            }
            for (short i_4 = 4; i_4 < 20; i_4 += 3) 
            {
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_4 - 3]);
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((-2696983205371789369LL) - (((/* implicit */long long int) ((unsigned int) arr_15 [i_4 - 4] [i_4] [i_4 - 4] [i_1]))))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_4 - 3]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 - 1]))) & (var_1))))))));
                var_22 |= ((/* implicit */_Bool) 10882383571916207751ULL);
            }
        }
        for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            arr_23 [i_5] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) arr_4 [(signed char)8] [i_5 - 1] [i_5])), (((var_11) & (((/* implicit */int) arr_2 [i_0] [i_0]))))));
            var_23 ^= ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) arr_16 [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0])) || (((/* implicit */_Bool) 6428073681936187679ULL))))) : (((/* implicit */int) arr_5 [i_5 + 1] [i_5] [i_5 + 4]))))));
        }
        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? ((+(-2147483647))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0])) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((signed char) 0LL)))))));
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) -11LL))) && ((_Bool)0)));
    }
    var_25 = ((/* implicit */unsigned char) var_1);
}
