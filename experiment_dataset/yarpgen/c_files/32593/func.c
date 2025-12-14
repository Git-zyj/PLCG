/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32593
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
    var_18 ^= ((/* implicit */short) max((-6619315487327270302LL), (min((max((((/* implicit */long long int) (short)2)), (-640586690906554978LL))), (((/* implicit */long long int) ((short) (short)2)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = max((((((/* implicit */_Bool) -640586690906554968LL)) ? (1756691210747275281LL) : (arr_3 [i_0] [i_0]))), (((((/* implicit */long long int) ((/* implicit */int) (short)-11849))) / (arr_3 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) (short)-19706);
                        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(7155810883497871418LL)))) ? (-640586690906554976LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5100)))))) ? (((arr_3 [i_1 + 1] [i_0]) >> (((var_9) + (8988206393521913266LL))))) : (((long long int) var_6))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (arr_0 [i_2]) : (-2616555353428415623LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [i_1 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)8911))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        var_23 = ((/* implicit */long long int) min((var_23), (arr_0 [(short)4])));
                        var_24 = ((((/* implicit */_Bool) ((-640586690906554976LL) / (9223372036854775805LL)))) ? (5713693246637331026LL) : (max((((/* implicit */long long int) (short)-1)), (68695373707166441LL))));
                    }
                    var_25 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (short)-1)) ? (((arr_8 [i_0]) >> (((((/* implicit */int) var_11)) + (8209))))) : (arr_3 [i_0] [i_0]))) / (((((/* implicit */_Bool) var_4)) ? (min((var_9), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) (short)26983)))))));
                    var_26 *= ((/* implicit */short) (~(((long long int) (short)16128))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 6; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_27 *= -1LL;
                                var_28 *= ((/* implicit */short) (+(min((arr_10 [i_4 + 2] [i_4 + 2] [i_2] [i_4]), (var_10)))));
                                var_29 = ((/* implicit */short) var_16);
                                var_30 ^= arr_5 [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
