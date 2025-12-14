/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22008
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
    var_15 ^= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((var_0), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) 689064558)), (0ULL))))));
    var_16 = ((/* implicit */int) max((var_16), (((((int) max((var_11), (((/* implicit */unsigned int) 689064560))))) + (((/* implicit */int) ((((/* implicit */_Bool) 689064551)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned char) (-(((((/* implicit */_Bool) 6579698879734524012LL)) ? (((/* implicit */int) (short)21862)) : (((/* implicit */int) (unsigned char)233))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (-689064559)));
        var_18 ^= ((/* implicit */int) var_11);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_4)) : (689064570)));
            var_19 = ((/* implicit */unsigned short) min((var_19), ((unsigned short)25978)));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_15 [i_0] = ((/* implicit */unsigned short) var_0);
                            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) var_1);
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_9))))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_22 += ((/* implicit */unsigned char) arr_18 [i_0]);
            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
            arr_20 [12ULL] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned char) arr_18 [(unsigned short)0]));
            arr_21 [i_0] [i_5] [i_5] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 689064576)) ? (((/* implicit */int) (signed char)-18)) : (95063316))));
        }
    }
    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) 2147483647))), (var_14)));
}
