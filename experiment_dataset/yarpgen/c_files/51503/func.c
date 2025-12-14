/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51503
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
    var_20 -= ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_21 ^= (unsigned short)13852;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (~(((/* implicit */int) var_17))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            arr_14 [i_4] [i_4] [i_0] = 2069336757U;
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)58302)) - (-643867608)));
                            arr_15 [i_0] [i_1] [i_4] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)53)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7261)) % (((/* implicit */int) (unsigned short)7209))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14392)) % ((+(((/* implicit */int) var_7))))));
                            arr_18 [i_5] [i_5] [(unsigned short)8] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (288230376151711743ULL)));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_6))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned short) ((10334519460457412971ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14392)))));
                            arr_21 [i_6] = ((/* implicit */unsigned short) ((_Bool) var_16));
                            var_27 = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)14392)))) - (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (short)14644)))))));
                        }
                        arr_22 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) (unsigned short)54992)) - (54992))))) & (((/* implicit */int) var_5))));
                    }
                }
                var_28 = ((/* implicit */unsigned long long int) max((var_28), ((+(min((18158513697557839873ULL), (7138605427533841142ULL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_7 = 2; i_7 < 16; i_7 += 3) 
    {
        arr_25 [(short)0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9531185223129988545ULL)) ? (((/* implicit */int) (unsigned short)14392)) : ((~(((/* implicit */int) (short)-13300))))))) == ((+((-(288230376151711743ULL)))))));
        var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (short)13299))))) % (((/* implicit */int) ((((/* implicit */_Bool) (~(2147483647)))) || (((/* implicit */_Bool) (+(72057576858058752ULL)))))))));
        arr_26 [i_7] [i_7] = (!(((/* implicit */_Bool) min((288230376151711742ULL), (((/* implicit */unsigned long long int) var_13))))));
        var_30 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))))))), (((((((/* implicit */_Bool) (short)-6472)) ? (18158513697557839876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54557))))) << ((((~(2239506875765861881ULL))) - (16207237197943689690ULL)))))));
        var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)33))))) | (((16207237197943689738ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2872))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        var_32 ^= ((/* implicit */signed char) ((((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) + (((/* implicit */unsigned int) max((0), (((/* implicit */int) var_10)))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_5)))));
                    var_34 ^= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) -199257074)), (288230376151711731ULL))), (((/* implicit */unsigned long long int) ((short) ((unsigned short) var_19))))));
                    var_35 = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) min((18158513697557839876ULL), (((/* implicit */unsigned long long int) 117440512U)))))), (((short) min((((/* implicit */long long int) 4294967295U)), (var_0)))))))));
                                var_37 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
