/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227099
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
    var_14 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_6)))) : ((+(((((/* implicit */_Bool) (unsigned short)52543)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (_Bool)0))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (~(((1636813076U) >> (((4068824972U) - (4068824952U)))))))) ? (((/* implicit */int) (short)-10902)) : (((608278435) >> (((3885830920U) - (3885830908U))))));
        var_16 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 226142323U)) ? (-7380539094332964752LL) : (((/* implicit */long long int) min((1050716411), (((/* implicit */int) var_6))))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 1480328106U))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [(signed char)8] [i_2])) * ((-(((/* implicit */int) var_7))))));
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) (-(5573831235986332912LL)))))))));
            arr_8 [(signed char)2] [i_2] = ((((/* implicit */_Bool) var_13)) ? (arr_4 [2LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1 - 1]))));
        }
        for (unsigned int i_3 = 4; i_3 < 8; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) var_2);
                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4] [i_3])) + (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(unsigned short)4] [i_3 - 1] [i_1]))))) ? (-7380539094332964752LL) : (((/* implicit */long long int) 3885830920U)))) : (((((/* implicit */_Bool) 875898925U)) ? (((/* implicit */long long int) 226142323U)) : (-7380539094332964730LL)))));
                var_22 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)55681)))) / (((/* implicit */int) (!(var_7))))));
                arr_15 [i_1] [i_3] [i_1] [i_4] = ((/* implicit */signed char) max((max((max((((/* implicit */int) arr_14 [i_4] [i_4])), (var_4))), (((/* implicit */int) var_7)))), (((/* implicit */int) ((arr_6 [i_1 + 1]) < (((/* implicit */int) (!(((/* implicit */_Bool) 3419068373U))))))))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                var_23 = (((-(((/* implicit */int) (unsigned short)21680)))) ^ (((((/* implicit */int) var_7)) / (((/* implicit */int) var_11)))));
                arr_18 [i_1 + 2] [i_3 + 1] [i_1 + 1] [i_3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) > (-360180394)));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) != (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (short)-14956)))))))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            arr_27 [i_1 - 2] [i_3] [0LL] [i_7] [i_7 + 1] = ((/* implicit */_Bool) (unsigned short)32320);
                            var_25 = ((int) var_11);
                        }
                    } 
                } 
            }
            arr_28 [3LL] [i_1] [3LL] = ((/* implicit */signed char) 1502877750);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3] [i_3 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (var_8))))));
                var_27 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_3])) ? (3419068370U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) var_8))));
            }
        }
    }
}
