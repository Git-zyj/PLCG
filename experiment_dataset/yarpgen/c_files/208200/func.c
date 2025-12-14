/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208200
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
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 2] [i_4] [i_1] [i_0])) < (var_7)))), (max((arr_0 [i_4]), (((/* implicit */unsigned long long int) var_6))))))) ? (min((((/* implicit */int) var_3)), (((arr_1 [i_3]) >> (((var_8) + (1774553458))))))) : (max((((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 3] [i_3] [i_3 - 2])), (min((var_1), (var_8)))))))));
                                var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) (short)-10969)), (-3832066937701527593LL))) : (((/* implicit */long long int) arr_1 [i_0 - 1]))))));
                                var_14 = ((/* implicit */unsigned int) arr_7 [i_1] [i_2] [i_2]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_7 [i_1] [(short)12] [i_1]) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (arr_7 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4095ULL))))) : (((704153314) - (((/* implicit */int) var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 19065245984075663ULL)) ? (((/* implicit */int) (unsigned short)59232)) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_1] [i_1] [i_1]))))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned char) max((((unsigned long long int) arr_12 [i_6] [i_5] [i_6] [22U] [i_6] [i_0 - 2] [i_5])), (((/* implicit */unsigned long long int) (+(min((var_8), (((/* implicit */int) arr_2 [i_5])))))))));
                            /* LoopSeq 3 */
                            for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                            {
                                var_16 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min(((signed char)-51), ((signed char)-64)))))) - (((unsigned long long int) max((var_5), (((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_6])))))));
                                var_17 = ((/* implicit */long long int) arr_8 [i_5] [i_1] [i_6] [i_5]);
                            }
                            for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                            {
                                var_18 = ((/* implicit */long long int) ((var_4) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (((((/* implicit */_Bool) (short)30665)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) (-(var_10))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_10)))), (((/* implicit */unsigned int) arr_13 [i_5] [i_0] [i_5] [i_1] [i_0])))))));
                            }
                            for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 4) 
                            {
                                var_20 = ((/* implicit */int) ((min(((~(-3832066937701527571LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), (var_9)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-23337)), (var_10)))) || (((/* implicit */_Bool) arr_23 [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                                var_21 &= ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) 14U))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_10)))) ? (((var_10) + (((/* implicit */long long int) arr_26 [i_0] [i_1] [i_1] [i_6] [i_9 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1))))))));
                            }
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(-3832066937701527581LL)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 3] [i_0 - 1])) : (min((arr_26 [i_0] [i_0] [i_5] [i_6] [i_5]), (((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        arr_30 [i_10] [i_10] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)-31806)) == (((/* implicit */int) var_4))))), (min(((-2147483647 - 1)), (((/* implicit */int) arr_8 [i_10] [i_10] [i_10] [i_10])))))));
        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19669))))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-27461))) < (var_10)))), ((+(((/* implicit */int) var_11)))))))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 2; i_11 < 18; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_24 &= ((/* implicit */unsigned short) ((int) var_7));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            var_25 ^= ((/* implicit */unsigned char) max((((short) arr_11 [i_11 - 2] [i_11] [i_11] [i_12] [i_13])), (((/* implicit */short) ((unsigned char) arr_25 [i_11 - 2] [i_11 - 2] [i_13] [i_13])))));
                            var_26 = ((/* implicit */int) min((3832066937701527601LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_11] [i_10] [i_11 - 1] [i_11])))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((long long int) 8222891724809399970ULL)))) % ((+(((((/* implicit */_Bool) var_10)) ? (var_1) : (arr_36 [i_10] [i_10] [i_12] [i_14])))))));
                        }
                        var_28 = ((832101470) | (((/* implicit */int) arr_15 [i_11])));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11)))))));
                        arr_41 [i_10] [i_10] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_39 [i_10] [7U] [i_11] [i_12] [i_13]) % (((/* implicit */unsigned int) arr_6 [i_13])))) - (((/* implicit */unsigned int) (~(57784889))))))) ? (0LL) : (((/* implicit */long long int) -617026426))));
                    }
                } 
            } 
        } 
        arr_42 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (min((max((3832066937701527625LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) -648928647)))) : (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)179)))))))));
    }
}
