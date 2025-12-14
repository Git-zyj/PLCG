/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3496
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [2U])) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (signed char)60)))) * (((((/* implicit */_Bool) -853860956301024694LL)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) arr_8 [i_4] [i_1 - 1] [i_4]);
                            var_18 = ((/* implicit */short) ((((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_3] [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 2] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_1 + 1] [i_0])))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_0 [i_2])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-1813520415)))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0])) ? (782358277U) : (4294967295U))) : (1U)));
                            var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_2] [i_5 - 1] [i_5] [i_5]))))));
                        }
                        var_21 = ((/* implicit */signed char) 663385839U);
                        var_22 = arr_10 [i_2] [i_0] [i_3] [i_1 + 1];
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) 2381350774U))), (0U)))) ? (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)222))))))) : (max((((/* implicit */long long int) (+(3696719566U)))), (((1299128048479585086LL) << (((1250012794) - (1250012792)))))))));
                        arr_19 [i_3] [i_0] [i_2] [i_3] = arr_5 [i_3] [i_1];
                    }
                } 
            } 
            arr_20 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) max((((/* implicit */short) arr_3 [i_0] [i_0])), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))), (9223372036854775805LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (+(-1469298322)))) ? ((~(((/* implicit */int) (unsigned char)197)))) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])))))));
        }
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [10] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [12] [12] [12]))))) ? (((/* implicit */int) ((_Bool) 339908966))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) == (7352514994857947956ULL)))))) << ((((-((-(var_2))))) - (2054776882U))))))));
    }
    var_25 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)49073)), (16U)))) || (((/* implicit */_Bool) (signed char)-100)))) || (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (var_2)))));
    var_26 = ((/* implicit */unsigned short) var_13);
}
