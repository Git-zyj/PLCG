/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37426
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
    var_16 = ((/* implicit */signed char) var_6);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-18)) ? (var_7) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) var_4)))))));
    var_18 &= ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)26368))))) : (min((((/* implicit */long long int) var_3)), (var_10))))), (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3725)) > ((-2147483647 - 1))))), (4610560118520545280LL)))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_2)))) ? (4081453033U) : (((((/* implicit */_Bool) var_3)) ? (340982282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_15))) : (var_15)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((arr_0 [i_0]) - (((/* implicit */int) (signed char)-24))))))), (arr_8 [18LL] [i_1 + 1] [i_0] [i_0])));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (min((17113853242923525503ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1 - 1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)29)) != (((/* implicit */int) (unsigned short)65521)))) || (arr_5 [i_0] [i_2]))))) : (min((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1 - 1] [i_2 + 1])) : (6709409624783262034ULL))), (((/* implicit */unsigned long long int) min((arr_1 [i_2]), ((-2147483647 - 1))))))))))));
                    arr_11 [i_0] [i_0] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-24), (((/* implicit */signed char) (_Bool)1)))))) : (arr_9 [i_0] [i_0] [i_0])))) : (max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2 - 3])) : (arr_6 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) -298672288)))))))));
                }
            } 
        } 
    } 
}
