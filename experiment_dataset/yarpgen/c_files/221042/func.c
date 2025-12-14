/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221042
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
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) -8916564761729163068LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_16)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_14))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (min((-1006929113), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))) ? (var_14) : (var_11)));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) 67108800)))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) 950378055))))))))));
                        var_21 *= ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -1290257468)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)50))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1890203168)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4581259202534659693LL)) && (((/* implicit */_Bool) 7192220644489983565ULL))))) : ((-(((/* implicit */int) var_10))))))));
                        arr_11 [i_4] [i_4] [i_2] [10] [i_0] &= (_Bool)1;
                    }
                    arr_12 [(_Bool)1] [i_0] [i_0] [(signed char)8] = ((/* implicit */unsigned int) (-((+(2147189411)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 4; i_5 < 7; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    var_22 *= ((/* implicit */unsigned short) (+(min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (1186600232))))))));
                    arr_17 [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1152921504605798400LL)) ? (var_15) : (((/* implicit */unsigned int) -1222279741))))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((long long int) 499290913)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)173))))))) : ((((!(((/* implicit */_Bool) var_10)))) ? (max((((/* implicit */unsigned long long int) var_4)), (11254523429219568062ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)127)) : (var_6))))))));
                    var_23 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                }
            } 
        } 
        arr_18 [i_0] [i_0 + 2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_17)) ? (var_12) : (var_0))), (var_0)));
        arr_19 [i_0] = ((/* implicit */unsigned char) var_7);
    }
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_22 [i_7] = ((long long int) ((((/* implicit */long long int) -950378056)) / (var_11)));
        arr_23 [i_7] = (((_Bool)1) && (((/* implicit */_Bool) 4294967295U)));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) var_14);
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (((!((_Bool)1))) && ((!(((/* implicit */_Bool) var_15)))))))));
        }
        var_26 = ((/* implicit */int) (~(var_12)));
    }
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        arr_32 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 437298822U)) && (((/* implicit */_Bool) min(((-(var_12))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50567)) * (((/* implicit */int) (_Bool)0))))))))));
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) var_11);
            arr_35 [3] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((((_Bool)1) ? (1920U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12200))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6U)) && ((_Bool)1))))))) ? ((~(var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_16))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)50553)))))))));
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            arr_38 [(_Bool)1] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (var_16) : (((/* implicit */long long int) 3379058007U))))) ? (4611853223247216224LL) : (((/* implicit */long long int) 536838144U))));
            var_28 &= ((/* implicit */long long int) (+(((/* implicit */int) (!((_Bool)0))))));
            var_29 = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 3 */
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) var_6);
                /* LoopSeq 4 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_31 = ((/* implicit */signed char) ((var_11) + (var_16)));
                    var_32 = ((/* implicit */signed char) ((long long int) var_11));
                    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)199)))))));
                }
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)5474))));
                    arr_45 [i_9] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3991446689U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56175))) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (((((/* implicit */_Bool) (short)-23852)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (45435774396283816LL)))));
                }
                for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */long long int) max((var_35), (2980495355604024927LL)));
                    arr_49 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
                    var_36 = ((var_11) / (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)9361)))));
                }
                for (signed char i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    var_37 = ((/* implicit */_Bool) ((int) 950378046));
                    arr_52 [1U] [i_11] [i_12] [i_16] = ((/* implicit */short) (-(((/* implicit */int) var_13))));
                }
                var_38 = ((/* implicit */_Bool) var_0);
            }
            for (short i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 13; i_19 += 1) 
                    {
                        {
                            arr_60 [i_19] [i_18] [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)18190))));
                            var_39 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
                            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */unsigned int) -950378047)) > (437298822U))))));
                            var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2980495355604024928LL)) ? (-864618267) : (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 9324334746940510955ULL)) ? (3721826737U) : (((/* implicit */unsigned int) -844677504))))));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 13; i_20 += 4) 
                {
                    for (long long int i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) 32260103U);
                            arr_67 [i_9] [(_Bool)1] = ((/* implicit */long long int) ((var_0) >> (((((long long int) var_11)) - (2358326291124964033LL)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_22 = 0; i_22 < 13; i_22 += 2) 
                {
                    var_44 &= ((((((/* implicit */long long int) var_12)) >= (9223372036854775807LL))) ? (2147483647) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)1)))));
                    arr_70 [2U] [i_17] [i_9] [i_9] [(unsigned short)7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((7705347883899751631LL) / (9223372036854775790LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_45 -= ((/* implicit */_Bool) ((int) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                    var_46 = ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_17))) & (var_14))));
                    arr_71 [i_9] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) var_7)) : ((((_Bool)1) ? (950378048) : (((/* implicit */int) (unsigned short)16729))))));
                }
            }
            for (int i_23 = 3; i_23 < 11; i_23 += 4) 
            {
                arr_74 [i_23] = ((/* implicit */unsigned short) (_Bool)1);
                var_47 ^= ((long long int) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */unsigned int) -142235088)) : (3544156517U)));
            }
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned short) var_8);
            /* LoopNest 2 */
            for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_49 += ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)496))))) || (((/* implicit */_Bool) var_4)));
                        var_50 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49789))));
                        var_51 = ((/* implicit */long long int) min((var_51), (max((((/* implicit */long long int) ((((/* implicit */_Bool) -2980495355604024930LL)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (_Bool)0))))), (((1150669704793161728LL) & (var_11)))))));
                    }
                } 
            } 
        }
        var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3857668474U)), (var_14)))) ? (((((/* implicit */_Bool) var_8)) ? (9223372036854775807LL) : (2980495355604024927LL))) : (((/* implicit */long long int) ((-950378058) % (var_8))))))) ? (max((min((((/* implicit */long long int) var_4)), (-5891616782410709701LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3544156517U)))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)249))))))))));
        var_53 ^= ((/* implicit */unsigned long long int) var_15);
    }
    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-288230376151711744LL) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -3229786157313781121LL)))))) : (((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50416)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) (_Bool)0))))) : (min((((((/* implicit */_Bool) var_10)) ? (5554113453676860824LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)44818)))))))));
}
