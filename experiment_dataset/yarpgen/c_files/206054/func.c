/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206054
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
    var_12 = ((/* implicit */short) 6969567514053391084LL);
    var_13 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0 - 1]);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) arr_10 [i_0 + 1] [i_1] [i_2 + 4] [i_3]));
                        var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)13991)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)0)), ((short)32767)))) : (((/* implicit */int) (signed char)124)))), (((((/* implicit */int) (unsigned short)7223)) % (((/* implicit */int) (unsigned short)4702))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned short) ((short) arr_9 [i_1] [i_1]));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [(short)0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_0] [i_0 - 1] [(unsigned char)8] [i_4]), ((signed char)-1))))))))) * (min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)0)), ((short)26196)))), (max((((/* implicit */unsigned long long int) 7561108844746665565LL)), (17463956953591867605ULL)))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 4; i_6 < 10; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0] [i_4]))));
                            var_16 = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((5389783600106866604ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52)))))), (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (unsigned short)20146)))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) 10865284729187089848ULL)))))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) (short)-8885)), (2296835809958952960LL))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) max((((((/* implicit */int) arr_11 [i_0] [6LL] [6LL] [i_0 - 1])) % (((/* implicit */int) (signed char)-14)))), (((/* implicit */int) arr_18 [0U] [0U])))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                /* LoopSeq 3 */
                for (signed char i_10 = 4; i_10 < 10; i_10 += 4) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [i_8] [i_9] [i_9 + 1]))) >= (9146484677460520587ULL)));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_35 [i_0 + 2] [i_9] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) % (arr_25 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (short)4)) : ((-(((/* implicit */int) (unsigned short)58306))))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_9 - 1] [i_0 + 1] [i_0 + 2]))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_0 - 1] [i_0 - 1] [i_9] [i_0 - 1] [i_10] [i_11])) / (((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))) < (arr_25 [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 1] [i_0 + 1])));
                    }
                    var_22 = ((/* implicit */signed char) (-(arr_34 [i_0] [i_9] [i_9] [i_10] [i_10])));
                }
                for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    arr_41 [i_9] [10ULL] [i_12] = ((/* implicit */signed char) (-(((unsigned long long int) -1LL))));
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        arr_44 [i_8] [i_8] [6ULL] [6ULL] [i_9] = (unsigned short)58224;
                        var_23 = arr_10 [i_0] [i_9] [i_9 + 1] [i_12];
                    }
                    for (short i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_29 [i_9 - 1] [i_0 + 2] [i_0]))));
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_9 - 1]))));
                        var_26 = ((/* implicit */_Bool) arr_20 [i_9]);
                    }
                    for (short i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) (((!((_Bool)1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61344))) : (-8081826966501039594LL))))));
                        var_28 = ((/* implicit */signed char) (+(-5193087088485463771LL)));
                        var_29 = ((/* implicit */unsigned short) ((arr_4 [i_9]) % (4294967286U)));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_45 [i_12]))) >> (((/* implicit */int) arr_15 [i_9] [i_9 + 1] [i_9 + 1])))))));
                    }
                    arr_50 [i_0 + 1] [i_8] [i_9] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0 - 1])))))));
                    arr_51 [i_0] [i_0] [i_12] [i_12] [i_9] [i_0 + 1] = ((/* implicit */unsigned long long int) (short)-26195);
                }
                for (unsigned char i_16 = 3; i_16 < 11; i_16 += 2) 
                {
                    var_31 = (short)26196;
                    arr_56 [i_0] [i_0] [i_0] [i_9] [i_9] = ((/* implicit */long long int) arr_31 [i_9] [2ULL] [i_8] [i_16 + 1]);
                }
                var_32 &= ((/* implicit */_Bool) (-(arr_54 [0ULL] [i_9 + 1])));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6187))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_18] [i_18] [i_18] [i_0]))))), (min((arr_6 [i_0 + 2] [i_0] [i_0]), (((/* implicit */unsigned int) arr_48 [i_0] [i_0 + 1] [i_8] [i_17] [(short)0]))))))));
                    arr_61 [i_0 + 1] [i_0] [i_8] [i_0 + 1] [i_17] [i_0] = ((/* implicit */unsigned char) max((((unsigned int) 2971534503002406394ULL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_18])) && ((_Bool)0))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)1))))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16711))) * (((2514451042614759367ULL) / (arr_26 [i_0] [i_0] [i_17] [i_17] [i_19])))));
                        var_36 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_8] [i_0 + 2]);
                    }
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_29 [i_17] [i_17] [i_20])))) | (((/* implicit */int) arr_64 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))));
                        arr_66 [i_0] [i_17] [i_18] = ((/* implicit */unsigned short) ((arr_59 [i_18] [i_8] [i_17] [i_8] [i_18]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-16724)))));
                    }
                    for (signed char i_21 = 3; i_21 < 11; i_21 += 2) 
                    {
                        arr_70 [i_0] [i_21] [i_21] [i_0 - 1] [i_21] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) (-(-2567231543453982817LL)))) : (2973504830151038765ULL)))));
                        var_38 = ((/* implicit */short) (+((((-(((/* implicit */int) (signed char)(-127 - 1))))) * (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
                    }
                    var_39 = ((/* implicit */_Bool) (((+(18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7238)))));
                }
                /* LoopSeq 1 */
                for (short i_22 = 0; i_22 < 12; i_22 += 1) 
                {
                    var_40 &= ((/* implicit */_Bool) (unsigned short)7206);
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((short)-122), (((/* implicit */short) (unsigned char)85))))), (((1240233624U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)58826))) ? (((((/* implicit */int) (unsigned char)165)) + (((/* implicit */int) arr_30 [i_0] [i_8] [i_17] [(unsigned char)5])))) : (((/* implicit */int) arr_42 [i_0] [i_22] [i_0] [i_22] [i_0]))))) : (min((((/* implicit */long long int) arr_8 [i_0] [i_0 + 1] [i_0])), (arr_7 [i_22] [i_22] [(short)1])))));
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 12; i_23 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)5769), (((/* implicit */unsigned short) (unsigned char)207)))))) & ((-(arr_36 [i_0] [i_0] [i_0 + 1] [i_0] [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (short)-1))) ? ((+(((/* implicit */int) (signed char)20)))) : (((/* implicit */int) min(((unsigned short)55323), (((/* implicit */unsigned short) (signed char)63))))))))));
                        arr_76 [i_22] [i_17] [i_22] = ((/* implicit */unsigned int) (short)14126);
                        var_43 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) min(((short)-8875), (((/* implicit */short) ((((/* implicit */int) arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_16 [i_8] [i_8] [i_8])))))))), (min((min(((unsigned short)6843), (((/* implicit */unsigned short) (signed char)14)))), (min((arr_42 [i_0] [i_22] [i_17] [i_22] [i_0]), (((/* implicit */unsigned short) arr_75 [i_0 - 1] [i_8] [i_17] [i_8] [i_23] [i_0 - 1] [i_23]))))))));
                        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2045))) | (min((207673268U), (((/* implicit */unsigned int) arr_19 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1046528U)))))))))) : (arr_26 [(_Bool)1] [i_8] [i_22] [i_22] [(_Bool)1])));
                        arr_77 [i_0 + 2] [i_8] [i_22] [i_22] [(signed char)2] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17250)))) & (((/* implicit */int) arr_57 [i_0]))));
                    }
                    var_45 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)55323)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0 - 1]))))) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (unsigned short)4759))));
                    /* LoopSeq 3 */
                    for (unsigned short i_24 = 2; i_24 < 10; i_24 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned short) (unsigned char)92);
                        var_47 = ((/* implicit */unsigned long long int) 14680064U);
                        arr_80 [i_0] [i_8] [i_8] [i_22] [i_17] [i_22] [i_24 + 2] = ((/* implicit */unsigned long long int) ((signed char) max((((-5199859677291156358LL) % (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_22]))))), (((/* implicit */long long int) arr_42 [i_0] [i_22] [i_22] [i_22] [i_22])))));
                        arr_81 [i_0] [i_0] [i_0] [i_0] [i_22] = ((/* implicit */unsigned int) ((((unsigned int) 2263427669U)) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                    }
                    for (unsigned short i_25 = 2; i_25 < 10; i_25 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)7)) < ((-(((/* implicit */int) arr_29 [i_22] [i_0 + 2] [i_0 + 2]))))));
                        arr_84 [i_22] [i_22] [i_17] [i_22] [i_17] [i_17] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) max((arr_58 [i_25 + 1]), (((/* implicit */unsigned short) (short)-11)))))))));
                        var_49 = ((/* implicit */long long int) (-((((+(((/* implicit */int) arr_31 [i_22] [i_22] [i_8] [i_22])))) >> (((((arr_59 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [(short)9]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_25] [i_17] [i_25] [i_25]))))) - (4294958999U)))))));
                    }
                    for (unsigned int i_26 = 0; i_26 < 12; i_26 += 4) 
                    {
                        var_50 = max((((/* implicit */unsigned short) arr_83 [i_8] [i_8] [i_22] [i_22] [i_8])), (max((((/* implicit */unsigned short) (unsigned char)209)), (min((((/* implicit */unsigned short) arr_20 [i_22])), (arr_48 [(unsigned short)6] [i_8] [i_17] [i_17] [i_26]))))));
                        arr_89 [i_0] [i_0] [i_0] [i_22] [i_0 + 2] = ((/* implicit */signed char) (unsigned char)40);
                    }
                }
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 12; i_27 += 4) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned short) 10341939527009339410ULL);
                            arr_97 [i_8] [11ULL] [i_8] [i_8] [i_8] [i_0 + 1] = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)104)), ((unsigned short)47119)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (signed char)32))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_29 = 0; i_29 < 12; i_29 += 4) 
            {
                arr_100 [i_0] [i_0] [i_29] = ((/* implicit */unsigned long long int) ((2906693209U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46)))));
                arr_101 [i_0] [i_0] [i_8] [i_29] = ((/* implicit */unsigned char) ((unsigned long long int) arr_34 [i_29] [i_29] [i_0 + 2] [i_29] [i_0 + 2]));
            }
        }
        for (short i_30 = 0; i_30 < 12; i_30 += 1) 
        {
            var_52 = ((/* implicit */signed char) min((min((min((-1629681418647667306LL), (((/* implicit */long long int) (unsigned short)6397)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) arr_19 [i_0])) : (((/* implicit */int) (unsigned short)65534))))))), (((/* implicit */long long int) max((arr_49 [i_0] [i_30] [i_30] [6ULL]), (arr_49 [8U] [i_30] [i_30] [i_30]))))));
            var_53 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_63 [i_0] [i_0 + 1] [i_0 + 1] [i_30] [i_0] [i_0] [(short)10])), ((unsigned short)22425)));
            var_54 = ((/* implicit */unsigned int) (unsigned char)5);
        }
    }
}
