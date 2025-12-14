/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40793
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
    var_19 = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) (signed char)0)))))) >> ((-(((((/* implicit */int) var_15)) * (((/* implicit */int) (signed char)0))))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) / (var_14))))) << ((((((~(var_14))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))) - (3105430272U))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (((~(((/* implicit */int) var_8)))) <= (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_17))))))) % (((/* implicit */int) (((~(var_16))) != (((/* implicit */unsigned long long int) (~(arr_4 [i_0] [(unsigned char)20] [4ULL])))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) (~((~((-(((/* implicit */int) var_10))))))));
                        arr_12 [i_3] [(signed char)0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_4] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)6)))) & (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) ((14133798008187603533ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
                            var_24 = (+((-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (signed char)-7)))))) % (((arr_20 [i_0] [i_0] [i_6] [i_6] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~((-(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_23 [i_6] [i_2] [i_0] [i_0]))))))))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_10)) - (136)))))) || (((((/* implicit */int) var_5)) != (((/* implicit */int) var_0)))))))));
}
