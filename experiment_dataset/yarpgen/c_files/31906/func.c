/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31906
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((var_9) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0 + 3] [i_2 - 1] [i_2] = ((/* implicit */short) var_0);
                        var_14 = ((/* implicit */_Bool) var_3);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned char) var_0);
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_11))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))));
                        }
                        arr_16 [i_0] [i_1 + 1] [i_0] [(_Bool)0] [i_3] [i_3] = ((/* implicit */unsigned int) var_10);
                        arr_17 [i_0] = ((/* implicit */unsigned int) var_7);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) ? (var_0) : (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_6))))) : (var_12)));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            arr_20 [i_5] [i_5] [i_5 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            var_19 = ((/* implicit */unsigned long long int) var_10);
            arr_21 [i_5] |= ((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_25 [i_6] = ((/* implicit */unsigned long long int) var_0);
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_28 [i_0] [i_6] [i_7] = ((/* implicit */long long int) var_3);
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    arr_32 [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 2] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) var_10))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (short)31793)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (_Bool)1)))))));
                }
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_1))));
            }
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                var_22 = ((/* implicit */int) var_4);
                var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) var_4))));
            }
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        var_25 = ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3));
                        var_26 = ((/* implicit */unsigned long long int) var_2);
                        var_27 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            var_29 = ((/* implicit */signed char) var_10);
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (short)31793)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 1137033614U)) : (18446744073709551615ULL)));
            var_31 = ((/* implicit */short) var_10);
        }
    }
    var_32 = ((/* implicit */unsigned long long int) var_9);
}
