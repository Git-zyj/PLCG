/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35011
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
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) 1228259597885714040ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (1228259597885714040ULL)))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) var_5)) & ((+(((/* implicit */int) (short)32745)))))))));
                var_16 = ((/* implicit */signed char) var_7);
            }
            for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) /* same iter space */
            {
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_4 [(short)18] [i_0 - 2]))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)20471)) > (((/* implicit */int) (signed char)-18))));
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_3] [i_4])) << (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) -543970846))));
                }
            }
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6] [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (1022811869U))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (16525881057919300566ULL))));
                            var_20 += ((/* implicit */short) ((((var_7) ? (((/* implicit */int) var_7)) : (var_2))) | (((/* implicit */int) ((signed char) var_0)))));
                            var_21 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_7]))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_8 = 4; i_8 < 19; i_8 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) (_Bool)1);
            var_23 *= ((/* implicit */unsigned long long int) ((short) (unsigned short)13507));
        }
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0] [i_0 - 4])) && (((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 3]))));
    }
    for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            arr_31 [i_9] [i_10] = (+(((/* implicit */int) (short)1693)));
            var_25 *= (short)(-32767 - 1);
        }
        for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            var_26 -= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (var_2)))), (max((((/* implicit */unsigned long long int) 552958921U)), (var_9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-109)) * (((/* implicit */int) (short)32761)))))))));
            var_27 += max((((/* implicit */unsigned long long int) (+(var_2)))), (min((arr_27 [i_9 - 2]), (((/* implicit */unsigned long long int) min((var_10), ((signed char)30)))))));
            var_28 = ((/* implicit */unsigned int) arr_28 [i_9] [i_11]);
            /* LoopSeq 4 */
            for (short i_12 = 1; i_12 < 24; i_12 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 22; i_13 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)16050)) > (-781908011)));
                    var_30 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (63U)))))));
                    var_31 = ((/* implicit */unsigned short) ((552958924U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
                for (unsigned char i_14 = 1; i_14 < 22; i_14 += 1) /* same iter space */
                {
                    arr_44 [i_12] = ((/* implicit */short) min((((((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (var_8))))))), ((!(((/* implicit */_Bool) (unsigned char)101))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_15 = 1; i_15 < 23; i_15 += 2) 
                    {
                        arr_48 [i_15 + 1] [i_15 - 1] [i_12] [i_15] [i_15 + 2] = ((/* implicit */signed char) var_5);
                        var_32 += ((/* implicit */int) (signed char)-31);
                        arr_49 [i_12] [i_9 + 1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) ((short) (signed char)1))) && (((/* implicit */_Bool) 1965094461U))))), ((~(((((/* implicit */int) (unsigned char)161)) * (((/* implicit */int) (short)-11831))))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((((/* implicit */int) arr_43 [i_16])) <= (((/* implicit */int) (signed char)109)))), ((!(((/* implicit */_Bool) var_11))))))) | ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)-20520)) && (((/* implicit */_Bool) var_10)))))))));
                        var_34 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_38 [i_9 - 1] [i_11] [i_12] [i_14])) ^ (((/* implicit */int) (unsigned char)235)))) * ((~(((((/* implicit */int) (signed char)-89)) & (((/* implicit */int) var_11))))))));
                        var_35 = arr_47 [i_9 + 2] [i_11] [i_11] [i_12] [i_14 + 1] [i_16] [i_16];
                        var_36 *= ((/* implicit */unsigned int) max((((((/* implicit */int) max((((/* implicit */short) (signed char)1)), (var_0)))) | (((/* implicit */int) (unsigned short)16535)))), (((/* implicit */int) (signed char)-118))));
                        var_37 = (short)-11831;
                    }
                    for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (unsigned short)52029))));
                        arr_56 [i_9] [i_9] [i_11] [i_12] [i_14] [i_17] = ((/* implicit */unsigned char) arr_27 [i_11]);
                    }
                    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        arr_60 [i_12] [i_14] [i_12] [i_11] [i_12] = ((/* implicit */unsigned char) arr_59 [i_12]);
                        var_39 ^= ((/* implicit */signed char) (-(max((524287), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-95))))))));
                    }
                    var_40 ^= ((/* implicit */short) max((((/* implicit */int) ((unsigned short) max((var_12), (arr_26 [i_9] [i_11]))))), ((~(((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned short)61959)))))))));
                }
                /* vectorizable */
                for (unsigned char i_19 = 1; i_19 < 22; i_19 += 1) /* same iter space */
                {
                    var_41 += ((/* implicit */signed char) ((((/* implicit */int) (short)11830)) | (((/* implicit */int) var_7))));
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_9] [i_11] [i_12 - 1] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) var_5))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))) + (var_9)))));
                }
                var_43 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-11831)) | (((((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) var_2))))) | (max((781908010), (((/* implicit */int) (signed char)79))))))));
            }
            /* vectorizable */
            for (signed char i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)170))));
                var_45 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)32)) - (((/* implicit */int) var_3))))));
            }
            for (signed char i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                var_46 = ((/* implicit */unsigned char) (signed char)96);
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_73 [i_21] [i_9] [i_21] |= ((/* implicit */signed char) (~(((/* implicit */int) max((((signed char) arr_28 [i_11] [i_21])), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-11941))))))))));
                            var_47 = (signed char)-4;
                            arr_74 [i_9] [i_11] [i_21] [i_22] [i_21] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)16535), (min((((/* implicit */unsigned short) arr_66 [i_9] [i_9] [i_9] [i_9])), (arr_37 [i_22]))))))) ^ (min((((/* implicit */unsigned long long int) arr_43 [i_21])), (min((((/* implicit */unsigned long long int) var_12)), (arr_27 [i_21])))))));
                            var_48 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) * (((((/* implicit */int) var_4)) | (((/* implicit */int) var_4))))))) <= (((arr_71 [i_9 + 2] [i_9] [i_9] [i_9 - 1] [i_9]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_9 + 2] [i_9] [i_21] [i_22] [i_23])))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_24 = 0; i_24 < 25; i_24 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_25 = 2; i_25 < 22; i_25 += 3) 
                {
                    var_49 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)-19)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 1; i_26 < 21; i_26 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_47 [i_26 - 1] [i_26] [i_26 + 3] [i_26 + 1] [i_25] [i_25] [i_25 + 2]))));
                        var_51 += var_9;
                        var_52 += ((/* implicit */unsigned short) var_2);
                    }
                }
                for (signed char i_27 = 2; i_27 < 24; i_27 += 1) 
                {
                    var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_11])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_9 - 2] [i_11] [i_24] [i_27 - 2]))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_28 = 0; i_28 < 25; i_28 += 1) 
                    {
                        var_54 = ((/* implicit */signed char) arr_87 [i_27] [i_27] [i_24] [i_11] [i_27]);
                        var_55 ^= ((/* implicit */unsigned char) ((((14672346924923190791ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-4)))))));
                        var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((_Bool) 0U)))));
                        var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)27661)) && (((/* implicit */_Bool) (unsigned char)241)))))));
                    }
                }
                for (unsigned long long int i_29 = 2; i_29 < 21; i_29 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_30 = 2; i_30 < 24; i_30 += 3) 
                    {
                        arr_93 [i_30] [i_11] [i_24] [i_29 - 1] [i_30] = ((/* implicit */signed char) ((((((/* implicit */int) arr_84 [i_30] [i_24] [i_29] [i_30 - 1])) > (((/* implicit */int) (short)-12958)))) && (((/* implicit */_Bool) ((arr_86 [i_30] [i_29] [i_24] [i_11] [i_9 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2976))))))));
                        arr_94 [i_30] [i_11] [i_24] [i_9] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_9))))));
                        var_58 = ((/* implicit */signed char) arr_32 [i_9] [i_24] [i_29 + 1]);
                    }
                    var_59 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-7)) * (((/* implicit */int) ((unsigned char) var_8)))));
                    /* LoopSeq 1 */
                    for (signed char i_31 = 3; i_31 < 22; i_31 += 3) 
                    {
                        var_60 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
                        var_61 *= var_3;
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_32 = 0; i_32 < 25; i_32 += 3) 
                {
                    for (signed char i_33 = 0; i_33 < 25; i_33 += 4) 
                    {
                        {
                            var_62 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_34 [i_9 + 2] [i_32]))));
                            var_63 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_51 [i_9] [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1])))))));
                        }
                    } 
                } 
                var_64 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_46 [i_9] [i_11] [i_24] [i_24] [i_9])) : (var_2)))) ^ (arr_95 [i_24] [i_11])));
            }
        }
        /* vectorizable */
        for (unsigned int i_34 = 3; i_34 < 22; i_34 += 4) 
        {
            var_65 += ((/* implicit */unsigned long long int) var_12);
            arr_105 [i_9 + 1] = ((/* implicit */signed char) var_2);
        }
        /* LoopNest 3 */
        for (int i_35 = 2; i_35 < 22; i_35 += 3) 
        {
            for (int i_36 = 0; i_36 < 25; i_36 += 4) 
            {
                for (unsigned short i_37 = 0; i_37 < 25; i_37 += 3) 
                {
                    {
                        var_66 = ((/* implicit */short) max((max((((/* implicit */int) var_6)), (((var_2) - (((/* implicit */int) (unsigned short)16553)))))), (((/* implicit */int) (signed char)64))));
                        /* LoopSeq 1 */
                        for (short i_38 = 0; i_38 < 25; i_38 += 3) 
                        {
                            var_67 = ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49002)) && (((/* implicit */_Bool) arr_63 [i_38] [i_38] [i_35] [i_35] [i_35] [i_9]))))) * (((/* implicit */int) ((((/* implicit */int) (signed char)-33)) >= (((/* implicit */int) var_11)))))));
                            var_68 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)94)) - (((/* implicit */int) (signed char)117))))), (arr_52 [i_35] [i_35 + 2] [i_36] [i_37] [i_38] [i_35 + 2])));
                            var_69 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112))));
                            var_70 = ((/* implicit */unsigned long long int) max((var_70), (((/* implicit */unsigned long long int) max((((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) var_4))))) ^ (((((/* implicit */int) (signed char)-95)) + (((/* implicit */int) (signed char)-80)))))), (max(((-(((/* implicit */int) arr_42 [i_9] [i_36] [i_37] [i_9])))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)98)), (arr_63 [i_38] [i_37] [i_36] [i_36] [i_35 + 1] [i_9])))))))))));
                            var_71 = ((/* implicit */short) max((var_71), (((/* implicit */short) ((unsigned long long int) (((-(1603132146U))) << (((/* implicit */int) var_12))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_39 = 0; i_39 < 13; i_39 += 3) 
    {
        var_72 = ((/* implicit */signed char) max((min((((/* implicit */int) max((arr_96 [i_39] [i_39] [i_39] [i_39] [i_39] [i_39] [i_39]), (var_12)))), (((int) (signed char)127)))), (1182349878)));
        var_73 = ((/* implicit */short) min((var_73), (((/* implicit */short) var_3))));
    }
    var_74 = ((/* implicit */signed char) ((unsigned short) var_10));
    var_75 = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)117)))))))), ((signed char)-127)));
}
