/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48223
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
    var_18 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1279282960)), (min((((/* implicit */unsigned int) min(((_Bool)1), (var_4)))), ((~(2977238209U)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 += ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 7947893331083275745LL))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) 7111085122947882023LL);
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned short) (unsigned short)49748))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)58625)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) 205426653)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2977238209U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-14893))))))))));
            var_21 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        }
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7153285987538819617LL))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [(unsigned short)10]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (var_9))))))))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (679829115U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2])) <= (((/* implicit */int) arr_3 [i_2] [i_2])))))))) & (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-27)))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((((_Bool)1) ? (3471850882U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned int) ((arr_9 [i_5 - 1] [i_5] [i_5 + 2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_4 - 1]))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = min((((((/* implicit */int) (!(((/* implicit */_Bool) -129567067))))) >> (((/* implicit */int) max((var_4), (arr_3 [(unsigned short)5] [(unsigned short)5])))))), (((/* implicit */int) arr_19 [i_2] [i_4 - 1] [i_4] [i_2] [i_6])));
                            arr_21 [10] [i_3] [i_4 - 1] [i_4] [i_5] [i_6] [i_6] &= ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_2] [i_2] [i_4] [i_5 - 2])) / (958293368)))) / (max((((/* implicit */unsigned long long int) 261888U)), (17078430949660467451ULL)))))));
                        }
                    }
                }
            } 
        } 
        arr_22 [i_2] &= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
    }
}
