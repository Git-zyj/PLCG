/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190936
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) (-(18446744073709551615ULL)));
        var_16 = ((/* implicit */unsigned long long int) ((short) ((long long int) 11ULL)));
        var_17 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)69))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) min((9223372036854775807LL), (4841900835392536982LL)));
        arr_5 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
        var_19 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) -7862279854636526055LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)50))))), (((((/* implicit */_Bool) -7862279854636526055LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) : (-1445860623436170739LL)))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_20 ^= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (4841900835392536988LL) : (((((/* implicit */_Bool) (unsigned char)5)) ? (18013848753668096LL) : (((/* implicit */long long int) arr_0 [(signed char)6])))))));
            var_21 = ((/* implicit */short) 18446744073709551588ULL);
            var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)7936)), (18446744073709551604ULL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (min((var_11), (((/* implicit */unsigned long long int) (unsigned char)6)))))), (((/* implicit */unsigned long long int) (-(((long long int) arr_8 [i_1])))))));
        }
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) min(((unsigned char)250), ((unsigned char)17))))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18838)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65509)))))))) ? (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (short)-4341))))) : (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) ((8ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (-1725951314))))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_4])))))));
            var_26 = ((/* implicit */_Bool) (short)-18459);
        }
    }
    var_27 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(var_7))) : (((/* implicit */long long int) var_1)))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_28 = ((/* implicit */_Bool) 765255037100383304LL);
                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_7 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                            {
                                var_30 |= ((/* implicit */short) (_Bool)1);
                                arr_26 [i_5] [i_6] [i_7] [i_7] [i_9] = min((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_24 [i_5] [i_5] [i_5] [(unsigned char)14] [i_5]))), (((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_24 [i_9] [13LL] [i_6] [i_6] [(_Bool)1]))));
                            }
                            arr_27 [8U] [8U] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-765255037100383293LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : ((+(35184372088831ULL)))));
                            var_31 = ((short) min((((/* implicit */long long int) (unsigned char)39)), (arr_18 [8ULL] [i_8])));
                            var_32 = ((/* implicit */short) min(((_Bool)0), ((_Bool)1)));
                        }
                    } 
                } 
            }
        } 
    } 
}
