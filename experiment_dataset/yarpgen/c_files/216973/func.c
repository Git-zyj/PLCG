/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216973
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1882694460)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_12))))))) : (var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_14 |= ((((/* implicit */int) arr_3 [i_1] [i_1 + 1])) << (((((/* implicit */int) arr_5 [i_0] [4LL] [i_1 - 2])) + (33))));
                    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_7 [i_2] [i_1] = ((/* implicit */int) ((arr_6 [i_1] [(signed char)1] [12] [i_1 - 2]) << (((((/* implicit */int) (signed char)90)) - (90)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) var_5);
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 3])) << (((var_10) - (6842203939173549668LL))))))));
                                arr_13 [3ULL] [i_2] [i_2] [i_2] [i_2] [i_1 + 2] [i_2] = ((/* implicit */signed char) ((((var_9) + (2147483647))) << (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(-6615127373770257328LL))))));
                }
                for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    arr_18 [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (8830564271595696993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 845462716))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 2; i_6 < 12; i_6 += 3) 
                {
                    var_19 += ((/* implicit */signed char) (-(arr_20 [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_1 - 2] [i_6 + 1] [i_6 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)112)) & (((/* implicit */int) arr_5 [i_0] [(signed char)10] [i_1 + 1]))));
                        var_20 |= (-((~(((/* implicit */int) (signed char)-1)))));
                    }
                }
                arr_26 [i_0] [0U] [9] = ((/* implicit */unsigned char) (((~((-(-1545149334361577009LL))))) / (((/* implicit */long long int) -1741100527))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 3; i_8 < 12; i_8 += 2) 
                {
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_16 [4] [i_8] [4])) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned char)184)))) <= (((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))))) ? (((/* implicit */long long int) 1906120233U)) : (max((8178228597889772673LL), (((/* implicit */long long int) arr_14 [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1])))))))));
                                var_22 = (unsigned char)19;
                                var_23 = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_1] [i_10]);
                            }
                            /* LoopSeq 3 */
                            for (unsigned char i_11 = 1; i_11 < 12; i_11 += 3) 
                            {
                                var_24 += ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_1 - 1] [i_8 + 1] [(unsigned char)0] [i_11 - 1] [(short)5] [i_11]))) : (arr_19 [(unsigned char)11] [i_9 - 1] [i_8 - 1]))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_0 [i_0] [i_9 + 2])) / (((/* implicit */int) arr_34 [i_8 - 2] [i_1 + 3])))) - (17)))));
                                arr_40 [i_0] [i_1 + 3] [i_8] [(signed char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)61))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)123)) <= ((~(((/* implicit */int) arr_32 [i_0] [5LL] [i_1] [i_8 + 1] [i_9] [i_11 - 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) max(((short)32761), ((short)-10055))))))));
                            }
                            for (long long int i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) (_Bool)0)), (13651440443757755656ULL)))))));
                                arr_44 [(unsigned char)9] [i_1] [i_8] [i_8] [i_12] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5580109489609768896LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)55))));
                            }
                            for (long long int i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
                            {
                                arr_47 [(_Bool)0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((arr_6 [i_1] [i_1] [i_1 + 3] [i_1]) >> (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_9 - 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_13]))))) - (4294967285U)))));
                                var_26 = ((min((((/* implicit */long long int) 137486500)), (var_10))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_8 - 1] [i_1 + 2])) >= (((/* implicit */int) arr_11 [i_8] [i_13] [i_9 - 1] [i_9] [i_8 - 1] [i_13] [i_1 + 2])))))));
                                var_27 = ((/* implicit */unsigned short) var_7);
                            }
                            arr_48 [i_1] [i_8 + 1] [i_1] [5] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_30 [i_0] [i_8 - 3] [(unsigned char)4]) / (var_5)));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_1))));
            }
        } 
    } 
}
