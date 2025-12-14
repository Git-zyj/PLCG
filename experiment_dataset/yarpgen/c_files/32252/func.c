/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32252
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
    var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((signed char) max((var_5), (var_5)))))));
    var_13 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((max((var_0), (8433180177777455048LL))) >= (8433180177777455048LL)))), ((-(-386562875)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            arr_15 [i_2] = ((/* implicit */unsigned char) (+(((((((/* implicit */int) var_11)) - (arr_1 [i_0]))) - (((/* implicit */int) arr_11 [i_4 + 3] [0LL] [i_4 + 4] [i_3]))))));
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_3 [i_0]))));
                            arr_16 [i_0] [i_0] [i_0] [i_2] [(short)5] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 386562867)) >= (1558597647U)));
                            arr_17 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */signed char) 1800242251);
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [(unsigned char)6] [i_2] [i_4])) & (arr_6 [i_0] [i_2] [(short)2])))) - (max((-8433180177777455049LL), (-8433180177777455069LL))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 += var_4;
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        var_18 ^= ((/* implicit */signed char) (~(((7940121516275484346ULL) + (((/* implicit */unsigned long long int) var_10))))));
                        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1886234449)) / (2736369648U)));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned int) (unsigned short)30216)), (2736369644U)))))));
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        var_21 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_19 [8] [i_2] [(_Bool)1] [(short)2] [(short)2] [i_0])) + (var_9)))) / ((-(arr_12 [i_0] [i_0] [i_6] [10LL] [i_0] [i_0])))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((max(((~(arr_5 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]))))))) >> (((((long long int) (~(-8433180177777455070LL)))) - (8433180177777455015LL))))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35602))) | (((7940121516275484346ULL) + (((/* implicit */unsigned long long int) -2120742438))))))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) 386562875))))))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_24 = (~(((int) arr_9 [i_0] [i_1] [i_2] [i_7])));
                            var_25 |= ((/* implicit */short) ((long long int) -2509325333724306115LL));
                        }
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) var_0);
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10972466196251581399ULL))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((arr_5 [i_0]) ^ (((/* implicit */long long int) arr_27 [i_0] [i_1] [i_2] [i_6] [i_6]))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            var_30 += ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_9)), (arr_12 [i_0] [(short)6] [10] [i_10] [6LL] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned int) max((3585776572257296448ULL), (((/* implicit */unsigned long long int) 1459976491U))))))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (+(((((/* implicit */_Bool) 7432935209937804711LL)) ? (((/* implicit */unsigned long long int) 2736369649U)) : (0ULL))))))));
                        }
                    }
                    var_32 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) -8433180177777455038LL)), (15865079326584634519ULL)));
                }
            } 
        } 
    } 
}
