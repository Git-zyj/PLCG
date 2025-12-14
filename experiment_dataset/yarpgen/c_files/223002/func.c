/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223002
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) min((0ULL), (0ULL)));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))))) : (max((((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned short) var_14))))), (min((((/* implicit */unsigned int) (unsigned short)20514)), (448U))))));
                }
            } 
        } 
    } 
    var_16 *= min((((((/* implicit */_Bool) min((14196556780863935966ULL), (((/* implicit */unsigned long long int) var_10))))) ? (14707831803389678544ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9567781670748292601ULL)) ? (((/* implicit */int) (unsigned short)20514)) : (((/* implicit */int) (unsigned char)125))))))), (((/* implicit */unsigned long long int) (unsigned short)39082)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4250187292845615650ULL)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned short)64770)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_10))))) ? (min((16116787534932105039ULL), (((/* implicit */unsigned long long int) 33488896)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_6)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_2)))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        for (int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) var_12);
                                var_19 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (min((max((var_0), (((/* implicit */unsigned long long int) var_1)))), (min((((/* implicit */unsigned long long int) 8330973668468749895LL)), (4250187292845615650ULL)))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((var_2) ? (min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53443)) ? (((/* implicit */int) (unsigned short)59100)) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_21 -= ((/* implicit */long long int) min((4250187292845615649ULL), (((/* implicit */unsigned long long int) max((76273317U), (((/* implicit */unsigned int) (_Bool)0)))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10)))) : (min((((/* implicit */unsigned long long int) (unsigned char)82)), (14196556780863935963ULL)))))) ? (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (unsigned short)20514))))), (max((var_0), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_10)))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (signed char)20)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)7)), ((unsigned char)164))))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))) : (((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
                        arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))));
                    }
                    for (long long int i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        var_25 |= ((/* implicit */unsigned long long int) min(((unsigned short)6650), (((/* implicit */unsigned short) (_Bool)0))));
                        arr_35 [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) 1823161269U)) ? (281474972516352LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20447))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) var_2))))) ? (min((var_7), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_11)))))))));
                        var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_5)))))));
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4250187292845615652ULL), (((/* implicit */unsigned long long int) (unsigned char)253))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_5))))))) ? (min((max((((/* implicit */unsigned long long int) var_15)), (var_0))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20447))) : (4278547560U)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((var_8), (var_8))))))))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) var_14);
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_3))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */signed char) var_1)), (var_8))), (var_8))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) var_10)))))))))));
}
