/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208799
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
    var_18 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-9917)) * (((((/* implicit */int) (short)9912)) - (((/* implicit */int) (short)-9932))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_0])))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9895))) & (16436833235184705167ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9925))) & (arr_7 [i_0] [i_0] [i_0]))));
                    var_20 = ((((/* implicit */_Bool) -5543546218851125351LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9950))) : (15212458486183541188ULL));
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (((unsigned long long int) min((arr_3 [i_2] [i_1] [i_0]), (arr_3 [i_0] [i_0] [i_0]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) 7761131019995348722LL));
                }
                for (unsigned short i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                    {
                        for (signed char i_5 = 4; i_5 < 14; i_5 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)6);
                                arr_19 [i_0] [i_1] [i_3] [i_4] [i_5] = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (max((var_16), ((~(15212458486183541165ULL))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) (unsigned char)87)) ? (arr_1 [i_0 + 2] [i_0]) : (arr_15 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2]))) / (((/* implicit */unsigned long long int) 1370595442)));
                    arr_21 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) arr_14 [i_0] [i_1] [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9925)) ? (arr_27 [i_3] [i_3] [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-9918)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1]))) + (12763387426780143883ULL))) : (((/* implicit */unsigned long long int) (~(var_5)))))), (min((arr_10 [i_7 + 1] [i_6 - 2] [i_6 - 2]), (arr_10 [i_7 + 1] [i_7] [i_6 - 2])))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_7])) ? (((min((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])), (5543546218851125351LL))) >> (((/* implicit */int) min((arr_13 [i_0]), (var_14)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) (short)-9945)))))));
                                var_23 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-9898))) >= (((/* implicit */int) var_3)))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) min((7761131019995348700LL), (((/* implicit */long long int) arr_13 [i_3]))))), (arr_7 [i_0] [i_6] [i_6]))), (((/* implicit */unsigned long long int) -1422461754)))))));
                                arr_28 [i_7] [i_7] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)31)) != (((/* implicit */int) (short)-9894)))) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) <= (var_15))))))), (max((((/* implicit */unsigned long long int) 1422461749)), (arr_15 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_25 = max((2009910838524846448ULL), (((/* implicit */unsigned long long int) (short)9904)));
                                arr_35 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 760750108)) & (14050737888474045444ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)109)), (arr_23 [i_0] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_0)), (arr_7 [i_3] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_9])))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 2; i_10 < 14; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 3; i_11 < 12; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            var_27 ^= (+(((/* implicit */int) ((min((var_9), (((/* implicit */long long int) arr_43 [i_10] [i_10])))) >= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)185)))))))));
                            var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 14933809339674596615ULL))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (arr_34 [i_0] [i_1] [i_10] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9914)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1217425031)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) arr_44 [i_12] [i_12] [i_10]))))) : (((((/* implicit */_Bool) 1640880572U)) ? (arr_36 [i_0] [i_0] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9922)))))))) ? (((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */unsigned long long int) min((-1217425032), (((/* implicit */int) arr_45 [i_0] [i_0] [i_12] [i_12] [i_10] [i_11] [i_10]))))) : ((~(arr_7 [i_0] [i_1] [i_0]))))) : (max((((arr_25 [i_0] [i_0] [i_10] [i_0] [i_11] [i_0] [i_12]) >> (((1217425019) - (1217424982))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) arr_16 [i_12] [i_12] [i_0] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_10] [i_0] [i_0])))))))))));
                            arr_46 [i_11] [i_11] [i_1] [i_11] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17172905662377681204ULL)) ? (((/* implicit */int) var_8)) : (2137656924)))) ? ((+(((/* implicit */int) (unsigned short)12228)))) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_1]))))) ? (min((((/* implicit */unsigned long long int) arr_30 [i_0])), (arr_14 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) min((2226893655481793218LL), (((/* implicit */long long int) (_Bool)1)))))))));
                        }
                        var_30 = ((/* implicit */unsigned int) var_3);
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)9912)) ? ((-(arr_25 [i_0] [i_0 + 1] [i_0] [i_10 - 2] [i_10 - 2] [i_11] [i_11 - 2]))) : (min((max((6569647476861838797ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((((/* implicit */unsigned long long int) 3981113045035731201LL)) / (var_15)))))));
                    }
                    var_32 = ((_Bool) ((min((14933809339674596615ULL), (((/* implicit */unsigned long long int) 1217425031)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_0] [i_0] [i_10] [i_0] [i_0] [i_10] [i_0])) / (1217425031))))));
                }
                for (unsigned short i_13 = 2; i_13 < 14; i_13 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 3; i_14 < 12; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            {
                                var_33 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */_Bool) -2137656951)) || (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_15] [i_0] [i_0] [i_0] [i_13] [i_1] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
                                var_34 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33377))) | (16512249987762989796ULL)));
                                var_35 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) -3981113045035731201LL)) ? (((/* implicit */unsigned long long int) -1217425047)) : (arr_1 [i_1] [i_13]))))), (((/* implicit */unsigned long long int) 1217425031))));
                                arr_56 [i_14] = ((/* implicit */unsigned int) min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) (+(-2137656925))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */long long int) arr_48 [i_0] [i_0] [i_13]);
                }
                var_37 ^= ((/* implicit */_Bool) ((unsigned long long int) (+((~(var_4))))));
            }
        } 
    } 
    var_38 ^= ((/* implicit */long long int) var_11);
    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_14), (var_14))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))) : (var_17))))));
}
