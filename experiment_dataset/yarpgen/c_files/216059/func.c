/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216059
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
    var_15 = ((/* implicit */_Bool) 255U);
    var_16 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) 1271715538U)) == (5433816643895146919ULL)))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (var_13)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (((long long int) 17179869183ULL))))) ? (((min((((/* implicit */unsigned long long int) -4201686255089965912LL)), (arr_1 [i_0]))) << (((-4201686255089965912LL) + (4201686255089965950LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
                    arr_6 [i_1] [i_1 + 1] [i_2] [i_2] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 4201686255089965911LL)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4842870365108112845LL)) ? (((/* implicit */unsigned long long int) -4201686255089965912LL)) : (137438953471ULL)))) ? (16652063434068514209ULL) : (15262327456760037262ULL))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            {
                arr_13 [i_3] [(short)8] [i_3] &= ((/* implicit */signed char) max((((3184416616949514343ULL) >> (((4842870365108112847LL) - (4842870365108112785LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4201686255089965912LL)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_11 [i_4] [i_3])))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8814)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (max((((((/* implicit */_Bool) 4842870365108112844LL)) ? (arr_11 [i_3] [i_4 + 3]) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)4080)))))))));
                        arr_19 [i_3] [14ULL] [i_5] &= ((/* implicit */int) min((((unsigned long long int) arr_18 [i_3] [i_3 + 1] [i_3 + 1] [i_3])), (max((((/* implicit */unsigned long long int) var_4)), (3184416616949514354ULL)))));
                        arr_20 [i_3] [i_3] [i_3] [i_3 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_3] [i_4] [i_5])), (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_4 [i_3 + 1]))))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) (+(arr_23 [i_4 - 1] [i_3] [i_4 + 3] [i_4 + 1])));
                        var_21 *= ((/* implicit */int) (~(arr_21 [i_7 - 1] [i_5] [i_4])));
                        var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1099511627775ULL), (5370313531959181972ULL)))) ? ((~(arr_12 [i_5] [i_3]))) : (((/* implicit */unsigned long long int) var_5))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)32256)))));
                        arr_24 [i_7 - 3] [i_5] [i_5] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        arr_27 [i_3] [i_5] [i_4 + 2] [i_3] = max(((-((+(arr_21 [i_3] [(signed char)16] [i_5]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) 11258646817833472793ULL)))))));
                        var_23 *= var_8;
                        arr_28 [i_3] = ((/* implicit */int) min((max((arr_1 [7ULL]), (((/* implicit */unsigned long long int) (+(arr_2 [i_3])))))), (arr_12 [i_4] [i_5])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */int) arr_3 [i_3]);
                            var_25 *= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1))))));
                            arr_31 [i_3] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)202))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -7591568681539455728LL)), (17011920886944412065ULL)));
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_38 [i_3] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_35 [i_3]);
                            var_27 *= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) 4201686255089965897LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_15 [i_4])))))) <= (((/* implicit */int) (short)23782))));
                            arr_39 [i_3] [i_11] [i_11] [i_11] [i_11] [15ULL] = (((+((-(9142085416894815901ULL))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_1 [(short)2])) ? (4842870365108112844LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (+(2408958597U))))))));
                            var_28 &= ((/* implicit */unsigned int) 3184416616949514353ULL);
                        }
                        for (long long int i_12 = 2; i_12 < 17; i_12 += 3) 
                        {
                            var_29 = ((/* implicit */int) arr_0 [i_10]);
                            var_30 = var_12;
                            var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_14 [i_3 + 1] [i_3 + 1] [i_4 + 2])), (var_12)));
                            arr_42 [i_5] [i_3] = min((((/* implicit */unsigned long long int) (_Bool)0)), (11751704825167122421ULL));
                        }
                        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) (!((!(var_2)))))) : (((/* implicit */int) (unsigned char)32))));
                            var_33 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) ((arr_37 [i_3] [i_3] [i_3] [i_3] [i_3]) >> (((/* implicit */int) var_13))))), (min((5602344063060759899ULL), (((/* implicit */unsigned long long int) 2388999899U))))))));
                        }
                        arr_46 [i_3 + 1] [i_3] [i_5] [i_10] = (!((!(min(((_Bool)1), (arr_5 [i_4] [i_5] [i_3]))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-19407))));
                        arr_50 [i_3 + 1] [i_3 + 1] [i_3] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5370313531959181987ULL))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_22 [i_5] [(signed char)2] [i_5] [i_5])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (arr_35 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                            arr_58 [i_16 - 1] [i_5] &= ((/* implicit */short) var_8);
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-4842870365108112831LL) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_16 - 1] [i_15] [i_5] [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_3] [i_3] [i_3])))))) : (5370313531959181972ULL)));
                            arr_59 [i_4] [i_3] [i_4] [(_Bool)0] [i_4 - 1] = ((/* implicit */unsigned int) var_4);
                        }
                        for (int i_17 = 1; i_17 < 15; i_17 += 2) 
                        {
                            arr_63 [i_3] [i_3] [i_5] [i_15] [i_17] = ((/* implicit */unsigned int) (-(var_10)));
                            arr_64 [i_5] [i_15] [i_15 + 2] [i_5] [i_3] [14ULL] [i_5] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 6450774036013126856LL)) ? (arr_52 [i_5] [i_4 + 1]) : (((/* implicit */unsigned long long int) arr_2 [i_5])))) >= (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) arr_10 [i_3 + 1] [i_15 + 2]))))))))) >= (((((/* implicit */_Bool) ((arr_30 [i_15] [i_5] [i_5]) ? (arr_55 [i_3] [i_4 + 2] [i_5] [16ULL] [i_5]) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(short)8] [i_4 - 1] [i_5] [i_15 + 2] [i_17 + 4]))) : (var_1)))));
                            var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_3 + 1] [(signed char)13] [i_3 + 1] [(signed char)13] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4842870365108112807LL))))));
                            arr_65 [i_5] [i_3] [i_5] = ((/* implicit */int) 5097444078763008732LL);
                        }
                        var_38 *= ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1905967397U)))) ^ (arr_26 [i_15 + 2] [i_5] [i_5] [i_3])))));
                    }
                    var_39 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)95)) - (((/* implicit */int) (!(((/* implicit */_Bool) 1040187392U)))))));
                    arr_66 [i_5] [i_3] [i_3] [i_3] = 2357618895953120441ULL;
                }
                for (unsigned long long int i_18 = 2; i_18 < 17; i_18 += 4) 
                {
                    var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) var_11))));
                    var_41 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-4842870365108112845LL), (((/* implicit */long long int) 1040187392U))))) ? (((((/* implicit */_Bool) var_7)) ? (7227092939187955939ULL) : (((/* implicit */unsigned long long int) 4430009696502700389LL)))) : (((/* implicit */unsigned long long int) arr_22 [i_3] [i_18 - 1] [i_18 - 1] [i_18 - 1]))))));
                }
            }
        } 
    } 
}
