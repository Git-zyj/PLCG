/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49087
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
    var_20 = ((/* implicit */unsigned long long int) ((signed char) ((var_19) | (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)27772), (((/* implicit */unsigned short) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 20; i_2 += 1) 
                {
                    arr_7 [i_0 - 2] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? ((-(max((((/* implicit */long long int) arr_0 [i_0 + 2] [1LL])), (var_18))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)11])))));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (-1437082732)));
                    arr_9 [i_2] = max((((15048664546297610341ULL) * (((/* implicit */unsigned long long int) ((((-3879353179444501554LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))), (min((((/* implicit */unsigned long long int) ((15048664546297610351ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))), (arr_4 [i_0 + 2] [i_2 - 1] [i_2 - 1]))));
                    arr_10 [(_Bool)1] [i_2] = ((/* implicit */unsigned short) min((1230108636351303114ULL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3073910700U)) ? (((/* implicit */unsigned long long int) var_5)) : (15048664546297610357ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26476))) : (16131559036915002954ULL)))));
                }
                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (((/* implicit */long long int) ((((/* implicit */int) var_17)) | (((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (arr_4 [i_1] [3U] [i_0])))) || (((/* implicit */_Bool) ((signed char) var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_16)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) == (var_3)))))))));
                var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0]))) : (var_13)))), (min((arr_3 [i_0 - 1] [i_0 - 2]), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1])))));
                arr_11 [i_0] &= ((unsigned char) min((var_12), (((/* implicit */unsigned char) min((((/* implicit */signed char) var_11)), (var_4))))));
                /* LoopSeq 1 */
                for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2] [i_0 + 2])) ? (arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 2]) : (arr_4 [i_0 - 1] [i_0 - 2] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1)), (arr_12 [i_0 + 2] [i_1])))) : ((-(16216785814978489533ULL)))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_0 + 1])) ? (arr_3 [i_0 - 1] [i_0 - 2]) : (((/* implicit */unsigned long long int) -118673899720429709LL))))) ? ((+(arr_3 [i_0 - 2] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_12)))))))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) < (max((var_8), (var_5)))))) * (((/* implicit */int) var_17))));
}
