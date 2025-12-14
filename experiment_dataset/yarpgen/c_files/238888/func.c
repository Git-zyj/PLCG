/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238888
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) ^ (max((((((/* implicit */int) (short)-1)) % (((/* implicit */int) (unsigned short)54228)))), ((~(var_3)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_11 = var_3;
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            var_12 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (signed char)127)) < (((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned short)11307)))))))));
            /* LoopSeq 3 */
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                var_13 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))));
                arr_6 [i_0] [i_1 - 2] [i_1 - 2] [i_2] |= ((((/* implicit */int) ((((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)0)))) >= ((~(((/* implicit */int) (unsigned short)65535))))))) >> ((((~(((/* implicit */int) (short)18562)))) + (18584))));
                var_14 = max((((/* implicit */int) ((var_8) == (((/* implicit */int) (short)32767))))), (max((min((((/* implicit */int) var_4)), (var_8))), (var_8))));
            }
            for (signed char i_3 = 3; i_3 < 18; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 4; i_4 < 19; i_4 += 4) 
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3 + 2] [i_4] |= ((/* implicit */int) ((((/* implicit */int) (((-(var_3))) > (2147483647)))) == (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (var_0)))))))));
                    arr_14 [i_4 - 4] [i_3 - 2] [i_1] [i_0] |= (unsigned short)42039;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-68)) + (((/* implicit */int) (signed char)-4)))))));
                        arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] [i_5] [i_1] = ((/* implicit */signed char) ((((var_3) & (var_8))) - (((-214870210) + (1634177335)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(-21))))));
                        var_17 = ((/* implicit */int) max((var_17), ((+(((/* implicit */int) ((((var_0) / (2095006218))) != (((((/* implicit */int) var_9)) % (-1948024068))))))))));
                        var_18 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((2147483647) >= (((/* implicit */int) (unsigned short)23))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)-68))))))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23)) || (((/* implicit */_Bool) var_2))))) & (((var_0) - (((/* implicit */int) (unsigned short)2852))))))));
                        var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)1)) ^ (((/* implicit */int) (unsigned short)65510))));
                        var_20 = (-(((/* implicit */int) max(((unsigned short)8182), (((/* implicit */unsigned short) (signed char)-74))))));
                    }
                    arr_21 [i_0] [i_0] [(unsigned short)12] [i_0] [i_0] [2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) * (max((((((/* implicit */int) (unsigned short)65532)) % (var_3))), (((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) var_4)))))))));
                }
                arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-23)) != (((/* implicit */int) ((((/* implicit */_Bool) -1415387869)) || (((/* implicit */_Bool) (unsigned short)0)))))));
                var_21 = ((/* implicit */signed char) (-(max((-902341025), (var_8)))));
            }
            /* vectorizable */
            for (signed char i_7 = 3; i_7 < 18; i_7 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6070)) < (((/* implicit */int) ((var_8) != (var_8))))));
                var_23 = ((var_3) | (((/* implicit */int) (unsigned short)35)));
            }
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 20; i_8 += 2) 
        {
            var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-120))));
            var_25 = (-(var_0));
            /* LoopSeq 1 */
            for (short i_9 = 4; i_9 < 18; i_9 += 3) 
            {
                arr_31 [i_0] [i_8] [i_0] [i_9] = ((/* implicit */unsigned int) ((((0) ^ (2147483647))) >= (((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) var_1))))));
                arr_32 [i_9] = (-(((/* implicit */int) (unsigned short)592)));
            }
            var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (((3042038981U) % (((/* implicit */unsigned int) var_8))))));
        }
        /* vectorizable */
        for (unsigned int i_10 = 3; i_10 < 20; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                arr_37 [i_0] [i_0] [i_10] [i_11] = (+(((/* implicit */int) var_7)));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-7)))))));
            }
            var_28 = (-(4095));
            var_29 = var_0;
        }
        var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((unsigned short)54222), ((unsigned short)34221))))));
    }
}
