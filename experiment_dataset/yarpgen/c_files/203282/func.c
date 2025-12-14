/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203282
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
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((8388607LL) > (((/* implicit */long long int) var_5))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_14))))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (var_7)))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_1)))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_1)))) > (((((/* implicit */int) var_17)) | (((/* implicit */int) var_0))))))) > (((/* implicit */int) ((((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) > (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_12))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((-1396334399) > (((/* implicit */int) (_Bool)1))))) > (((/* implicit */int) ((((/* implicit */unsigned int) 1396334420)) > (0U))))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_1 [i_0]))))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))))));
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((4660337427381636892LL) > (((/* implicit */long long int) ((/* implicit */int) var_12)))))) > (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (_Bool)1)))))))) > (((/* implicit */int) ((((/* implicit */int) ((1396334390) > (((/* implicit */int) arr_0 [i_0] [i_0]))))) > (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))))))));
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (long long int i_3 = 4; i_3 < 16; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_2] [10LL])) > (-1396334420)))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)207)) > (var_15))))))) > (((/* implicit */int) ((1941603483190983852LL) > (-5393329708143279241LL))))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) 1777032508U)) > (0LL)))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned char)142))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 4] [i_1 + 2]))) > (var_3))))))))))));
                    arr_11 [(unsigned char)4] [(unsigned char)4] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) > (var_6)))) > (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_2])) > (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2])))))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-25)) > (((/* implicit */int) arr_6 [i_1] [i_1]))))) > (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (signed char)124))))))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_1 + 3]) > (arr_5 [i_1]))))) > (((262016U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) > (var_16)))) > (((/* implicit */int) ((((/* implicit */unsigned int) -1396334394)) > (1777032508U)))))))));
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))))) > (((/* implicit */int) ((((/* implicit */long long int) 1630812552)) > (1859050246455608894LL))))))) > (((/* implicit */int) ((((/* implicit */int) (short)-13340)) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (_Bool)1))))))))));
    }
}
