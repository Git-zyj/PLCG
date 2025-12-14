/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26711
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
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((-1893868490) != (-1893868511))))));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [1U] [1U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) min((((/* implicit */long long int) var_3)), (arr_1 [i_0]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 + 2])), ((unsigned short)0))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_10 [i_0 + 1] [(unsigned short)9] [(unsigned short)9] [0])) : (1893868489)))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1893868484)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) : (3671966185U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)8576)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)))) : (min((((/* implicit */long long int) var_1)), (arr_1 [i_0 - 2]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_18 *= ((/* implicit */unsigned short) var_10);
                            var_19 = ((/* implicit */short) var_3);
                            var_20 -= ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_4)))));
                            arr_14 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = ((unsigned char) min((arr_6 [i_0 + 3] [i_1 - 1] [i_1 + 1]), ((short)-8577)));
                        }
                        arr_15 [i_0] = (signed char)112;
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_19 [i_0 - 2] |= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))));
                            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (unsigned char)26)))));
                            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_1 - 3] [i_0 + 1] [i_5] [i_5] [i_1]))) - (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (-94827387821932525LL)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_1 - 1] [i_6] [i_3] [7ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) != ((+(2945913054U)))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_7 [i_0] [(_Bool)1]))) + (((/* implicit */int) var_14))));
                            arr_23 [i_0] [(unsigned char)6] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)26158))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((/* implicit */int) (signed char)13)), (((((/* implicit */_Bool) (-(2945913054U)))) ? ((+(((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) (short)-31835)))))))));
                            var_25 *= ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) (unsigned char)246)) ? (2945913054U) : (3526819493U))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_1] [i_8] &= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)25075), (((/* implicit */short) (unsigned char)106))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_26 [i_8] [i_3] [i_2] [i_0 - 1] [4ULL] [i_0 - 1])) : (-1893868507))) : (((/* implicit */int) (unsigned short)0))))) <= (((((/* implicit */_Bool) ((signed char) (unsigned short)43108))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)4095))))) : (1349054241U))));
                            var_26 = max((((/* implicit */unsigned short) var_11)), (var_3));
                            arr_30 [i_2] [i_8] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)240)) != (((/* implicit */int) (!(max((var_9), (var_9))))))));
                            var_27 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_1 - 1] [(unsigned char)7])) ? (-1893868490) : (((/* implicit */int) arr_26 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_1 - 3] [(unsigned short)8]))))) || (((((/* implicit */_Bool) min((526752355819250318LL), (((/* implicit */long long int) var_14))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_1)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned short) var_9);
        var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-1893868505), (((/* implicit */int) arr_34 [i_9] [i_9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_9]))))) : (((/* implicit */int) var_2))));
        var_29 = ((/* implicit */unsigned short) var_2);
    }
    var_30 -= ((/* implicit */unsigned short) (~(max(((+(2945913063U))), (((/* implicit */unsigned int) ((1893868480) % (((/* implicit */int) var_14)))))))));
}
