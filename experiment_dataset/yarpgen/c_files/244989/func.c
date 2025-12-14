/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244989
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((max((var_8), (((((/* implicit */_Bool) 4279352477U)) ? (1775025232U) : (71299695U))))) != (((unsigned int) 4220893634U)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 |= ((var_11) % ((~(arr_5 [i_2 - 1] [i_1 - 1] [i_0 - 1] [0U]))));
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((3512065145U) != (1954129922U)))), (((unsigned int) arr_2 [i_0 - 2] [i_1 - 1]))))) && (((/* implicit */_Bool) (-(arr_5 [i_0] [i_0] [i_2 + 3] [i_2 + 3]))))));
                }
            } 
        } 
        var_15 = 2147483648U;
    }
    for (unsigned int i_3 = 4; i_3 < 16; i_3 += 3) /* same iter space */
    {
        arr_8 [i_3] = 4095266184U;
        var_16 += ((unsigned int) ((unsigned int) arr_6 [i_3 + 3] [i_3 - 3]));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                arr_16 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) 2324062757U)) ? (3729534868U) : (3053985003U));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    var_17 = arr_3 [11U] [i_5 - 2] [i_3];
                    var_18 *= ((unsigned int) ((((/* implicit */_Bool) arr_18 [i_3] [i_4 + 3] [i_3 + 1])) ? (arr_0 [i_3 - 3] [i_5 + 1]) : (max((1921985383U), (1353468235U)))));
                    var_19 += arr_19 [i_3] [6U] [8U] [i_6];
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3 + 2])) ? (1270014051U) : (arr_0 [i_3] [i_4])))) ? (var_4) : (arr_15 [i_5 + 2] [i_7])))) ? ((~(1240982312U))) : (((((/* implicit */_Bool) arr_0 [i_3] [i_4 + 1])) ? (((((/* implicit */_Bool) 3053984999U)) ? (1240982293U) : (466460021U))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (1U) : (arr_3 [i_3] [i_4 + 3] [i_3]))))));
                        var_21 ^= ((((/* implicit */_Bool) 3053985003U)) ? (((unsigned int) 246969132U)) : (67092480U));
                        var_22 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_3 - 3] [i_3 - 3] [i_4 + 2])) && (((/* implicit */_Bool) arr_13 [i_3 + 2] [i_5] [i_4 + 1])))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [12U] [12U])) && (((/* implicit */_Bool) 1240982271U))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        arr_24 [i_3] [i_4] [i_5 + 2] [4U] [10U] &= ((((/* implicit */_Bool) 8257536U)) ? (arr_13 [i_5] [i_6] [i_8]) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (3649939760U) : (4244538573U))));
                        var_23 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [11U] [i_6] [11U] [11U])) && (((/* implicit */_Bool) 3910566183U)))))));
                        var_24 = ((/* implicit */unsigned int) (!(((var_1) == (3461751283U)))));
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    arr_27 [i_3 + 2] [i_3] [i_5 - 2] [18U] = (((-(arr_18 [i_5 + 1] [i_3 - 4] [i_3]))) & (((((/* implicit */_Bool) arr_19 [i_3] [i_4 + 2] [i_3] [i_9])) ? (((unsigned int) arr_15 [i_3] [i_5])) : (((var_11) * (0U))))));
                    var_25 = ((((unsigned int) ((arr_3 [i_3] [i_3] [i_3]) & (645027536U)))) >> (((1225518394U) - (1225518381U))));
                    var_26 = max((min((1185088471U), (arr_22 [i_3 + 1] [8U] [i_3] [i_3] [i_3 - 1] [i_3]))), (min((arr_4 [i_3]), (((unsigned int) 1240982283U)))));
                }
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                {
                    var_27 += (~(min((((((/* implicit */_Bool) var_3)) ? (arr_18 [i_4] [i_4] [i_3]) : (arr_12 [2U] [i_3]))), (1723713401U))));
                    var_28 -= ((((/* implicit */_Bool) 4286709760U)) ? (458752U) : (2757304728U));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((unsigned int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4 + 1] [10U] [10U])) ? (arr_17 [i_3] [i_4 - 3] [i_4] [i_4 + 2]) : (arr_17 [i_3] [i_4 + 1] [i_4] [i_4]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                    {
                        arr_32 [i_3] = arr_30 [i_3] [i_4] [i_5 + 1] [i_3] [7U] [i_4] [i_4];
                        var_30 = ((/* implicit */unsigned int) min((var_30), (min(((-((~(arr_30 [i_3] [i_3] [i_3 + 1] [0U] [i_3] [0U] [i_3 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3] [i_3 + 1])) && (((/* implicit */_Bool) 1240982274U)))))))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((((/* implicit */_Bool) 3552277746U)) ? (67108864U) : (3989329744U)))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */_Bool) 4060480406U)) ? (8257536U) : (arr_2 [i_3 + 3] [i_4 - 3])))));
                        var_33 |= ((((/* implicit */_Bool) ((arr_22 [i_12] [i_10] [4U] [4U] [i_4] [i_3]) & (((var_0) / (3583015994U)))))) ? ((~(var_0))) : (((arr_17 [i_12] [i_4] [i_5 + 3] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])))))))));
                        arr_35 [i_3] = ((unsigned int) ((((/* implicit */_Bool) arr_5 [17U] [i_5] [i_10] [19U])) ? ((~(645027535U))) : (arr_33 [i_5 + 2] [i_3])));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((((/* implicit */_Bool) 0U)) ? (37036093U) : (2836839496U)))));
                        var_35 = arr_0 [i_3] [i_4];
                    }
                }
                var_36 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_14 [2U] [2U] [2U]), (((unsigned int) arr_33 [i_3 + 3] [10U]))))) && (((/* implicit */_Bool) ((arr_3 [i_3] [i_3] [16U]) << (((((((/* implicit */_Bool) arr_23 [2U] [i_4] [6U] [i_4] [2U])) ? (3053985047U) : (var_4))) - (3053985020U))))))));
                var_37 = var_5;
                arr_36 [i_3] [i_3] = ((((/* implicit */_Bool) ((arr_5 [i_3] [i_3 + 3] [i_3 + 2] [i_3 - 1]) << (((arr_5 [i_3] [i_3 + 3] [i_3 + 2] [i_3]) - (3028505035U)))))) ? (arr_5 [i_3] [i_3 + 3] [i_3 + 2] [i_3 + 3]) : (min((arr_5 [i_3] [i_3 + 3] [i_3 + 2] [13U]), (arr_5 [i_3 - 2] [i_3 + 3] [i_3 + 2] [i_3]))));
            }
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_14 = 1; i_14 < 18; i_14 += 3) 
                {
                    var_38 -= arr_14 [16U] [i_13] [16U];
                    arr_42 [i_3] [i_4] [i_4] [15U] [i_4 + 3] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(305637559U)))) && (((/* implicit */_Bool) ((unsigned int) 1240982315U))))))) / (((((/* implicit */_Bool) 3053985025U)) ? (3053985019U) : (305637545U))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 1; i_15 < 18; i_15 += 1) 
                    {
                        var_39 |= 1236880315U;
                        var_40 = max((((3969492722U) >> (((3989329744U) - (3989329722U))))), (((unsigned int) arr_39 [i_13] [i_13] [i_14 - 1] [i_14])));
                        var_41 *= ((arr_14 [i_3 - 2] [i_4] [6U]) << (((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_13] [i_14 - 1] [i_15 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2258968779U)) && (((/* implicit */_Bool) arr_29 [i_4 - 3] [i_13] [i_13] [8U])))))) : (min((arr_41 [i_3] [i_13] [i_13] [i_13]), (arr_21 [2U] [2U]))))));
                    }
                }
                for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    arr_49 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((min(((+(3053985042U))), (125999488U))) == (1851760740U)));
                    /* LoopSeq 4 */
                    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        arr_52 [i_3] = 1851760757U;
                        arr_53 [i_3] [i_3] = max((max((arr_4 [i_3]), (4168967794U))), (((((/* implicit */_Bool) ((1984U) % (arr_19 [i_17] [i_3] [i_3] [i_4])))) ? (min((arr_2 [i_3] [i_3 - 2]), (arr_44 [i_3] [i_4 - 1] [i_13]))) : (arr_26 [i_3 - 4] [i_4 - 2] [i_3] [i_4 - 2] [i_17]))));
                    }
                    for (unsigned int i_18 = 2; i_18 < 18; i_18 += 2) 
                    {
                        var_42 = ((((arr_34 [i_3 + 1] [i_3 + 1] [i_18 + 2]) != (arr_33 [i_3 + 3] [i_3]))) ? (arr_7 [i_3]) : (max(((-(117440512U))), (((unsigned int) arr_48 [i_3 + 4] [i_4 - 2] [i_4 - 2])))));
                        var_43 &= ((((((/* implicit */_Bool) var_5)) ? (arr_25 [i_3 - 1]) : (min((2443206550U), (2787269671U))))) >> (((arr_40 [i_4]) - (75240939U))));
                        var_44 ^= min((0U), (134217727U));
                    }
                    for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_16] [i_19])) ? ((~(3053985003U))) : (arr_56 [i_4] [i_4 + 1] [i_4 + 1] [i_19] [i_4 + 1] [i_4])))))))));
                        var_46 = 2478910915U;
                        var_47 ^= arr_39 [i_3] [i_3] [i_3 + 3] [i_3];
                        var_48 = ((((/* implicit */_Bool) ((arr_51 [i_3 + 3] [14U] [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_4 - 3]) >> (((((((/* implicit */_Bool) 16515072U)) ? (4232293058U) : (var_9))) - (4232293051U)))))) ? (((((/* implicit */_Bool) (+(965639997U)))) ? (arr_28 [i_3 - 4] [i_4 + 2] [i_4 - 2] [i_4 + 2] [i_13] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) ((1048560U) != (arr_20 [i_19] [i_3] [i_4 - 2] [i_4 - 2] [i_3]))))))) : (var_6));
                    }
                    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
                    {
                        var_49 = max((var_6), (((unsigned int) 312398264U)));
                        arr_60 [i_3] [i_4] [i_16] [i_16] [i_20] [10U] [i_3] = ((((/* implicit */_Bool) (-((~(arr_29 [i_3] [i_3 - 3] [i_3] [i_3])))))) ? (arr_2 [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_3 - 2] [i_4] [i_4 + 3] [i_16] [12U] [i_13] [i_13])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 523264U)) ? (arr_7 [i_20]) : (4294967295U)))))))));
                    }
                    arr_61 [i_3 + 4] [i_3 - 4] [i_4] [i_3] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435455U)) ? (arr_23 [i_4 + 2] [i_4] [i_3 - 4] [17U] [i_3]) : (arr_23 [i_4 + 3] [i_4 + 3] [i_13] [i_16] [i_3])))) ? (var_5) : (((((/* implicit */_Bool) 2080768U)) ? (3701710920U) : (67108864U))));
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 1; i_21 < 19; i_21 += 1) 
                    {
                        var_50 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_3] [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_1 [i_3 + 2] [i_16]))))), (((0U) / (348454828U)))))) ? (arr_41 [i_3] [i_3] [i_16] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_23 [i_3] [i_16] [i_13] [i_4] [i_3]) & (arr_0 [i_3] [i_3])))))))));
                        arr_65 [i_4] [i_3 - 2] [i_3] [i_4] [i_3 - 2] = min((((/* implicit */unsigned int) ((4290772992U) == (8257538U)))), (arr_59 [i_3]));
                    }
                }
                arr_66 [i_3] = ((min((1541079637U), (2473742319U))) & (((((2724911150U) != (4194301U))) ? (arr_39 [i_13] [i_4 + 2] [i_4 - 1] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_13]) != (arr_29 [11U] [i_4] [i_3] [i_3]))))))));
                arr_67 [i_3 - 1] [i_3] [i_3] = ((((((/* implicit */_Bool) arr_64 [i_3 + 2] [i_3] [i_3] [i_3 - 1] [i_3 + 4] [i_3])) ? (arr_64 [i_3] [i_3 - 1] [i_3] [i_3 + 3] [i_3 + 3] [i_3]) : (arr_64 [i_3] [i_3] [i_3] [i_3 - 2] [i_3 - 1] [i_3]))) & (max((arr_64 [17U] [i_3] [i_3 - 3] [i_3 + 3] [i_3] [i_3]), (arr_64 [i_3] [i_3] [i_3] [i_3 - 3] [i_3] [i_3]))));
                var_51 = ((((unsigned int) arr_46 [i_4 - 1] [i_4] [i_13] [i_3 + 2] [i_3] [11U])) / (((unsigned int) arr_46 [6U] [i_4] [i_13] [i_3 + 3] [i_3 + 3] [i_13])));
                /* LoopSeq 1 */
                for (unsigned int i_22 = 3; i_22 < 18; i_22 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 3; i_23 < 17; i_23 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned int) max((var_52), (((((/* implicit */_Bool) 1839758718U)) ? (305637551U) : (10U)))));
                        arr_75 [i_3] [i_4] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (arr_56 [i_3 + 2] [i_4] [2U] [i_3] [i_23] [i_23]) : (arr_0 [17U] [i_4]))), (max((var_1), (arr_25 [i_23])))))) ? (((unsigned int) ((((/* implicit */_Bool) 289784459U)) ? (0U) : (1498521448U)))) : (((unsigned int) 7U)));
                        var_53 -= 471791926U;
                        arr_76 [i_3 + 3] [i_4 + 3] [i_13] [i_3] [0U] = ((((/* implicit */_Bool) ((min((arr_4 [i_3]), (var_10))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 645027552U)) && (((/* implicit */_Bool) 4111045519U))))))))) ? (((max((3298204124U), (4286709784U))) << (((var_9) - (3872870694U))))) : (((3053985007U) & (var_11))));
                        arr_77 [i_3] [i_3] [i_3 + 3] [i_3] [i_3] = ((((((/* implicit */_Bool) arr_55 [i_3 - 4] [i_3 - 4] [i_3 - 4] [i_3] [i_3] [i_3] [i_3 - 4])) ? (arr_55 [i_3] [14U] [i_3] [i_3] [i_3] [i_3 - 3] [i_3 + 1]) : (arr_55 [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 3]))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_23])) ? (125999497U) : (arr_41 [i_3] [i_4] [i_13] [i_3])))) && (((/* implicit */_Bool) var_7))))));
                    }
                    var_54 += ((unsigned int) ((arr_0 [i_3 - 4] [i_4 - 2]) << (((arr_0 [i_3 - 4] [i_4 - 2]) - (3585944812U)))));
                    var_55 = arr_44 [i_3] [i_4 - 1] [i_13];
                }
            }
            var_56 = 1372132595U;
            var_57 = arr_2 [i_3 + 1] [i_4];
            arr_78 [i_3] = ((arr_25 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 925690189U)) ? (21733839U) : (4050048507U))) == (((((/* implicit */_Bool) 2566137476U)) ? (9U) : (arr_54 [i_4] [i_3 + 3] [i_3 + 2] [i_3] [5U]))))))));
        }
        for (unsigned int i_24 = 0; i_24 < 20; i_24 += 4) 
        {
            var_58 -= (+(max((min((134217728U), (4168967808U))), (((/* implicit */unsigned int) ((arr_73 [i_3] [i_3] [i_24] [i_3] [i_3] [i_3]) == (3717168683U)))))));
            var_59 = arr_58 [i_3 + 4] [i_24] [11U] [i_3 - 2];
        }
    }
    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 3) 
    {
        arr_83 [i_25] = ((unsigned int) 3053985024U);
        var_60 = max((((unsigned int) min((arr_80 [i_25] [i_25]), (3223544910U)))), (arr_29 [i_25] [i_25] [i_25] [i_25]));
        var_61 = ((unsigned int) 3955887399U);
        var_62 += 645027547U;
    }
    var_63 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 4029672569U))))), (var_7));
}
