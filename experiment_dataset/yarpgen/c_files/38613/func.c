/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38613
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)28672)) : (((/* implicit */int) arr_0 [i_0] [7]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)36863)) : (((/* implicit */int) var_3)))) : (arr_1 [i_0])));
        var_19 *= ((/* implicit */unsigned char) (~(890089007U)));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned short) arr_0 [i_0 - 2] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)28675)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_5 [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 8128)) ^ (arr_5 [i_1])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36860))) : (var_2))))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28686))))) - (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-14127))))))))));
        var_23 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28676))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_25 -= ((/* implicit */long long int) (~((+(arr_6 [(short)2])))));
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)36850)))));
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [8LL] [i_2] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    arr_16 [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_1]);
                    arr_17 [i_4] [11] [i_2] [i_4] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_1] [i_4] [i_4] [i_1])))))));
                }
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    arr_21 [i_5] = ((/* implicit */_Bool) var_14);
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_1] [i_3] [(short)0] [i_6]))))) ? (((/* implicit */int) arr_13 [i_1] [i_3] [2U] [i_6])) : (((((/* implicit */_Bool) arr_23 [12] [i_2] [i_2] [i_2] [i_2])) ? (arr_14 [i_6] [6ULL] [i_1] [i_1]) : (((/* implicit */int) var_3)))))))));
                        var_29 -= ((((/* implicit */_Bool) (unsigned short)112)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)62455)));
                    }
                    for (short i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        arr_26 [i_1] [12LL] [i_1] [2] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) : (((((/* implicit */_Bool) (unsigned short)30556)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4159647604U)))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned short) ((unsigned char) (unsigned short)36857))))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_1 [(unsigned short)5]))));
                        var_32 -= ((/* implicit */short) (-(((/* implicit */int) var_16))));
                    }
                    var_33 += var_15;
                }
            }
        }
    }
    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_34 -= ((((/* implicit */int) var_3)) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8]))) >= (((((/* implicit */_Bool) arr_28 [i_8])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8])))))))));
        arr_29 [i_8] = ((/* implicit */unsigned short) min((8208923909974159688LL), (((/* implicit */long long int) (unsigned short)9141))));
        arr_30 [i_8] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_18)) || ((_Bool)0))));
        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) ((((/* implicit */int) arr_27 [i_8])) == (var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)17577)))))))) ? (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_28 [i_8])))) : (((/* implicit */int) arr_27 [i_8])))))));
        arr_31 [i_8] [i_8] = ((/* implicit */short) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (0)))) ? (((/* implicit */unsigned int) 0)) : (3466855255U))), (((/* implicit */unsigned int) (unsigned short)65424))));
    }
    var_36 = ((/* implicit */unsigned long long int) (unsigned short)55062);
    var_37 = ((/* implicit */unsigned long long int) var_11);
    var_38 = ((/* implicit */signed char) ((unsigned char) 21496018959013852ULL));
}
