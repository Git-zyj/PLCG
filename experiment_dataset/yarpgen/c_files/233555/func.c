/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233555
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((var_8) ? (((/* implicit */int) (short)14302)) : (var_16))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 4])) : (((/* implicit */int) (signed char)39))))) && (var_6))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned short) max((max((arr_4 [i_0 + 3]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 4]))))));
                                arr_15 [i_0] [i_0] [4U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(4294967293U)))) ? (((((/* implicit */_Bool) arr_5 [(short)6])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)16891)) ? (((/* implicit */unsigned long long int) min((3U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)167)))))))) : (max((((/* implicit */unsigned long long int) 3U)), (15496783119680220331ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)37141))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_20 [(unsigned short)9] [7U] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_14 [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_0]) | (788115046742930651ULL))), (((/* implicit */unsigned long long int) -3735991182127923061LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [0U] [i_2] [i_5] [i_6])) ? (arr_0 [i_2]) : (19U)))))) : (min((arr_13 [i_0] [i_1] [i_2] [i_5] [i_5]), (max((arr_0 [(unsigned short)11]), (4294967293U)))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((unsigned long long int) max((((/* implicit */unsigned short) arr_2 [i_0 + 1])), (arr_11 [i_0 + 4] [i_1] [i_0 + 4])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(1989767795U)))), (-5846228594933781563LL)))))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_16)) ? (arr_12 [i_0] [i_1] [i_5] [i_5] [2] [i_6]) : (((/* implicit */long long int) arr_0 [i_0 + 2]))))))) ? (((((/* implicit */_Bool) (unsigned short)6370)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6368))) : (17658629026966620970ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (short)-27508))))))));
                            var_23 = ((/* implicit */unsigned int) arr_19 [i_2] [11U]);
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_25 = ((/* implicit */signed char) (short)6366);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((5846228594933781561LL), (((/* implicit */long long int) arr_7 [(unsigned short)7] [i_0 + 1] [(unsigned short)7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0] [i_0 + 2] [i_2]), (arr_7 [i_0] [i_0 + 3] [i_1]))))) : (4294967295U)));
                    }
                }
            } 
        } 
        var_27 = (~(((/* implicit */int) arr_10 [i_0 + 1] [2ULL])));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(unsigned short)10] [i_0] [8U] [i_0])) ? (arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) 1531934795435461287LL))))) ? ((~(((/* implicit */int) (short)6367)))) : (((/* implicit */int) arr_9 [(short)4] [i_0] [(_Bool)1] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (arr_18 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2]) : (((/* implicit */unsigned int) var_16)))), ((~(1753888073U)))))) : (((unsigned long long int) arr_4 [i_0 + 2]))));
        arr_24 [i_0] = var_7;
    }
    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? ((+(((/* implicit */int) arr_26 [11])))) : (min((var_7), (((/* implicit */int) var_6))))))) ? ((-(((/* implicit */int) max((arr_26 [i_8]), (((/* implicit */short) (_Bool)0))))))) : (((/* implicit */int) arr_28 [i_8]))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 2949960954029331268ULL)) ? (((/* implicit */unsigned long long int) 5846228594933781546LL)) : (((((((/* implicit */_Bool) (unsigned short)54161)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (arr_27 [i_8]))) | (max((((/* implicit */unsigned long long int) (short)-6366)), (14489338021340870373ULL)))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5846228594933781561LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [11]))))), (((((/* implicit */_Bool) 6820078114626062709LL)) ? (3607396920U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9])))))))));
            arr_36 [i_9] [(unsigned short)0] = ((/* implicit */_Bool) 4294967286U);
            arr_37 [i_9] [(unsigned char)4] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((arr_34 [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9]))))))) ? (((((/* implicit */_Bool) arr_30 [(_Bool)1])) ? (((/* implicit */int) arr_30 [i_9])) : (((/* implicit */int) (unsigned short)37586)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1109312697U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6367))) : (5U)))))));
        }
        for (signed char i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
        {
            arr_41 [i_9] [i_9] [i_9] |= ((/* implicit */_Bool) arr_32 [7U]);
            var_31 = ((/* implicit */unsigned short) min((arr_38 [i_9]), ((-(arr_38 [i_11])))));
            var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [17LL])) ? (((/* implicit */int) max(((short)-6374), (((/* implicit */short) arr_32 [i_9]))))) : (((/* implicit */int) arr_35 [3]))))) ? (((((/* implicit */_Bool) arr_35 [i_9])) ? (((unsigned long long int) arr_33 [i_9] [i_11] [i_11])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_9]))))) : (((/* implicit */unsigned long long int) (-(0U))))));
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_40 [14ULL]), (var_15)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_40 [i_11]))))) : (((max((arr_34 [(unsigned char)8]), (((/* implicit */unsigned int) (signed char)-123)))) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_9]))))))))))));
        }
        for (short i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            arr_44 [i_9] [11ULL] [i_9] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)33898)), (((((/* implicit */_Bool) arr_30 [i_9])) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9])))))));
            arr_45 [i_12] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 14489338021340870385ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (20U))));
        }
        arr_46 [i_9] = ((/* implicit */short) max((max((arr_38 [i_9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [13U])) ? (((/* implicit */int) (signed char)-109)) : (arr_33 [17LL] [i_9] [i_9])))))), (((((/* implicit */_Bool) arr_30 [i_9])) ? (0U) : (16777215U)))));
    }
    for (unsigned short i_13 = 1; i_13 < 8; i_13 += 3) 
    {
        arr_51 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_13 - 1] [i_13])) ? (14647422278753512660ULL) : (((/* implicit */unsigned long long int) arr_17 [i_13]))))) ? (min((((/* implicit */unsigned long long int) 11U)), (18365927937201149432ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55236)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_13 - 1] [i_13]))) : (arr_0 [i_13]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((long long int) arr_42 [i_13])) : (((/* implicit */long long int) max((arr_33 [12] [12] [i_13]), (((/* implicit */int) arr_40 [i_13]))))))))));
        var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 80816136508402182ULL)) ? (var_0) : (var_0)))))));
        arr_52 [i_13] = ((/* implicit */long long int) arr_21 [i_13] [i_13 + 2]);
    }
    var_35 = ((/* implicit */unsigned long long int) var_2);
}
