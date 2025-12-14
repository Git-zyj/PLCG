/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209342
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 8736224727534638552LL)) && (((/* implicit */_Bool) (signed char)-11))))), ((unsigned short)65535)))), (max((((/* implicit */long long int) var_4)), (var_9)))));
                    var_19 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (unsigned short)65535)), (4294967290U))) >= (((/* implicit */unsigned int) (((+(((/* implicit */int) var_3)))) / (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-72)))))))));
                    var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 0)) : (var_13))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2743309637600395520ULL)) ? (1654656003) : (((/* implicit */int) (short)1793))))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_9))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) ((6357149271989805909LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57364)))))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2244))) >= (var_17)))))))));
                                var_22 = ((((/* implicit */_Bool) (~(min((var_5), (((/* implicit */unsigned long long int) (unsigned char)83))))))) ? (((((/* implicit */_Bool) 6357149271989805929LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1833))) : (((long long int) -1)))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) (_Bool)0))))) * (-1LL))));
                                arr_17 [i_0] [i_1] [(unsigned short)8] [i_1] [(unsigned short)8] [(unsigned char)14] = ((/* implicit */unsigned long long int) var_16);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) != (0LL)));
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */unsigned long long int) 14LL);
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1004549764)))) : (((var_9) ^ (((/* implicit */long long int) 15)))))))));
                    }
                    arr_25 [i_1] |= ((/* implicit */long long int) 21);
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_31 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)172);
                            /* LoopSeq 4 */
                            for (short i_9 = 2; i_9 < 23; i_9 += 1) 
                            {
                                arr_35 [i_0 + 1] [i_0] [i_7] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((unsigned short) 16362072086578239419ULL)))));
                                arr_36 [i_0 + 1] [i_1] [i_7] [i_7] [i_0] = ((/* implicit */long long int) (-(-32)));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                            {
                                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 8831302171440029799ULL)))))));
                                var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_4)) : (-1LL)));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (((((/* implicit */_Bool) (short)-7034)) ? (((/* implicit */unsigned long long int) 2LL)) : (var_5)))));
                            }
                            /* vectorizable */
                            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                            {
                                var_28 = ((/* implicit */long long int) (_Bool)1);
                                arr_41 [i_0] [i_1] = ((/* implicit */unsigned int) ((_Bool) var_1));
                                var_29 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (4994934996013332496ULL)));
                                var_30 = ((/* implicit */unsigned long long int) ((0) <= (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)125)))))));
                                var_31 = ((/* implicit */signed char) var_7);
                            }
                            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                            {
                                var_32 = (unsigned short)7580;
                                arr_46 [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)18))))), (-1197402041987860911LL)));
                            }
                            /* LoopSeq 2 */
                            for (unsigned int i_13 = 1; i_13 < 22; i_13 += 4) 
                            {
                                arr_49 [i_0] [i_13] [i_8] [i_7] [(unsigned char)12] [i_0] = ((/* implicit */_Bool) var_12);
                                var_33 = ((/* implicit */unsigned char) (((-(var_2))) % (((/* implicit */int) ((unsigned char) 31LL)))));
                            }
                            for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
                            {
                                arr_52 [5] [5] [i_0] [5] [i_14] = ((/* implicit */unsigned char) ((long long int) min((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_17)))));
                                var_34 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)44809)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (9940781263346951971ULL)))))), (((((/* implicit */int) (signed char)56)) >> (((/* implicit */int) ((((/* implicit */_Bool) 2084671987131312197ULL)) && (((/* implicit */_Bool) var_0)))))))));
                            }
                        }
                    } 
                } 
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((short) ((((/* implicit */int) max((var_11), ((unsigned char)252)))) << (((/* implicit */int) ((_Bool) 1197402041987860943LL)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_16 = 2; i_16 < 11; i_16 += 2) 
        {
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (-(2114535430492041992LL))))));
            arr_58 [i_15] [i_15] [i_16] = max((((16362072086578239419ULL) % (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) (-(8LL)))));
            var_37 = (~(((/* implicit */int) (short)7029)));
        }
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            var_38 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65524)) > (((/* implicit */int) (short)-11238))))) : (((/* implicit */int) ((_Bool) 0ULL)))));
            var_39 = ((/* implicit */unsigned short) var_6);
        }
        arr_61 [i_15] = ((/* implicit */_Bool) (unsigned char)18);
        var_40 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)6886));
    }
    for (long long int i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */long long int) min((((unsigned int) var_13)), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)7)) - (((/* implicit */int) (unsigned char)32)))))));
        var_42 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 6954953319213505669LL))))), (min((((/* implicit */int) ((signed char) 2767585992U))), ((-(((/* implicit */int) (short)-7026))))))));
        var_43 |= ((/* implicit */signed char) ((long long int) 1150193395U));
        var_44 *= ((/* implicit */signed char) ((unsigned long long int) ((0LL) >> (((((/* implicit */int) (unsigned char)196)) - (159))))));
        var_45 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 8901300482814885240ULL)))) | (min((3144773901U), (((/* implicit */unsigned int) (short)-7012)))))));
    }
}
