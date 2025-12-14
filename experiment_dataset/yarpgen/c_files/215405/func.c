/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215405
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((unsigned short) var_11)))));
    var_17 = max((((long long int) ((((/* implicit */int) (signed char)68)) ^ (((/* implicit */int) var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)212), ((unsigned char)193)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)130)) < (((/* implicit */int) var_5))))) : (max((((/* implicit */int) (unsigned char)43)), (var_0)))))));
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -3)) * (var_14)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((unsigned int) (unsigned char)49)));
        var_19 = ((/* implicit */long long int) (((_Bool)0) ? (465901152664413189ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_20 &= ((/* implicit */signed char) ((arr_5 [i_1]) ? (((unsigned long long int) -1LL)) : (10714597716784485218ULL)));
        var_21 = ((/* implicit */unsigned int) arr_5 [i_1]);
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((int) max((((/* implicit */unsigned short) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_15)))))), (((unsigned short) (unsigned char)182))))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((short) max((((/* implicit */long long int) arr_6 [i_2])), (0LL)))))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_24 *= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_8 [i_2]))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (3560913330U))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                var_25 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((var_11), (((/* implicit */unsigned int) arr_12 [i_4] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2]))))), (((/* implicit */unsigned int) max((arr_9 [i_3]), (((/* implicit */unsigned short) max(((unsigned char)63), ((unsigned char)223)))))))));
                var_26 = ((unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)60113))))));
            }
            for (signed char i_5 = 1; i_5 < 23; i_5 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)43)) ? (465901152664413193ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188)))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 4; i_6 < 22; i_6 += 2) 
                {
                    for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        {
                            arr_20 [i_7] [i_7] [i_5] [i_7] [i_2] = ((/* implicit */int) (-(var_6)));
                            var_28 = ((/* implicit */_Bool) arr_17 [i_2] [i_7] [i_7] [i_2]);
                            var_29 = ((/* implicit */int) var_10);
                            var_30 += (short)255;
                        }
                    } 
                } 
                var_31 += ((/* implicit */unsigned int) (~(((long long int) (_Bool)1))));
            }
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 13467475359968161775ULL)) ? (((/* implicit */unsigned long long int) 3560913330U)) : (10714597716784485223ULL)))))) / (max((var_1), (((/* implicit */long long int) (unsigned char)193)))))))));
        }
        for (int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_33 *= ((/* implicit */unsigned long long int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                arr_26 [i_9] [i_8] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) var_7)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)63146)) : (((/* implicit */int) var_2))))));
                var_34 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                var_35 -= ((/* implicit */unsigned int) -1LL);
            }
            var_36 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((2137222226) ^ (((/* implicit */int) arr_7 [i_2] [i_2]))))), ((-(((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [i_8]))) : (arr_10 [i_2])))))));
        }
    }
}
