/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28808
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
    var_14 = ((/* implicit */int) ((long long int) 1684499586));
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) var_9)) + (((((/* implicit */long long int) (+(var_11)))) + (((6877033370220797164LL) - (((/* implicit */long long int) var_9))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) != (arr_2 [10] [i_0]))))) / (((((/* implicit */_Bool) -2082784589)) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_2)))))) ? (((var_6) - (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_8))))) : (((((/* implicit */_Bool) (+(-981501409352379104LL)))) ? (((/* implicit */long long int) (-(arr_1 [i_0] [i_0])))) : (var_12)))));
        arr_4 [i_0] = ((/* implicit */int) (!(max((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_7 [i_1 + 1]) + (2147483647))) << (((((-9223372036854775788LL) - (-9223372036854775797LL))) - (9LL)))))) ? (-9223372036854775806LL) : (((((/* implicit */long long int) (+(-472339056)))) + (var_2)))));
        var_17 = (~(min((-2304119381603041863LL), (((/* implicit */long long int) var_1)))));
        var_18 = ((long long int) arr_5 [1LL]);
    }
    /* LoopSeq 2 */
    for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_13 [i_2] = ((/* implicit */int) -3166760438937364329LL);
            var_19 = ((/* implicit */long long int) (-(min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1))))), (var_11)))));
        }
        arr_14 [i_2] = ((((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_2 + 1]) == (((/* implicit */long long int) arr_8 [i_2 + 1])))))) % (max((max((var_13), (((/* implicit */long long int) arr_5 [i_2 + 1])))), ((+(-5642058980731155638LL))))));
        arr_15 [i_2] = ((/* implicit */int) ((((long long int) (!(((/* implicit */_Bool) var_4))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-2191520125257256089LL) > (var_6))))) != (min((arr_11 [i_2 + 1]), (((/* implicit */long long int) var_7))))))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_20 ^= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (+(-2010812626)))))))) - (var_13));
        var_21 = ((((/* implicit */long long int) ((/* implicit */int) ((4140565855367989900LL) == (var_0))))) - ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) arr_16 [i_4])))));
        arr_19 [i_4] [1] = min((min(((~(-6877033370220797165LL))), (arr_11 [i_4]))), (((/* implicit */long long int) var_5)));
    }
    var_22 &= min((3166760438937364331LL), (322224336375497185LL));
}
