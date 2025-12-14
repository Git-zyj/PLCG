/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33820
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
    var_13 = ((/* implicit */long long int) ((_Bool) var_7));
    var_14 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) (signed char)73)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_0] [(_Bool)1] = ((/* implicit */short) (+(((arr_2 [i_0]) ^ (arr_3 [i_0] [i_1] [5LL])))));
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_15 = ((arr_3 [i_3] [0U] [0U]) < (((/* implicit */long long int) 1623531364)));
                        var_16 = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */long long int) var_6)) < (arr_3 [i_1] [i_1] [i_1])))), ((unsigned short)30245))));
                    }
                } 
            } 
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)35291), ((unsigned short)30271)))) ? (((/* implicit */int) ((signed char) 1820953116))) : (((((/* implicit */int) (signed char)113)) << (((((/* implicit */int) (signed char)96)) - (83)))))));
        }
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) arr_11 [i_0] [i_0])), (max((((/* implicit */unsigned short) var_7)), ((unsigned short)65535))))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)0] [i_4])) : (var_6))) > (((/* implicit */int) var_7)))))));
            var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35291))) + (((((/* implicit */_Bool) arr_1 [i_0] [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [(short)5] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (unsigned short)35267)) ? (4294967295U) : (3832138308U)))))));
            var_19 = (-(((((/* implicit */int) ((signed char) arr_0 [i_0] [i_4]))) - (((/* implicit */int) var_3)))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_20 += ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_5])) ? (((/* implicit */int) arr_1 [(unsigned char)5] [(unsigned char)5])) : (((/* implicit */int) (signed char)104))))) && (((((/* implicit */int) var_3)) != (((/* implicit */int) (short)20002))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_21 |= min((arr_14 [i_4] [i_4]), (min((((/* implicit */short) ((var_6) != (((/* implicit */int) (unsigned short)35291))))), (var_0))));
                            var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_6 + 2] [i_6] [i_0])) - (((/* implicit */int) ((((/* implicit */_Bool) 1326308437)) && (((/* implicit */_Bool) 469762048))))))) / (max((((/* implicit */int) max((((/* implicit */short) (signed char)-37)), (arr_11 [i_0] [i_0])))), ((-(((/* implicit */int) var_10))))))));
                            var_23 = arr_18 [i_0] [i_0] [i_5] [i_0] [i_0];
                            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((arr_6 [i_6 - 1] [i_6 + 1] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_0] [i_6 + 1] [i_0])) > (((/* implicit */int) arr_17 [(unsigned char)4] [i_6 + 2] [(_Bool)1] [(signed char)6] [(signed char)6])))))))), (((((/* implicit */_Bool) 1590212351U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25463))) : (min((6U), (((/* implicit */unsigned int) (_Bool)0))))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) -9169561311296417764LL))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)101)) || (((/* implicit */_Bool) -1LL))));
                            var_27 = ((/* implicit */int) var_11);
                            var_28 = ((/* implicit */long long int) var_1);
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
        {
            var_29 = ((((/* implicit */_Bool) -224863849)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (short)-1)));
            arr_25 [i_0] = ((((/* implicit */long long int) arr_24 [i_0] [i_9])) & (arr_2 [i_0]));
            var_30 = ((/* implicit */unsigned long long int) ((3277115791U) > (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)0)))))));
        }
        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)109)) + ((-2147483647 - 1))))) & (((unsigned long long int) arr_28 [i_0]))));
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            arr_36 [i_0] [10U] [i_0] [10U] [i_12 - 1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                            var_32 |= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_10] [i_10] [i_13]))))) ? (((/* implicit */int) min((var_0), (((/* implicit */short) arr_17 [i_0] [3ULL] [3ULL] [i_0] [i_0]))))) : (((/* implicit */int) max((((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_5))))))) : (((8442069968012562272LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            arr_37 [i_11] [i_11] [i_11] [i_0] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)24813)) > (((/* implicit */int) (_Bool)1))));
                            var_33 += ((/* implicit */_Bool) ((long long int) ((unsigned char) (~(var_12)))));
                            var_34 -= ((/* implicit */_Bool) max((min(((~(-1))), ((+(((/* implicit */int) (short)-1)))))), (((/* implicit */int) (signed char)-100))));
                        }
                    } 
                } 
                arr_38 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1);
            }
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        {
                            arr_47 [i_10] [i_14] [i_15] [i_0] = ((/* implicit */short) ((min((-1LL), ((((_Bool)0) ? (27LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) != (((long long int) arr_2 [i_0]))));
                            var_35 ^= ((/* implicit */short) (((_Bool)1) ? (arr_23 [(short)8] [(short)8] [i_15]) : (((/* implicit */int) ((((/* implicit */int) (short)24813)) > (((/* implicit */int) (signed char)99)))))));
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_23 [i_0] [i_10] [(_Bool)1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)35267)))) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) arr_23 [(short)1] [(short)1] [(short)1]))) - (50279))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    {
                        arr_54 [3U] [3U] [i_0] [5] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (-260403173))));
                        arr_55 [i_0] [i_0] [i_0] [i_17] [(unsigned short)9] [i_0] = ((/* implicit */short) (_Bool)0);
                        var_37 = ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned long long int) var_5))));
                        var_38 = ((/* implicit */unsigned long long int) (short)1833);
                    }
                } 
            } 
        }
        var_39 += (!(((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) - (1904302279U)))))));
    }
    var_40 = var_9;
}
