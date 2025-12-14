/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25449
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-35)) > (((/* implicit */int) (short)4730)))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((8819175454161178416ULL) << (((/* implicit */int) (signed char)34)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) > (((/* implicit */int) var_1))))))))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)34)) < (((/* implicit */int) arr_2 [(signed char)8] [i_0] [i_0]))))) == (((((/* implicit */int) (signed char)-6)) % (((/* implicit */int) arr_3 [i_0] [i_1]))))))) < (((((((((/* implicit */int) arr_2 [9LL] [i_1 + 2] [i_1 - 2])) | (((/* implicit */int) var_13)))) + (2147483647))) >> (((((((/* implicit */int) arr_0 [i_1] [i_0])) << (((/* implicit */int) var_4)))) - (48508)))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((475757878) / (((/* implicit */int) (signed char)-56))))))) % (28989604003842698ULL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((8051196873476878723ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
