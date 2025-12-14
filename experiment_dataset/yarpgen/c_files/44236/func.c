/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44236
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (-((((~(((/* implicit */int) (unsigned short)4)))) | (((/* implicit */int) (_Bool)0))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65518)) >> (((/* implicit */int) (!((_Bool)1)))))))));
                    var_21 *= ((/* implicit */unsigned short) (short)30205);
                }
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)37)) || (((/* implicit */_Bool) (unsigned char)248)))))) & (2244397464U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_5))))))))));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-((-(1769751904)))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)11)) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (2244397466U))))))) : (((((/* implicit */int) (unsigned char)0)) % (-1934731434)))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)30205)) && ((_Bool)1))))))) - (max((((/* implicit */unsigned int) (short)13353)), (4294967289U)))));
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_26 ^= (-(((3771490443U) & (((/* implicit */unsigned int) var_9)))));
                                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)65535)) - (65530)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)111)) != (((/* implicit */int) (unsigned short)17)))))) : (min((-5608462054524653737LL), (((/* implicit */long long int) (unsigned short)0))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 5608462054524653736LL))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3))))))) ^ (((/* implicit */int) var_8))));
                }
                arr_23 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (678447114U)))) < (((((/* implicit */_Bool) 3616520170U)) ? (((/* implicit */unsigned long long int) 2244397471U)) : (3188018897790686369ULL)))))) < (((/* implicit */int) (unsigned char)149))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
    var_28 = ((/* implicit */signed char) 17863263124949218042ULL);
    var_29 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22876))) ^ (17863263124949218042ULL)))));
}
