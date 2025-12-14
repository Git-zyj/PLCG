/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206268
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
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4096))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)137)) & (((/* implicit */int) var_7)))))));
        arr_2 [i_0 + 1] = max((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)-79)) ? (4140861428U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) 154105868U)) ? (4294967295U) : (1U))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)50)), (var_12)))) ? (((/* implicit */long long int) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) 19U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-6180430011231547524LL))))), (((/* implicit */long long int) min((2022812496U), (((/* implicit */unsigned int) max(((unsigned short)50818), (((/* implicit */unsigned short) (signed char)87)))))))))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
                        var_16 = ((/* implicit */unsigned long long int) var_4);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)63550)) : (((/* implicit */int) (unsigned char)216))))), (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */long long int) 154105868U)) : (811039968206031510LL))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) 122880)))) ? (1011752261U) : (max((((/* implicit */unsigned int) var_7)), (4294967284U))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_22 [i_5] [i_0] [i_0] [i_4] &= ((/* implicit */short) var_11);
                                var_18 -= ((/* implicit */long long int) var_12);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        arr_26 [i_0] [i_4] [(_Bool)1] [i_4] [i_4] [i_8] = ((((((/* implicit */_Bool) 0U)) ? (4140861427U) : (4140861428U))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3)))) ? (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) (signed char)16)))) : (((((/* implicit */_Bool) -1875264176068146498LL)) ? (-1486733921) : (((/* implicit */int) (unsigned short)31)))))) + (876428506))));
                        var_19 = ((/* implicit */_Bool) var_1);
                        var_20 ^= ((/* implicit */long long int) var_2);
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) max((min(((((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))))), (((/* implicit */unsigned int) (signed char)(-127 - 1))))), (var_6)));
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (835738279U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)42)))))));
                            arr_29 [(_Bool)1] [i_4] [i_4] [(unsigned short)22] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (var_1)))), (max((((/* implicit */long long int) 4140861428U)), (7891378428221919140LL)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17628))) : (2310433274481217179LL))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)3)), (var_5)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) | (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44849)))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((((/* implicit */_Bool) var_7)) ? (154105853U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 4; i_11 < 20; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        arr_36 [i_0] [i_4] = ((/* implicit */signed char) var_5);
                    }
                    var_27 = ((/* implicit */short) min((var_6), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)18804)), (10U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6817039045478444216LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) : (var_10)))));
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1839564794776090281LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (154105868U)))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_11)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)72))));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_2)) + (141)))))), (((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_6)) : (var_8)))))))))));
        arr_39 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)61926)) ? (-6275376829924007811LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111)))));
    }
    for (unsigned short i_13 = 1; i_13 < 23; i_13 += 2) 
    {
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((4027396598U) == (var_6))) ? (((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) var_5))))) || ((_Bool)1)));
        var_31 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) % (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-7310002685946583729LL))) : (((((/* implicit */long long int) var_3)) - (var_0)))))) ? (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (3465799785U)))), (var_0))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (154105868U)))));
    }
    var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_0) << (((((/* implicit */int) (_Bool)1)) - (1)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (max((((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) 2841709789U))))));
}
