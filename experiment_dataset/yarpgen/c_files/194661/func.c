/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194661
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)89))));
    var_15 = ((/* implicit */int) ((((((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) & (((-2147483634) % (((/* implicit */int) (signed char)124)))))) < (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_13))) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((var_12) / (((/* implicit */unsigned long long int) var_5)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))));
                                arr_18 [i_0] [i_0] [i_1] [i_0] [i_4] [(signed char)6] [(signed char)6] = ((/* implicit */int) var_12);
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) - (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)123)) > (-1687391433)))) : (((/* implicit */int) var_8))));
                                arr_19 [i_0] [i_1] [i_3] [i_3] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                        var_17 = ((/* implicit */int) ((-1687391430) == (((/* implicit */int) (signed char)113))));
                        var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (var_2)))));
                    }
                    arr_26 [i_1] = ((/* implicit */int) var_8);
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (var_5))))));
                    var_20 = ((((/* implicit */_Bool) 1951211705)) ? (-1782505244) : (((/* implicit */int) (signed char)-114)));
                }
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (var_5)))) ? (max((var_1), (((/* implicit */long long int) var_6)))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) * (var_1)))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (short)-4099)), (496608191)))) ? (min((17711490876549857174ULL), (2198406582759555056ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
                    var_22 = ((/* implicit */unsigned char) ((((var_10) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                }
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_11))))) : (((13900050539003758819ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))));
            }
        } 
    } 
    var_24 -= ((var_12) & (((/* implicit */unsigned long long int) var_7)));
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-114)) ? (((((/* implicit */_Bool) -1204472229)) ? (var_5) : (946631240))) : (((/* implicit */int) (signed char)-116)))), (((/* implicit */int) ((((var_7) / (((/* implicit */int) var_0)))) < (((/* implicit */int) var_0))))))))));
}
