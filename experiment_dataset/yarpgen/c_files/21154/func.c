/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21154
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_12 |= ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] [i_3] [i_1] |= ((/* implicit */long long int) (!(var_9)));
                    arr_13 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6944000472833979948LL)) || ((_Bool)1)));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) max((arr_9 [i_4]), (((/* implicit */int) (short)-23834))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
        {
            arr_20 [i_4] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_3 [i_4])), ((unsigned short)56120)))), ((-(((long long int) 6944000472833979949LL))))));
            arr_21 [i_4] = ((/* implicit */unsigned short) (!(((_Bool) ((unsigned long long int) -6944000472833979948LL)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                var_14 = arr_15 [i_4] [i_4];
                arr_25 [i_6] [8ULL] [8ULL] [i_5] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) var_3))));
            }
        }
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
        {
            var_15 = -6944000472833979936LL;
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_27 [i_4])))) ^ (((unsigned long long int) -6944000472833979918LL))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (unsigned char i_9 = 1; i_9 < 16; i_9 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-91)))) > (((((((/* implicit */_Bool) (signed char)8)) || (var_5))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)130))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_6)))))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((min((((/* implicit */unsigned short) var_5)), (var_3))), (((/* implicit */unsigned short) (short)28167)))))));
                        arr_36 [i_4] [i_7] = ((/* implicit */short) (-(max((((/* implicit */unsigned int) var_11)), (((unsigned int) arr_33 [i_4] [i_4] [i_4] [i_4]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 2) 
                {
                    for (short i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)49))))) & (max((6944000472833979917LL), (((/* implicit */long long int) var_1)))))) & (((/* implicit */long long int) ((/* implicit */int) max((var_3), (var_4)))))));
                            arr_44 [i_4] [i_7] [i_10] [i_10] [i_7] [i_10] = ((/* implicit */int) var_6);
                            var_20 = ((signed char) ((min((-1584088749243957308LL), (((/* implicit */long long int) var_3)))) - (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_45 [i_4] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) ((8225342294030587310ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51381)))))) < (((/* implicit */int) (unsigned short)0)))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_14 [i_4]), (((/* implicit */unsigned int) var_5)))))));
                var_22 = ((/* implicit */long long int) var_9);
                var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (((-(((/* implicit */int) (unsigned short)34572)))) >= (((/* implicit */int) var_5)))))));
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    arr_52 [i_7] [i_13] [(unsigned short)8] [i_7] &= ((/* implicit */short) max((((((int) 6944000472833979970LL)) / (((/* implicit */int) ((unsigned short) var_8))))), (((/* implicit */int) ((short) 16776194848879694054ULL)))));
                    var_24 = ((/* implicit */int) var_11);
                }
                for (short i_15 = 3; i_15 < 19; i_15 += 3) 
                {
                    var_25 = ((/* implicit */int) (+((+(6856152415029466841ULL)))));
                    var_26 = ((/* implicit */unsigned int) (unsigned short)4444);
                    var_27 = ((/* implicit */int) (!(var_5)));
                    arr_57 [i_4] [i_4] |= ((/* implicit */unsigned char) ((short) ((unsigned short) ((_Bool) (signed char)96))));
                    arr_58 [i_4] [i_4] [i_13] [i_15] [i_7] [i_15] = ((/* implicit */_Bool) var_11);
                }
            }
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_27 [i_4])) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) arr_27 [i_7])))))))));
        }
    }
    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) min((var_29), (var_1)));
        /* LoopNest 3 */
        for (unsigned int i_17 = 3; i_17 < 19; i_17 += 3) 
        {
            for (short i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                for (unsigned short i_19 = 1; i_19 < 17; i_19 += 4) 
                {
                    {
                        arr_70 [9LL] [9LL] [i_19] = var_2;
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)34565)))), (((/* implicit */int) (short)28561)))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (short i_20 = 0; i_20 < 15; i_20 += 4) 
    {
        for (unsigned int i_21 = 2; i_21 < 12; i_21 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_22 = 0; i_22 < 15; i_22 += 1) 
                {
                    for (long long int i_23 = 3; i_23 < 12; i_23 += 3) 
                    {
                        for (unsigned long long int i_24 = 3; i_24 < 12; i_24 += 3) 
                        {
                            {
                                var_32 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)72))));
                                arr_87 [i_22] [i_22] [i_23] [i_22] [i_22] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                arr_88 [(unsigned short)5] [i_21 - 2] [i_21 + 3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6944000472833979970LL))))), (16776194848879694079ULL)));
                /* LoopSeq 1 */
                for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 4; i_26 < 12; i_26 += 2) 
                    {
                        for (unsigned char i_27 = 2; i_27 < 14; i_27 += 3) 
                        {
                            {
                                arr_97 [i_20] [(unsigned short)14] [12ULL] [i_20] [i_20] [i_26 - 3] [i_27 - 2] &= ((/* implicit */_Bool) ((unsigned short) ((signed char) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))));
                                var_33 = ((/* implicit */unsigned long long int) ((((arr_34 [i_25 - 1] [i_27 + 1] [i_21 + 3]) % (((/* implicit */long long int) ((/* implicit */int) (short)26245))))) >= (((((/* implicit */_Bool) arr_34 [i_25 - 1] [i_27 + 1] [i_21 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9022762000772109490LL)))));
                                arr_98 [i_20] [i_21] [i_25] [i_26] [i_26] [i_26] = ((/* implicit */_Bool) -2632888669350829551LL);
                                arr_99 [i_20] [i_20] [i_21 + 3] [i_20] [i_26 - 1] [10U] [i_27 - 2] = ((/* implicit */int) ((signed char) ((unsigned short) var_8)));
                                arr_100 [i_20] [(unsigned char)12] [i_25] = ((unsigned char) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_27 [i_21 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 15; i_28 += 4) 
                    {
                        for (long long int i_29 = 0; i_29 < 15; i_29 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) max((((unsigned long long int) min((-9022762000772109490LL), (((/* implicit */long long int) var_9))))), (((/* implicit */unsigned long long int) min((9022762000772109489LL), (((/* implicit */long long int) max((952527814U), (((/* implicit */unsigned int) (unsigned short)65509))))))))));
                                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((max((arr_42 [i_20] [i_20] [(unsigned short)14] [i_20] [i_21 + 2]), (arr_42 [i_20] [i_21] [(short)3] [i_21 - 2] [i_21 + 1]))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))))));
                                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) var_1))));
                            }
                        } 
                    } 
                    arr_105 [i_25] [i_21] [i_21] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_9)))));
                    var_37 = ((/* implicit */int) 7785014786248691516ULL);
                }
                /* LoopSeq 2 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_38 = ((/* implicit */_Bool) (short)28683);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                    {
                        arr_111 [14U] [(unsigned char)8] [i_30] [i_30] = ((/* implicit */unsigned short) ((short) arr_53 [i_21 + 2] [i_30] [i_31 - 1] [i_21]));
                        arr_112 [(signed char)6] = arr_6 [i_21];
                    }
                    for (signed char i_32 = 0; i_32 < 15; i_32 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned int) ((((arr_4 [i_20]) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (((((/* implicit */int) var_9)) >> (((/* implicit */int) (unsigned short)0)))))))));
                        arr_116 [i_20] [i_21] [i_21] [i_32] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) 1968813343U)))))), (10661729287460860091ULL)));
                    }
                    arr_117 [i_20] [i_21] [i_21] [i_30] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) ((_Bool) (short)-12604))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)94))))))));
                    var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)0))))))));
                }
                /* vectorizable */
                for (unsigned short i_33 = 1; i_33 < 11; i_33 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_34 = 2; i_34 < 14; i_34 += 1) 
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (signed char)-38))));
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) 6944000472833979934LL))));
                        arr_126 [i_33] = ((((((/* implicit */int) var_0)) % (((/* implicit */int) var_5)))) - (((/* implicit */int) (signed char)85)));
                    }
                    /* LoopNest 2 */
                    for (signed char i_35 = 0; i_35 < 15; i_35 += 2) 
                    {
                        for (unsigned int i_36 = 2; i_36 < 11; i_36 += 2) 
                        {
                            {
                                arr_131 [i_20] [i_33] = ((/* implicit */unsigned char) 2249132587440894193LL);
                                var_43 = ((/* implicit */unsigned short) -5363170226252848357LL);
                            }
                        } 
                    } 
                }
                arr_132 [i_20] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
