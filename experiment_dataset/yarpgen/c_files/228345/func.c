/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228345
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
    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((unsigned int) var_7)) : (((unsigned int) var_3)))) : (max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))))));
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1833632801U))) < (((((/* implicit */_Bool) 1833632801U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned int) (unsigned char)255);
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [7U])))) : (max((((/* implicit */unsigned int) (_Bool)1)), (3690188195U)))))) ? (max((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) min((var_10), (var_3)))))) : (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (var_3))))))));
        var_20 ^= ((/* implicit */unsigned int) ((unsigned char) ((max((67076096U), (2461334495U))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (arr_0 [i_0]))))));
        var_21 = arr_0 [i_0];
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            arr_6 [i_2] [i_1] = ((/* implicit */unsigned char) ((1144511585U) < (max((max((604779109U), (((/* implicit */unsigned int) (_Bool)1)))), (((unsigned int) 1833632801U))))));
            arr_7 [i_1] [20U] [i_1] = var_4;
            arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_1 + 1])), (arr_2 [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : ((~(var_6)))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_22 = min((((/* implicit */unsigned int) max((arr_11 [i_2 + 4] [i_2 + 4] [i_2] [i_2] [i_2] [i_2 + 4]), (arr_11 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 1])))), (max((((/* implicit */unsigned int) (_Bool)1)), (0U))));
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_4] [2U] = var_10;
                            arr_19 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((unsigned int) arr_5 [i_1]))))) ? (((unsigned int) (_Bool)0)) : (((((/* implicit */_Bool) (unsigned char)189)) ? (159893102U) : ((-(0U)))))));
                            var_23 = (!((!(((_Bool) arr_3 [i_1])))));
                        }
                    } 
                } 
                arr_20 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_9 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [7U])))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))))));
                arr_21 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((~(arr_3 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned char)255))))))), (1372919120U)));
            }
        }
        arr_22 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)104)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [14U] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))))) : (max((1509159546U), (((/* implicit */unsigned int) arr_14 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) ? (((arr_14 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 - 1] [(_Bool)1] [i_1] [i_1] [(unsigned char)19] [i_1] [(unsigned char)20]))))) : (var_0)));
        var_24 = ((/* implicit */_Bool) arr_2 [i_1]);
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [15U])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))))), (max((var_11), (arr_16 [i_1])))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((unsigned int) arr_23 [18U]))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_26 [i_6] [i_6]), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_24 [i_6]))))))) ? (max((max((arr_26 [i_6 - 1] [i_6 - 1]), (((/* implicit */unsigned int) (unsigned char)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)4))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_24 [i_6])))))));
    }
    var_28 = var_15;
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) + (var_15))) : (((unsigned int) 0U))))));
}
