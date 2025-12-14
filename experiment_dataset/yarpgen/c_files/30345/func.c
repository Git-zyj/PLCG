/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30345
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (min(((unsigned short)56576), ((unsigned short)19587)))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)11)) / (((/* implicit */int) (unsigned short)58390)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_3)))) ? ((+(((/* implicit */int) arr_1 [(unsigned short)18] [i_0 - 3])))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) >= (((/* implicit */int) (unsigned short)65535))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((unsigned short) (unsigned short)4095))) : (((/* implicit */int) var_9))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_13 = (unsigned short)65525;
            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)7341)) < (((/* implicit */int) var_9))))))))));
        }
        var_15 = (unsigned short)10034;
        var_16 = arr_3 [i_1] [i_1];
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)12330)) + (((((/* implicit */int) ((((/* implicit */int) arr_4 [i_3] [i_3])) >= (((/* implicit */int) var_9))))) << (((((/* implicit */int) (unsigned short)12337)) - (12307)))))));
        arr_11 [(unsigned short)3] [i_3] |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_7 [i_3] [i_3] [i_3])))));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        var_18 = (unsigned short)26;
        var_19 = arr_7 [i_4] [i_4] [i_4];
        var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)46622)))));
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_4] [i_4])) >> (((((/* implicit */int) (unsigned short)46166)) - (46136)))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_4]))) : (((((/* implicit */_Bool) (unsigned short)15369)) ? (((/* implicit */int) (unsigned short)16156)) : (((/* implicit */int) (unsigned short)58023))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_1 [(unsigned short)14] [i_5])) : (((/* implicit */int) (unsigned short)12661)))))))));
            arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63371)) ? (((/* implicit */int) (unsigned short)31130)) : (((/* implicit */int) (unsigned short)65531))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) ((unsigned short) ((((/* implicit */int) arr_8 [i_4])) >= (((/* implicit */int) arr_16 [i_4] [i_4]))))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_3), (arr_16 [i_4] [i_5])))))))));
        }
    }
    var_24 += var_5;
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_6] [i_6])) / ((~(((/* implicit */int) (unsigned short)65508))))));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_6] [i_7])) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_1 [i_6] [i_6])))), (((/* implicit */int) arr_24 [i_7] [(unsigned short)0] [i_6]))));
            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39934)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_6] [i_6]))))) ? (((((/* implicit */int) arr_1 [i_6] [i_8])) + (((/* implicit */int) arr_27 [i_8])))) : ((+(((/* implicit */int) arr_27 [i_6]))))));
            var_29 = (unsigned short)52402;
            /* LoopSeq 4 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_28 [i_6])) / (((/* implicit */int) var_4)))) | (((((/* implicit */_Bool) (unsigned short)53208)) ? (((/* implicit */int) (unsigned short)52153)) : (((/* implicit */int) (unsigned short)10255))))));
                var_31 = arr_23 [(unsigned short)8];
                arr_31 [i_6] [i_9] [(unsigned short)10] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8] [i_8])) ? (((/* implicit */int) arr_25 [i_9] [i_8])) : (((/* implicit */int) var_8)))))));
            }
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_26 [i_6]), (arr_26 [i_6])))) + ((-(((/* implicit */int) arr_26 [i_8]))))));
                var_33 = ((/* implicit */unsigned short) (((!(((((/* implicit */int) arr_21 [i_8])) == (((/* implicit */int) (unsigned short)53225)))))) ? (((/* implicit */int) (unsigned short)7330)) : (((((((/* implicit */int) (unsigned short)18908)) * (((/* implicit */int) arr_35 [i_6] [i_10] [(unsigned short)0] [i_6])))) + (((((/* implicit */int) (unsigned short)52975)) & (((/* implicit */int) arr_24 [i_10] [i_6] [i_6]))))))));
                /* LoopSeq 3 */
                for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned short)2934)))));
                    var_35 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_7)))) & (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_8)) - (10266))))))) - (((/* implicit */int) (unsigned short)34406))));
                    var_36 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37176)) && (((/* implicit */_Bool) arr_26 [i_6]))))) == ((-(((/* implicit */int) (unsigned short)43376))))));
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28361)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8] [i_10] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)9597)) : (((/* implicit */int) var_1))))))))));
                }
                for (unsigned short i_12 = 1; i_12 < 12; i_12 += 2) 
                {
                    arr_40 [(unsigned short)3] [i_10] [i_8] [(unsigned short)1] [i_10] [i_10] = ((unsigned short) (+(((/* implicit */int) arr_27 [i_6]))));
                    arr_41 [i_10] [i_10] [i_8] [i_10] = ((/* implicit */unsigned short) (((-(((/* implicit */int) max((var_2), (var_3)))))) < (((((/* implicit */_Bool) ((unsigned short) (unsigned short)30258))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_6] [i_8] [i_6])) && (((/* implicit */_Bool) arr_28 [i_8]))))) : (((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)7342))))))));
                    var_38 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)4522)) ? (((/* implicit */int) (unsigned short)39855)) : (((/* implicit */int) (unsigned short)5381)))) < ((+(((((/* implicit */_Bool) arr_35 [(unsigned short)5] [i_8] [i_8] [i_6])) ? (((/* implicit */int) (unsigned short)28336)) : (((/* implicit */int) var_3))))))));
                }
                for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        arr_47 [i_14] [i_14] [i_8] [i_13 + 1] [i_14] &= (unsigned short)51289;
                        var_39 = ((/* implicit */unsigned short) max((var_39), (arr_23 [(unsigned short)5])));
                        var_40 += (unsigned short)59873;
                    }
                    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_2)) / (((/* implicit */int) arr_44 [i_6] [i_6] [i_6] [i_10] [i_6] [i_13 + 2] [(unsigned short)12]))))));
                        arr_52 [(unsigned short)0] [i_10] [i_10] [i_8] [i_6] = (unsigned short)12308;
                        arr_53 [i_6] [i_6] [i_10] [i_10] [i_10] [(unsigned short)2] [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_38 [i_15] [i_10] [i_8])) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) var_3))))));
                    }
                    arr_54 [i_10] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned short)47320)))), ((+(((/* implicit */int) var_4))))));
                }
                var_42 = ((/* implicit */unsigned short) max((var_42), (arr_45 [i_6] [i_6] [i_6] [i_10] [i_6])));
            }
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        var_43 = ((unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9886)))))));
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((unsigned short) (((+(((/* implicit */int) arr_49 [i_6] [i_8] [i_16] [i_17] [i_8] [i_16])))) < (((/* implicit */int) var_3)))))));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)59538)) == ((~(((/* implicit */int) arr_56 [i_6] [i_8] [i_17]))))));
                    }
                    for (unsigned short i_19 = 2; i_19 < 11; i_19 += 2) 
                    {
                        var_46 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4)))))));
                        var_47 = var_9;
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_20 = 0; i_20 < 13; i_20 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_16]))))) ? ((~(((/* implicit */int) (unsigned short)61093)))) : ((+(((/* implicit */int) (unsigned short)25670)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2047))))))))));
                        var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_55 [i_6])) < (((/* implicit */int) arr_37 [i_8] [i_8] [i_17] [i_17] [i_20]))))) << (((((/* implicit */int) min((var_8), (var_4)))) - (10259))))) : (((/* implicit */int) arr_30 [i_6] [i_8] [i_16])))))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 13; i_21 += 1) /* same iter space */
                    {
                        var_50 = arr_24 [i_6] [i_8] [i_21];
                        arr_72 [i_6] [i_16] [i_17] [i_21] = ((/* implicit */unsigned short) (-((+(((((/* implicit */int) (unsigned short)43373)) + (((/* implicit */int) (unsigned short)55444))))))));
                        var_51 = var_2;
                    }
                    for (unsigned short i_22 = 0; i_22 < 13; i_22 += 1) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52087)) ? (((/* implicit */int) (unsigned short)39081)) : (((/* implicit */int) (unsigned short)28))));
                        var_53 = ((/* implicit */unsigned short) min((var_53), (((unsigned short) ((((/* implicit */_Bool) arr_38 [i_6] [i_8] [i_16])) ? (((((/* implicit */int) (unsigned short)5994)) | (((/* implicit */int) (unsigned short)24583)))) : (((/* implicit */int) (unsigned short)33194)))))));
                        var_54 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 13; i_23 += 3) 
                    {
                        var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_73 [i_6] [i_6] [i_6])))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */int) arr_21 [i_6])) - (((/* implicit */int) arr_75 [i_6] [i_8] [i_16] [i_17] [i_17] [i_17] [i_16])))) : (((/* implicit */int) (unsigned short)2857))))));
                        var_56 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)37207))));
                    }
                }
                var_57 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)44885)) + ((+((~(((/* implicit */int) (unsigned short)59517))))))));
            }
            for (unsigned short i_24 = 0; i_24 < 13; i_24 += 1) 
            {
                var_58 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)799)) + (((((/* implicit */_Bool) arr_62 [i_6] [i_8] [i_6] [i_24])) ? (((/* implicit */int) arr_30 [i_6] [i_8] [i_24])) : (((/* implicit */int) (unsigned short)7321))))))));
                var_59 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)34488)) ^ (((/* implicit */int) (unsigned short)59531))));
                /* LoopSeq 1 */
                for (unsigned short i_25 = 0; i_25 < 13; i_25 += 1) 
                {
                    arr_84 [i_6] [i_24] [i_6] [i_25] [i_8] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)40956))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_26 = 0; i_26 < 13; i_26 += 4) 
                    {
                        var_60 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)59534)) << (((((/* implicit */int) (unsigned short)34730)) - (34730)))));
                        arr_89 [i_6] [i_8] [i_8] [i_24] [i_25] [i_26] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned short)44141)))))));
                    }
                    for (unsigned short i_27 = 0; i_27 < 13; i_27 += 1) 
                    {
                        var_61 = arr_83 [i_6] [(unsigned short)2] [i_24] [i_8] [i_6] [i_6];
                        var_62 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) arr_73 [i_6] [(unsigned short)1] [i_6])))), (((((/* implicit */_Bool) (unsigned short)59529)) ? (((/* implicit */int) arr_51 [i_6] [(unsigned short)6] [i_8] [i_24] [i_8] [i_27])) : (((/* implicit */int) var_5)))))))));
                        var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)64)))))) < (((/* implicit */int) var_0)))))));
                        var_64 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_65 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_68 [(unsigned short)7] [i_25] [i_24] [i_8] [i_8] [i_6] [i_6])) : (((/* implicit */int) (unsigned short)20))))))));
                    }
                    for (unsigned short i_28 = 0; i_28 < 13; i_28 += 3) 
                    {
                        var_65 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((((/* implicit */int) (unsigned short)55910)) == (((/* implicit */int) var_7)))))))));
                        var_66 = ((/* implicit */unsigned short) max((var_66), (((unsigned short) ((unsigned short) (unsigned short)29)))));
                    }
                    for (unsigned short i_29 = 4; i_29 < 11; i_29 += 1) 
                    {
                        var_67 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)2522)) ? (((/* implicit */int) (unsigned short)22177)) : (((/* implicit */int) var_2))))))));
                        var_68 ^= var_1;
                    }
                    var_69 = ((/* implicit */unsigned short) max((var_69), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31682))))) < ((-(((/* implicit */int) var_7)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_30 = 0; i_30 < 13; i_30 += 3) 
                    {
                        var_70 = ((/* implicit */unsigned short) max((var_70), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_74 [i_6] [(unsigned short)8] [i_25])) ? ((-(((/* implicit */int) arr_36 [i_6] [i_8] [i_8] [i_6])))) : ((+(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_6))))))))))));
                        var_71 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_29 [i_24] [i_8] [i_8] [i_25]))));
                        var_72 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_99 [i_6] [i_25] [i_6] [(unsigned short)1] [i_6])) ? (((((/* implicit */int) (unsigned short)37691)) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_55 [i_24])) : (((/* implicit */int) (unsigned short)14545)))))) : (((/* implicit */int) max(((unsigned short)59571), ((unsigned short)7224))))));
                    }
                }
                var_73 = (unsigned short)48;
            }
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_31 = 0; i_31 < 13; i_31 += 2) 
    {
        var_74 = ((/* implicit */unsigned short) max((var_74), (((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */int) (unsigned short)7)) * (((/* implicit */int) (unsigned short)24570)))) : ((+(((/* implicit */int) (unsigned short)24986)))))))));
        var_75 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)59536)) < (((/* implicit */int) (unsigned short)39178)))))));
        var_76 = ((/* implicit */unsigned short) max((var_76), (((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (unsigned short)14185))))))));
    }
}
