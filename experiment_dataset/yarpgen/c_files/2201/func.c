/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2201
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(arr_0 [i_1 - 1]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(unsigned char)17] [i_1])))))))) - (((/* implicit */int) var_8))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    var_21 *= ((/* implicit */unsigned long long int) arr_16 [i_2] [i_4 + 3] [i_4 + 2]);
                    var_22 = ((/* implicit */unsigned char) (~(arr_15 [i_2] [i_4 + 1] [i_3])));
                    arr_17 [i_2] [i_2] [i_3] [(signed char)6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_4 + 1] [i_4 - 1] [i_4 + 2])) << (((/* implicit */int) arr_10 [i_3]))));
                }
                for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_16 [i_2] [i_2] [(unsigned char)13]))))) ? (6191484782878348596ULL) : (max((4226478865808723260ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) / (12255259290831203020ULL)))))));
                        var_24 &= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) 8731172486285688014LL)), (5304214076477956312ULL))) + (((12255259290831203019ULL) + (((/* implicit */unsigned long long int) 8242903760433818267LL))))));
                    }
                    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_26 [i_7] [i_3] [i_3] [i_2] = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)4)) || (((/* implicit */_Bool) arr_25 [(unsigned char)0] [i_2] [(short)21] [7ULL] [i_7])))))) != (arr_25 [i_7] [(unsigned short)21] [i_5] [i_3] [i_2])))));
                        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)98)))) / (var_11))));
                    }
                    for (long long int i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        var_26 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) min((15779532519269726228ULL), (((/* implicit */unsigned long long int) -2007059018))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_5] [i_2])) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) arr_20 [(signed char)5] [(signed char)5] [i_3] [13LL] [0LL]))))) : ((+(5244866751823353283ULL))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) (signed char)96))))));
                        var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_29 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_3])))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_11)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) var_19)) + (((/* implicit */int) (_Bool)0)))))));
                            arr_36 [i_2] [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (8236034944200246998LL)))));
                            var_31 = ((/* implicit */unsigned long long int) ((long long int) (signed char)96));
                            var_32 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-62)))) ? (((/* implicit */int) ((unsigned char) 2870539747876927843ULL))) : ((+(var_3)))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            arr_39 [i_2] [i_3] [i_5] [i_2] [i_3] = ((/* implicit */unsigned char) ((((7311290603825660268LL) | (arr_35 [i_2] [i_2] [i_3] [i_2] [i_2] [7]))) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3])))));
                            var_33 *= ((/* implicit */_Bool) (+(6191484782878348596ULL)));
                            arr_40 [i_3] [i_9] [i_5] [2] [i_3] = ((/* implicit */unsigned long long int) ((short) var_19));
                        }
                        for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2915))) & (var_6)))) ? (((((/* implicit */_Bool) 2736071649254446325ULL)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) -1061087775)) ? (((/* implicit */int) var_10)) : (2086889252)))));
                            var_34 = ((/* implicit */unsigned long long int) (+(-9197634058884894706LL)));
                            var_35 = (+((+(5811480805609946811ULL))));
                        }
                        var_36 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 14341992594714756672ULL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)116))))));
                        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 8178088048047491959LL))));
                    }
                    var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) / (((/* implicit */int) arr_42 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2086889252)))) : (max((((/* implicit */long long int) (unsigned char)189)), (arr_24 [i_2] [i_2])))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned char) var_2);
                        arr_49 [i_2] [i_3] [i_5] [i_13] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2086889229)))) || (((/* implicit */_Bool) (+(-1432746371900062191LL))))));
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        var_40 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_2] [i_2] [i_5] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 12277097066344308355ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) : (arr_29 [i_2] [(_Bool)1] [i_2] [i_2]))))));
                        var_41 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (arr_37 [i_14] [i_3] [i_3] [i_2])));
                        arr_53 [i_3] [i_3] [16LL] = ((/* implicit */long long int) ((unsigned char) arr_48 [i_2] [i_3] [i_2] [i_2]));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_58 [i_2] |= ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_2])), (var_12)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))) + (arr_12 [i_15] [i_3]))))));
                        var_42 += ((/* implicit */unsigned short) ((signed char) ((_Bool) (signed char)35)));
                        arr_59 [i_3] [i_3] [i_5] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1933199715122312593ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (min((12060735152417153510ULL), (((/* implicit */unsigned long long int) var_19))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) 12986478363028037348ULL)))) || ((((_Bool)0) && (((/* implicit */_Bool) arr_19 [i_16] [i_3] [i_3]))))))) < (min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)75)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))))));
                        arr_62 [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) -6198477271769632963LL)) || (((/* implicit */_Bool) var_9))))), (var_19)))) >= (min((((/* implicit */int) (short)18477)), (((((/* implicit */_Bool) 8895051422484046517ULL)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (short)-18478))))))));
                        var_44 = ((signed char) min(((unsigned short)21211), (((/* implicit */unsigned short) (_Bool)1))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            arr_66 [i_3] [i_16] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 4170561499257924480ULL)) ? (((/* implicit */int) (short)18477)) : (((/* implicit */int) (_Bool)1)))));
                            var_45 -= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)95)))) * (((((/* implicit */int) (unsigned char)68)) / (((/* implicit */int) arr_41 [i_17] [(_Bool)1] [(_Bool)1] [i_16] [i_3]))))));
                        }
                        arr_67 [i_2] |= ((/* implicit */unsigned long long int) ((short) (unsigned char)74));
                    }
                    var_46 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2]))))) ? (6191484782878348596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_10 [i_2]))))) * ((-(5968337870439360554ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_65 [i_2] [i_3] [i_5] [i_5] [0ULL] [i_3] [i_3])))))));
                    arr_68 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)54932))));
                }
                for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 558967226416466646ULL)) ? (((/* implicit */int) (_Bool)1)) : (-1174342090)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (14277292946579863920ULL)))))) ? (((((unsigned long long int) var_1)) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) : ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) : (12986478363028037348ULL))))))))));
                    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_3] [i_18] [i_18])) ? (((/* implicit */int) (unsigned short)52582)) : (var_3)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 12255259290831203020ULL)) && (((/* implicit */_Bool) (short)-18478)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_18] [i_3] [i_2]))) : (((((/* implicit */_Bool) arr_34 [i_3] [i_3] [i_3] [i_2] [i_3] [i_3] [i_18])) ? (18339412024624919962ULL) : (((/* implicit */unsigned long long int) var_12))))))))))));
                }
                for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    var_49 = ((/* implicit */signed char) ((9552281650641457997ULL) << (((((/* implicit */int) max((arr_27 [i_3]), (((/* implicit */short) ((unsigned char) -4296354361168673134LL)))))) - (108)))));
                    var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)36)) >= (((/* implicit */int) (unsigned char)3)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)60))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)237)) && (((/* implicit */_Bool) -1603039446)))))))) ? ((+(max((3600372855579423877ULL), (((/* implicit */unsigned long long int) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (var_12)))) ? (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22026))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)33)))))))));
                    var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-76))))), (min((1006804221870119386LL), (((/* implicit */long long int) (unsigned char)31)))))))));
                }
                /* LoopNest 3 */
                for (long long int i_20 = 1; i_20 < 22; i_20 += 2) 
                {
                    for (unsigned char i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_52 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */_Bool) var_2)) ? (13585831582037234958ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                                var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3056464439263105483LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (+(16078889249204729421ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-7388)))))));
                            }
                        } 
                    } 
                } 
                arr_85 [i_3] [i_3] = ((/* implicit */signed char) var_5);
            }
        } 
    } 
}
