/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25758
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */int) var_0)) % (var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((3U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19435)))))) / (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) : (max((((/* implicit */unsigned int) arr_6 [i_0] [i_1 + 2] [i_2])), (((((/* implicit */_Bool) var_1)) ? (153910927U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_3] = ((/* implicit */unsigned short) arr_1 [i_1]);
                        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_7 [i_1 - 3] [i_1] [i_2])) : (((/* implicit */int) ((unsigned char) arr_3 [i_1 - 3] [i_1 - 3]))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2]);
                            var_14 = min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0] [i_1]))), (((/* implicit */unsigned int) ((_Bool) arr_12 [i_0] [i_1] [i_0] [i_1 - 3] [i_4]))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_5 [i_1 - 1]), (arr_5 [i_0]))))));
                            arr_14 [(signed char)21] [i_1] [(signed char)21] [i_3] [(unsigned char)19] = ((/* implicit */int) arr_11 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0]);
                            arr_15 [i_3] [i_0] [i_2] [i_1] [i_3] = ((/* implicit */signed char) arr_3 [i_0] [i_2]);
                        }
                        for (short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_8))));
                            var_16 = (+(((/* implicit */int) (unsigned short)16559)));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((arr_11 [i_0] [i_2] [i_1 - 2] [i_2] [i_1] [i_1 - 3]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 2] [i_1 + 1] [i_0] [i_1 - 3])))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1])) ? (((/* implicit */int) (short)-28155)) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1]))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((765179004) + (-1554629713)))) ? (((((/* implicit */int) (unsigned char)73)) % (765179008))) : (((/* implicit */int) arr_9 [i_1 - 2]))));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) arr_17 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0]))))) : (arr_18 [i_0] [i_1 - 1] [i_3] [i_3] [i_3])));
                    }
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_7 [i_0] [i_2] [i_2])))))) / (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0]) : (var_9))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0] [i_1] [i_2]), ((unsigned char)68))))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 22; i_7 += 2) 
                {
                    for (unsigned int i_8 = 4; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8 - 3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_7] [i_8 + 1] [i_1 + 3] [i_0] [i_0])), (arr_0 [i_0])))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [19] [i_0] [i_1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))) * (((((((/* implicit */_Bool) -1554629687)) ? (((/* implicit */int) (unsigned short)4992)) : (((/* implicit */int) var_3)))) >> (((((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (signed char)-67)) : (-765179004))) + (85)))))));
                            var_21 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])), ((~(arr_8 [i_0])))))));
                        }
                    } 
                } 
                var_22 = max((((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) arr_5 [i_0])), ((unsigned short)4992))), (((/* implicit */unsigned short) ((short) arr_21 [i_0] [i_1 - 3] [i_1] [i_0])))))), (min((min((((/* implicit */unsigned int) arr_9 [i_1])), (arr_8 [i_0]))), (((/* implicit */unsigned int) max((-765179003), (((/* implicit */int) arr_9 [i_1]))))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1 - 2] [i_0] [i_0] [i_0])) ? (min((arr_8 [i_0]), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))) || (((((/* implicit */_Bool) ((unsigned short) arr_22 [i_0]))) && (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)14)), (arr_23 [i_0] [i_0] [i_1]))))))));
            }
        } 
    } 
}
