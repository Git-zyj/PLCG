/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248644
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((unsigned int) (_Bool)1));
                                var_16 = ((/* implicit */short) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_10 [i_0] [i_1] [(unsigned char)10] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)2), ((unsigned char)253)))) ? (((/* implicit */int) max((var_12), (((/* implicit */short) arr_3 [i_0] [i_2]))))) : ((~(((/* implicit */int) (unsigned char)2))))));
                                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)37))))), (var_7)));
                                var_18 = ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)-5505)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (signed char)62)))) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3] [i_4])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_14 [i_0] [(unsigned char)11] [i_0] = ((/* implicit */unsigned int) (unsigned char)254);
                    var_19 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)3))))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U))))) << (((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) ((signed char) arr_2 [i_0]))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) + (105)))))) : (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)3))))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U))))) << (((((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) ((signed char) arr_2 [i_0]))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) + (105))) - (190))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_6))))))) <= (var_7)));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_21 |= ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) / (var_13)));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (signed char)0))));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((((/* implicit */int) (signed char)9)) / (var_11))) : ((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)32))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) var_3);
                    arr_24 [i_0] [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) / (((((/* implicit */_Bool) var_8)) ? (13226841585955879659ULL) : (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */long long int) ((((unsigned int) (signed char)-1)) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(short)9] [i_0] [i_8])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)254)))))))) : (-1LL)));
                    var_25 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_26 ^= ((/* implicit */_Bool) var_4);
                                var_27 = ((/* implicit */unsigned int) (-((((-(var_8))) / (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) ? (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) arr_20 [i_0 + 3] [(short)16] [i_1])) : (((/* implicit */int) (short)63)))) : (((/* implicit */int) ((signed char) (unsigned char)136))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) (signed char)4))) == (((/* implicit */int) (unsigned char)28)))))));
    var_30 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (short)74))));
    /* LoopSeq 1 */
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        var_31 = ((/* implicit */signed char) var_1);
        arr_32 [i_11] = ((/* implicit */unsigned int) (unsigned char)1);
        var_32 -= ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_11] [(short)6] [i_11] [i_11])) + (2147483647))) << (((((unsigned int) arr_15 [i_11] [6LL] [i_11])) - (627183482U)))))) % (arr_15 [i_11] [i_11] [i_11])));
    }
    var_33 = ((/* implicit */unsigned char) (_Bool)0);
}
