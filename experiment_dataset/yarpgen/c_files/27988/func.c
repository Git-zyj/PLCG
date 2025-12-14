/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27988
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
    var_11 = ((/* implicit */signed char) (~(((unsigned long long int) (unsigned short)20085))));
    var_12 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (393640161) : (((/* implicit */int) (unsigned short)45450))))))) ? (max((-943735003), (max((-886502566), (((/* implicit */int) var_10)))))) : (((/* implicit */int) (short)-14405))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) var_8);
        var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)14405)) ? (4294967286U) : (9U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_0])))))) || (((/* implicit */_Bool) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))))))));
                                arr_15 [i_2] [i_3] = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) min((arr_6 [i_0] [(signed char)4] [i_2 - 1]), (arr_11 [i_0] [i_1] [i_0] [i_0] [i_2 - 1])))) >= (4294967288U)))) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1] [i_0])))))));
                    var_16 = ((/* implicit */int) ((unsigned long long int) max((arr_5 [i_2 - 1] [i_1] [i_0]), (var_6))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((1767570777286678613ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(short)2]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [2U])))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        var_18 = ((/* implicit */signed char) arr_17 [i_5]);
        var_19 += arr_17 [i_5];
    }
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
}
