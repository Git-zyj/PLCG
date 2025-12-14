/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35250
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 -= ((/* implicit */int) var_8);
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) << (((min((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)24407))) <= (8070450532247928832LL)))))) + (1848895930033410581LL))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        var_13 -= ((/* implicit */unsigned long long int) (~(((8070450532247928848LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127)))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41296)) << (((((/* implicit */int) (unsigned char)128)) - (120))))))));
            var_14 += ((/* implicit */short) ((var_5) >> (((/* implicit */int) (unsigned char)32))));
            var_15 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)109));
            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)192))));
            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)4298)))))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((var_10) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24239))) & (var_3))))))));
        var_19 -= ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 2 */
        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 1) 
        {
            arr_13 [i_3] = ((/* implicit */unsigned short) min((arr_11 [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 2])))));
            arr_14 [i_3] = ((((/* implicit */unsigned long long int) min((-5867794933205588258LL), (130944LL)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))) / (4389456576512ULL))));
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_8)))));
                arr_20 [i_3] [i_5] [i_6] [i_3] = min((((((/* implicit */unsigned long long int) -8070450532247928832LL)) - (1352307784909062729ULL))), (((/* implicit */unsigned long long int) (short)-20499)));
                var_21 = ((/* implicit */unsigned short) var_4);
            }
            for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned short i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) 0ULL))));
                            var_23 += ((((18446744073709551603ULL) + (((/* implicit */unsigned long long int) var_9)))) + (((((/* implicit */_Bool) arr_9 [i_8 - 1])) ? (arr_12 [i_3] [i_5] [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10436))))));
                            arr_27 [i_3] [i_5] [(short)22] [18ULL] [i_8 - 1] [i_9] [i_9] = ((/* implicit */long long int) ((unsigned long long int) arr_22 [i_8] [i_8 + 1] [i_8 - 1] [(short)11]));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned short) arr_21 [(unsigned short)9] [i_5] [(unsigned char)22] [i_3])))));
                var_25 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((unsigned short) var_7))))));
                arr_28 [i_3] = min((((/* implicit */unsigned long long int) 3382442573580216638LL)), (((((/* implicit */_Bool) max(((short)9093), (((/* implicit */short) (unsigned char)44))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) : (min((var_4), (((/* implicit */unsigned long long int) (short)-4290)))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_2))));
                            arr_34 [11ULL] [i_5] [i_3] [i_5] [i_11] [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-4266)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((short) var_7)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 3; i_12 < 21; i_12 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    arr_40 [i_3] [i_5] [i_3] [i_5] [i_13] [i_13] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22234))) + (9884355829375361529ULL))));
                    arr_41 [16ULL] [i_5] [(unsigned char)11] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4289)) >> (((var_4) - (9977047583612242562ULL)))));
                    var_27 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-4264)) ? (((/* implicit */int) (short)7959)) : (((/* implicit */int) (unsigned short)24234)))));
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    var_28 *= ((/* implicit */unsigned char) var_7);
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) (~(2397407141152887814LL)));
                        arr_48 [i_3] [i_5] [i_12] [i_14] = ((/* implicit */short) ((unsigned long long int) ((arr_23 [i_3] [(unsigned char)18] [(unsigned short)9] [i_14]) * (18446744073709551604ULL))));
                        var_30 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_12 - 1] [i_12 + 1] [i_12 + 2]))));
                    }
                }
                arr_49 [6ULL] [i_5] [i_3] = ((((((/* implicit */_Bool) ((short) 3382442573580216638LL))) ? (8925397499512068537ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21654))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (arr_25 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12]))))));
            }
            arr_50 [22ULL] [i_5] [22ULL] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)4290)), (-5654258868913564930LL)));
            var_31 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)1))) <= (((/* implicit */int) arr_19 [i_5] [i_5] [i_3])))))) ^ ((~(0ULL)))));
            arr_51 [i_3] = ((/* implicit */long long int) ((unsigned long long int) 18401905463845429499ULL));
            arr_52 [i_3] [i_3] [i_3] = ((/* implicit */short) ((int) ((6656991231363567582ULL) ^ (var_4))));
        }
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 8487098073889266451ULL)) ? (638757612639304844ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (min((13451314634256314459ULL), (((((/* implicit */_Bool) 8644593237043567488ULL)) ? (((/* implicit */unsigned long long int) 562948879679488LL)) : (var_3)))))));
    }
    for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 4) 
    {
        var_33 += ((/* implicit */long long int) (!(((((/* implicit */_Bool) 6830918627971628086LL)) && (((/* implicit */_Bool) arr_0 [i_16 - 2]))))));
        /* LoopSeq 2 */
        for (short i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                var_34 -= ((/* implicit */short) 71776119061217280ULL);
                arr_61 [(unsigned short)4] [(unsigned short)4] [i_16] [i_16 + 1] |= ((/* implicit */unsigned long long int) max((((long long int) ((15935241864178656936ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_16 + 1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((12493748588628471777ULL), (((/* implicit */unsigned long long int) 9223372036854775806LL))))) && (((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) var_7)) - (34688)))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 4; i_19 < 11; i_19 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) ((max(((~(16483015786071407341ULL))), (((/* implicit */unsigned long long int) (unsigned short)5864)))) + (max((((/* implicit */unsigned long long int) arr_53 [i_19 - 2])), (min((var_5), (((/* implicit */unsigned long long int) arr_6 [8LL] [8LL] [i_19]))))))));
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-31665), (var_0)))) ? (((((/* implicit */_Bool) 18401905463845429499ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20499))))) : (((/* implicit */unsigned long long int) 8771806135234090630LL))))) ? (min((((/* implicit */int) arr_3 [i_16 - 2] [i_19])), ((-(((/* implicit */int) var_0)))))) : ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))));
                }
                for (unsigned long long int i_20 = 4; i_20 < 11; i_20 += 1) /* same iter space */
                {
                    var_37 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)5864)))) || (((((/* implicit */unsigned long long int) ((long long int) var_0))) != (arr_56 [4])))));
                    arr_67 [i_18] = ((/* implicit */short) ((((5952995485081079839ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_16 - 2]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (((((((/* implicit */unsigned long long int) 8743974523375053891LL)) ^ (12493748588628471774ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)5852), (((/* implicit */unsigned short) (short)-20456))))))))));
                    var_38 &= ((/* implicit */long long int) ((unsigned char) (unsigned short)59671));
                }
            }
            arr_68 [i_16 - 1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_35 [i_16 - 2] [i_17] [i_16 - 2])))) ? (12421981041647978373ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                arr_72 [i_16] [i_17] [i_21] [i_17] = ((/* implicit */unsigned char) (unsigned short)53139);
                arr_73 [i_21] [i_17] [11LL] [11LL] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (+(5568926410211759870LL)))), (12421981041647978386ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((5368394829181606260ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))))));
                var_39 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)22550)), (5952995485081079851ULL)));
            }
            /* vectorizable */
            for (unsigned char i_22 = 1; i_22 < 11; i_22 += 4) 
            {
                arr_76 [i_22 + 1] [i_16 - 2] = ((/* implicit */short) (+((-(var_9)))));
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 11; i_23 += 2) 
                {
                    for (unsigned short i_24 = 3; i_24 < 11; i_24 += 1) 
                    {
                        {
                            arr_81 [i_16] [i_16] [i_22 - 1] [i_22 - 1] [i_23] [i_24 - 2] [i_16] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (18446744073709551615ULL));
                            var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_42 [i_16 + 1]))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)20)) ? (var_5) : (12421981041647978379ULL))))))));
            }
        }
        for (unsigned long long int i_25 = 2; i_25 < 11; i_25 += 1) 
        {
            var_42 = ((/* implicit */unsigned long long int) ((long long int) (-(arr_25 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16] [i_25 - 1]))));
            var_43 = ((/* implicit */unsigned short) arr_10 [i_16]);
            var_44 = ((/* implicit */short) max((((0ULL) ^ (((/* implicit */unsigned long long int) arr_66 [i_16 - 2])))), (((unsigned long long int) arr_77 [i_16] [i_16 + 1] [i_25 + 1] [i_25 + 1]))));
        }
        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (+(min((1192973064990048215ULL), (((/* implicit */unsigned long long int) arr_7 [i_16])))))))));
        var_46 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_47 [i_16 - 2])) * (15162653638591089562ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) / (arr_47 [i_16 - 2]))))));
        arr_85 [i_16 - 2] [(unsigned short)10] = ((/* implicit */long long int) max((((unsigned long long int) -5246088508495220172LL)), (min((arr_55 [i_16 + 1]), (((/* implicit */unsigned long long int) (unsigned short)22234))))));
    }
    /* vectorizable */
    for (unsigned short i_26 = 1; i_26 < 14; i_26 += 1) 
    {
        arr_90 [i_26] = ((unsigned long long int) var_0);
        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) 11ULL))));
    }
    var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)209))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5431))) ^ (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) || (((/* implicit */_Bool) var_0))));
    var_49 = ((/* implicit */unsigned long long int) min(((((-(((/* implicit */int) (unsigned short)33397)))) | (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_0)))))))));
}
