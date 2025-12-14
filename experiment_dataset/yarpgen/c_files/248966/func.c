/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248966
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
    var_14 = ((/* implicit */unsigned short) (-(((max((((/* implicit */long long int) var_6)), (var_12))) ^ (var_12)))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (45))) - (30)))));
    var_16 = ((/* implicit */long long int) (-(((max((((/* implicit */unsigned long long int) var_11)), (68717379584ULL))) & (((/* implicit */unsigned long long int) (+(11))))))));
    var_17 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)206)) || (((/* implicit */_Bool) ((16777215) & (((/* implicit */int) (signed char)-69)))))))), (((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (unsigned short)38674)) : (((/* implicit */int) (unsigned short)38674))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((short) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                    arr_9 [(short)20] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)26861)) ? (2720946987066636324LL) : (((/* implicit */long long int) 0U)))) < (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)26861), ((unsigned short)26888)))))))), (-1821033955248721400LL)));
                }
                var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)38674)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1 + 2] [(_Bool)1] [(_Bool)1] [i_0]))))));
            }
        } 
    } 
}
