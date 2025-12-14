/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206222
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((short) ((unsigned char) (_Bool)1)));
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (-1984923890))))))) & (((((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_1])))) << (((/* implicit */int) ((-1984923890) > (((/* implicit */int) arr_0 [i_0])))))))));
        }
        var_14 += ((/* implicit */signed char) (~((-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            arr_10 [i_2] [i_3] = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((signed char) -1984923880))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_3] [i_3])) + (2147483647))) >> (((-1984923866) + (1984923889)))))))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_15 = ((/* implicit */unsigned int) ((((max((13ULL), (((/* implicit */unsigned long long int) -2147483631)))) % (((/* implicit */unsigned long long int) max((arr_12 [i_2] [i_3]), (arr_1 [i_3])))))) >> ((((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))) - (41)))));
                var_16 += ((/* implicit */int) arr_4 [i_3] [i_4]);
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_16 [i_4] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((-1369574991) >= (((int) (signed char)-23))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        arr_20 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_6])) : (((/* implicit */int) (unsigned char)177)))))))) : (((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]) | (var_9)))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3711599043U) | (((/* implicit */unsigned int) arr_3 [i_6]))))) ? (arr_3 [i_2]) : (((((/* implicit */_Bool) var_11)) ? (-1984923890) : (((/* implicit */int) arr_19 [i_3] [i_3]))))))) && (((((/* implicit */int) arr_19 [i_4] [i_3])) == (((/* implicit */int) arr_13 [i_3]))))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)254)) - (((/* implicit */int) (signed char)-14))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1984923880)) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) arr_4 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_3]))) : (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned long long int) arr_14 [i_2] [i_3] [i_4] [i_4] [i_3])) : (5939192206893666774ULL))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_19 += ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) (~(arr_6 [i_5])))) ? (arr_11 [i_2] [i_2] [i_4]) : ((((_Bool)1) ? (-1984923890) : (1369574988))))) : (((/* implicit */int) arr_2 [i_2] [i_2]))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8847)) ? (arr_3 [i_2]) : (((/* implicit */int) ((unsigned char) max((1984923874), (((/* implicit */int) (_Bool)1))))))));
                }
                var_21 += ((/* implicit */int) (!((_Bool)1)));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    arr_28 [i_8] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */int) ((unsigned char) 488972457));
                    var_22 = ((/* implicit */_Bool) max((var_22), (arr_15 [i_2] [i_2] [i_2] [i_2])));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_23 += ((/* implicit */unsigned int) arr_9 [i_2] [i_2]);
                    arr_32 [i_2] [i_9] [i_7] [i_3] = ((/* implicit */_Bool) ((arr_14 [i_2] [i_3] [i_7] [i_3] [i_9]) + (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_3])) : (-1369575010)))));
                    var_24 = ((/* implicit */unsigned int) ((signed char) arr_21 [i_3] [i_3] [i_2] [i_9]));
                }
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_7] [i_7])) && (((/* implicit */_Bool) 4294967295U))))) >= (((/* implicit */int) arr_18 [i_2]))));
                var_26 = ((/* implicit */signed char) -488972458);
                /* LoopSeq 1 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_36 [i_2] [i_10 - 1] [i_2] [i_10]))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        arr_41 [i_11] [i_11] [i_11] [i_11] [i_11] [i_3] = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_4 [i_7] [i_11])) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (signed char)34)))) : (((/* implicit */int) ((arr_7 [i_2] [i_3]) == (((/* implicit */int) (signed char)-126)))))));
                        var_28 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)36184))));
                        arr_42 [i_11] [i_3] [i_7] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)92))));
                        var_29 = ((/* implicit */_Bool) ((arr_23 [i_2] [i_3] [i_10 - 1] [i_10]) ^ (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) arr_30 [i_2] [i_3] [i_7]))))));
                    }
                    for (int i_12 = 1; i_12 < 21; i_12 += 3) 
                    {
                        var_30 -= ((/* implicit */signed char) ((((((((/* implicit */int) arr_4 [i_10] [i_3])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_25 [i_10] [i_3] [i_7] [i_10] [i_12 + 1] [i_3]))));
                        var_31 = (!(arr_45 [i_3] [i_10 - 1] [i_3] [i_10 - 1] [i_12] [i_3] [i_12]));
                    }
                    for (int i_13 = 2; i_13 < 22; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                        var_33 += ((int) (unsigned char)0);
                        var_34 += ((/* implicit */unsigned int) arr_17 [i_2] [i_3] [i_7] [i_2]);
                    }
                }
            }
            /* LoopSeq 1 */
            for (signed char i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                arr_52 [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */int) (signed char)25)) <= (((/* implicit */int) (signed char)-42)))) ? (((/* implicit */int) max((((/* implicit */short) arr_4 [i_14] [i_2])), ((short)-9128)))) : (((/* implicit */int) (signed char)-114)))));
                var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_11 [i_14] [i_14 + 3] [i_14 + 4]))));
                var_36 -= ((/* implicit */unsigned char) (_Bool)1);
                arr_53 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 12622266957586120251ULL)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (unsigned short)29349))))), (((arr_47 [i_14 + 1] [i_3] [i_14]) | (arr_47 [i_14 + 1] [i_3] [i_14])))));
            }
            arr_54 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (-(max((((((/* implicit */int) (signed char)-10)) | (((/* implicit */int) arr_22 [i_2] [i_2] [i_3])))), (((/* implicit */int) arr_45 [i_3] [i_3] [i_3] [i_3] [i_2] [i_2] [i_3]))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned int) ((((int) var_8)) & (min((((/* implicit */int) arr_15 [i_15] [i_15] [i_2] [i_2])), ((+(((/* implicit */int) arr_19 [i_15] [i_2]))))))));
            var_38 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_47 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)81))))))) ? (((/* implicit */int) max((arr_0 [i_2]), (((/* implicit */short) min((arr_34 [i_15] [i_2] [i_15]), ((signed char)-75))))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) == (12622266957586120261ULL)))) + (-727369814)))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) ((signed char) (~(1397016168U))));
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    for (int i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        {
                            arr_69 [i_2] [i_16] [i_17] [i_18] [i_19] [i_17] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_37 [i_18] [i_2] [i_17] [i_18] [i_17] [i_19 + 2] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_18] [i_16] [i_18] [i_16] [i_19]))) : (12622266957586120245ULL))) << (((((/* implicit */int) arr_59 [i_17] [i_17] [i_17])) + (27)))));
                            arr_70 [i_2] [i_16] [i_18] [i_2] [i_18] [i_18] [i_19] = (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 201326592))))), (((-2147483639) ^ (var_5)))))));
                        }
                    } 
                } 
                arr_71 [i_2] [i_16] [i_2] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-41)))) < (((((/* implicit */unsigned int) -1984923900)) % (1536295779U))))))));
            }
        }
        for (signed char i_20 = 0; i_20 < 23; i_20 += 2) 
        {
            var_40 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned char)87)))) >> (((arr_11 [i_2] [i_2] [i_20]) + (1501399781)))))) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) arr_0 [i_2]))));
            var_41 = ((/* implicit */short) (unsigned short)17431);
            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -2147483639))) ? (((/* implicit */int) ((((12622266957586120261ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_20] [i_20] [i_20])))))) : (((/* implicit */int) ((signed char) arr_15 [i_2] [i_2] [i_2] [i_2])))));
        }
        arr_74 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_34 [i_2] [i_2] [i_2])))))) ? (max((5824477116123431354ULL), (((/* implicit */unsigned long long int) (unsigned short)65522)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)40806)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-46))))))))));
        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) (-(-1522448498)))) : (((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))) ? (2477226275U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)18)))))))));
    }
    for (int i_21 = 0; i_21 < 15; i_21 += 4) 
    {
        arr_78 [i_21] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)-112))))));
        var_44 = ((signed char) ((((/* implicit */_Bool) (short)895)) ? (((/* implicit */unsigned long long int) -1522448473)) : ((~(5824477116123431337ULL)))));
        arr_79 [i_21] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_58 [i_21] [i_21] [i_21])) <= (((((/* implicit */_Bool) arr_46 [i_21] [i_21] [i_21])) ? (((/* implicit */int) arr_58 [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_45 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) ((arr_77 [i_21]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_21] [i_21] [i_21] [i_21] [i_21])))))) : (((/* implicit */int) max(((unsigned char)85), (((/* implicit */unsigned char) (_Bool)1))))))))));
    }
    /* LoopSeq 2 */
    for (int i_22 = 2; i_22 < 18; i_22 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */int) max((var_45), ((~(((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) arr_26 [i_22] [i_22 - 2] [i_22] [i_22] [i_22] [i_22])) : (((/* implicit */int) arr_26 [i_22] [i_22 - 2] [i_22] [i_22] [i_22] [i_22]))))))));
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) arr_58 [i_22] [i_22] [i_22])))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-96)))))));
        /* LoopSeq 2 */
        for (unsigned int i_23 = 0; i_23 < 19; i_23 += 4) 
        {
            var_47 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((signed char) (_Bool)1)))) != (((((/* implicit */int) arr_72 [i_23] [i_23])) | (((((/* implicit */int) arr_8 [i_22] [i_23] [i_22])) - (arr_14 [i_22] [i_22] [i_23] [i_23] [i_23])))))));
            var_48 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_23] [i_23] [i_22 - 2] [i_23] [i_22 + 1])))))));
        }
        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
        {
            var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) arr_44 [i_24 - 1] [i_24 - 1])), ((unsigned short)5150)))))));
            var_50 = arr_33 [i_24] [i_24] [i_24 - 1] [i_24 - 1];
        }
    }
    for (int i_25 = 2; i_25 < 18; i_25 += 4) /* same iter space */
    {
        var_51 += ((signed char) ((((/* implicit */_Bool) arr_12 [i_25 - 2] [i_25])) ? (arr_12 [i_25 - 1] [i_25]) : (((/* implicit */unsigned int) 2147483647))));
        var_52 = ((/* implicit */short) ((((((/* implicit */_Bool) 644700139U)) ? (arr_66 [i_25 - 1] [i_25] [i_25 - 1] [i_25 + 1] [i_25 - 1] [i_25 + 1] [i_25]) : (arr_66 [i_25 - 2] [i_25 - 2] [i_25] [i_25 - 2] [i_25 + 1] [i_25] [i_25]))) + (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_26 = 0; i_26 < 22; i_26 += 4) 
    {
        arr_92 [i_26] = ((/* implicit */signed char) (-(((/* implicit */int) arr_91 [i_26] [i_26]))));
        var_53 += ((/* implicit */signed char) arr_56 [i_26] [i_26]);
        arr_93 [i_26] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-37)) + (((/* implicit */int) arr_56 [i_26] [i_26]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-79)) % (((/* implicit */int) arr_43 [i_26] [i_26] [i_26] [i_26] [i_26])))))));
        var_54 = ((/* implicit */unsigned char) var_11);
        var_55 = ((/* implicit */signed char) ((_Bool) arr_4 [i_26] [i_26]));
    }
    var_56 += (_Bool)0;
}
