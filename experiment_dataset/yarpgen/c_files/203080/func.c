/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203080
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) 16847041880148782166ULL);
                            var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1] [i_2]))));
                            arr_14 [i_4] [i_3] = (-(min((((/* implicit */int) (signed char)-124)), (((((/* implicit */_Bool) 32767)) ? (-978386310) : (277222679))))));
                        }
                        var_14 = ((/* implicit */int) arr_1 [24ULL]);
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_15 *= max((((/* implicit */unsigned long long int) (signed char)-33)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -567615884)))))) ^ (min((413295508356582853ULL), (arr_11 [i_0 + 2] [i_0 + 1] [15] [14ULL] [i_0 + 1]))))));
                            var_16 ^= (signed char)72;
                        }
                        for (int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            arr_20 [i_6] [i_3] [4ULL] [i_2] [4] [i_6] [i_6] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 440426484)) ? (var_2) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))))))))), (((((8565975859438497435ULL) / (12803589776131838724ULL))) | (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_1])))));
                            var_17 = ((unsigned long long int) ((((arr_18 [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1]) + (arr_3 [i_2] [i_1]))) | (arr_10 [i_0 - 3] [i_6 + 1] [i_6 + 1] [i_6 + 2])));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((unsigned long long int) ((unsigned long long int) arr_9 [(signed char)12] [17] [14] [i_1]))), (((/* implicit */unsigned long long int) (~(((int) 567615889))))))))));
                        }
                        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-40)) ^ ((-2147483647 - 1))))) ? (((unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_1])) : (((arr_5 [i_3]) >> (((((/* implicit */int) arr_1 [i_2])) + (96)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_3]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [(signed char)7])) : (((/* implicit */int) (signed char)91))))))))) : (var_7)));
                    }
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        arr_24 [i_0] [i_1] [i_0 + 1] [i_0 + 1] |= ((/* implicit */signed char) (-(((unsigned long long int) 5120108988696631391ULL))));
                        arr_25 [i_7] [i_2] [i_7] = ((/* implicit */int) (signed char)15);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 3) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)-52)))))));
                        var_21 = -780247912;
                        var_22 = 567615884;
                        var_23 = ((/* implicit */unsigned long long int) (signed char)32);
                        var_24 = ((((/* implicit */int) var_4)) + ((-(var_6))));
                    }
                    arr_28 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)23)) == (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) var_11)))))))) + (arr_10 [i_0 + 1] [i_0 + 1] [9] [i_0])));
                    arr_29 [i_0] [i_1] [i_1] [13ULL] = arr_9 [i_0] [16ULL] [16ULL] [i_0];
                    var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) -231910893)) ? (-231910893) : (-1174190220))) : ((~(((/* implicit */int) (signed char)-33))))))), (min(((-(arr_10 [i_0] [i_1] [i_2] [i_1]))), ((+(3746932612822221831ULL)))))));
                }
                /* vectorizable */
                for (signed char i_9 = 3; i_9 < 23; i_9 += 3) 
                {
                    var_26 = ((/* implicit */signed char) -1174190220);
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 24; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 3; i_11 < 21; i_11 += 2) 
                        {
                            {
                                var_27 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 12196786802593705098ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (arr_31 [i_1]))) >= (1853709193482017484ULL)));
                                arr_36 [i_0] [i_9] [23ULL] [i_10] [1ULL] [i_0] = (~(((/* implicit */int) ((signed char) -206179021))));
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) 4263694426656227483ULL))));
                            }
                        } 
                    } 
                    arr_37 [i_9 - 3] [i_1] [i_1] [i_0 - 3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_1])) ? (((unsigned long long int) -567615896)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_1] [i_9])))))));
                }
                var_29 = -20534898;
                var_30 = ((/* implicit */signed char) 184236228);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 15; i_12 += 1) 
    {
        for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            {
                var_31 ^= -567615884;
                var_32 = max((((/* implicit */unsigned long long int) 1061375967)), (9734887046677001530ULL));
            }
        } 
    } 
}
