/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25641
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-154829758097639245LL), (((/* implicit */long long int) 1108872748))))) ? (((/* implicit */int) ((_Bool) arr_2 [i_0 + 3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 3])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) var_14)) < (((((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (var_6) : (((/* implicit */long long int) var_0)))) - (((((/* implicit */_Bool) 129733530)) ? (arr_1 [i_1] [i_2]) : (((/* implicit */long long int) -129733531))))))));
                                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (var_6) : (-2118291975523717541LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) : (var_10))) >> (((var_0) - (294673961)))));
                                var_21 = (~(((/* implicit */int) (short)32767)));
                                var_22 |= min((-1803144410205858304LL), (-2118291975523717533LL));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) <= (var_1)))), (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0]))))))) ? (((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22834)) ? (-2046987495) : (2046987492))))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)18267)) && (((/* implicit */_Bool) (unsigned char)226))));
            var_25 &= ((/* implicit */unsigned char) 1942954724);
        }
        /* vectorizable */
        for (unsigned int i_6 = 4; i_6 < 23; i_6 += 2) 
        {
            var_26 ^= ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0 + 2] [i_6 - 2]) < (((((/* implicit */long long int) ((/* implicit */int) (short)10520))) / (8632800899223363247LL)))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (signed char i_8 = 4; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_27 *= ((/* implicit */unsigned char) ((int) ((short) (unsigned char)53)));
                        var_28 &= ((/* implicit */unsigned short) arr_20 [i_8 - 3] [i_6] [i_6 - 3]);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (~(11869294392831703118ULL))))));
                        var_30 = ((/* implicit */unsigned short) arr_22 [i_0] [i_6 - 2] [i_7] [i_7] [i_8]);
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) (short)-15851)) : (((/* implicit */int) (_Bool)0))));
        }
    }
    var_32 -= ((/* implicit */unsigned short) var_16);
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) -1805961859)) ? (-154829758097639245LL) : (((/* implicit */long long int) 1654920603U))));
    /* LoopSeq 4 */
    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        var_34 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)193))))))))));
        var_35 &= ((/* implicit */int) arr_22 [i_9] [i_9] [(short)10] [i_9] [i_9]);
    }
    for (short i_10 = 3; i_10 < 17; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 2; i_11 < 17; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                {
                    var_36 = ((/* implicit */short) ((min((((var_6) & (arr_1 [i_12] [i_11]))), (((/* implicit */long long int) var_7)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_13) : (arr_3 [i_10 - 2]))))));
                    arr_33 [i_10 + 1] [i_11 + 1] [i_11] [i_12] = ((/* implicit */short) ((max((arr_24 [i_10 - 1]), (-6607968059602776140LL))) & (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 7817019412971566259LL)) ? (8723789576853595580LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_11 - 2] [i_12])) ? (2046987494) : (((/* implicit */int) var_3)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 16; i_13 += 3) 
        {
            for (unsigned char i_14 = 3; i_14 < 17; i_14 += 3) 
            {
                for (short i_15 = 3; i_15 < 14; i_15 += 2) 
                {
                    {
                        var_37 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30565)) == (((((/* implicit */int) (unsigned char)247)) | (((/* implicit */int) arr_17 [i_14]))))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (1099296246876225830ULL)))));
                        var_38 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) == (9652442462516678762ULL))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (int i_18 = 1; i_18 < 14; i_18 += 3) 
                {
                    {
                        var_39 = -882395723;
                        var_40 -= ((/* implicit */int) arr_27 [i_18]);
                        var_41 *= ((/* implicit */int) (((((+(-154829758097639245LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_23 [i_18 + 4] [i_18] [i_18] [i_10])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_38 [i_10] [i_10] [(unsigned char)12]) : (arr_30 [i_16] [i_17] [i_18])))) : (((var_5) + (((/* implicit */long long int) ((/* implicit */int) (short)-25745))))))) - (259204552LL)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_19 = 3; i_19 < 17; i_19 += 4) 
        {
            for (int i_20 = 0; i_20 < 18; i_20 += 2) 
            {
                {
                    var_42 = ((/* implicit */short) 1788567774U);
                    arr_54 [i_10] [i_19] = ((/* implicit */unsigned short) var_16);
                    var_43 = ((/* implicit */long long int) var_2);
                    var_44 &= ((/* implicit */unsigned long long int) arr_50 [i_19 - 3] [i_10]);
                }
            } 
        } 
    }
    for (unsigned int i_21 = 0; i_21 < 18; i_21 += 4) 
    {
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 18; i_22 += 3) 
        {
            for (int i_23 = 2; i_23 < 16; i_23 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                    {
                        var_45 &= var_1;
                        /* LoopSeq 3 */
                        for (unsigned int i_25 = 3; i_25 < 17; i_25 += 3) 
                        {
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned long long int) arr_24 [i_25 - 2])), (8794301611192872853ULL))))) ? (((((/* implicit */int) (unsigned char)103)) ^ (((((/* implicit */_Bool) arr_12 [i_22] [i_24] [i_22] [i_21])) ? (((/* implicit */int) var_7)) : (-1728686037))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-936))) >= (2484480973U)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_21] [i_22] [i_23] [i_24]))))))))));
                            var_47 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) > (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_25]))))))))));
                        }
                        for (unsigned char i_26 = 1; i_26 < 14; i_26 += 4) 
                        {
                            var_48 = ((/* implicit */unsigned char) -5130672970338083437LL);
                            var_49 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(1805961858)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_58 [i_24])), (9652442462516678762ULL)))) ? ((-(var_2))) : (var_10))))));
                        }
                        for (long long int i_27 = 0; i_27 < 18; i_27 += 2) 
                        {
                            var_50 = ((/* implicit */unsigned char) arr_39 [i_27] [i_24] [i_23] [i_21]);
                            arr_74 [i_23] = ((/* implicit */int) ((unsigned char) (~(((3337072222U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))))))));
                            var_51 = ((/* implicit */short) (((+(var_5))) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_25 [i_24 + 1] [i_21])), (var_3)))))));
                        }
                        var_52 = ((/* implicit */int) var_2);
                    }
                    var_53 *= ((/* implicit */unsigned int) arr_9 [i_23]);
                    var_54 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-((+(arr_39 [i_21] [i_22] [i_23] [i_22])))))), ((((((-(var_5))) + (9223372036854775807LL))) << ((((((~(arr_7 [i_22] [i_21]))) + (103056839))) - (52)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_28 = 0; i_28 < 18; i_28 += 4) 
        {
            for (long long int i_29 = 0; i_29 < 18; i_29 += 3) 
            {
                for (signed char i_30 = 0; i_30 < 18; i_30 += 3) 
                {
                    {
                        var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_75 [i_21] [i_21]))));
                        var_56 = ((/* implicit */unsigned char) (_Bool)1);
                        var_57 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_56 [i_28] [i_30])), (arr_64 [i_29] [i_29] [i_28] [i_21])));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_31 = 1; i_31 < 15; i_31 += 2) 
        {
            for (unsigned short i_32 = 0; i_32 < 18; i_32 += 2) 
            {
                for (int i_33 = 0; i_33 < 18; i_33 += 2) 
                {
                    {
                        var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_35 [i_21] [i_21])))))));
                        /* LoopSeq 1 */
                        for (int i_34 = 0; i_34 < 18; i_34 += 3) 
                        {
                            var_59 = ((/* implicit */signed char) max((((/* implicit */int) arr_20 [i_21] [i_31] [i_32])), (((((/* implicit */int) arr_20 [i_31] [i_31] [i_34])) << (((/* implicit */int) arr_20 [i_21] [i_31] [i_32]))))));
                            var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-28667))) / (-1418700208082811212LL))))))) : (min((((/* implicit */int) arr_46 [i_34] [i_33] [i_21] [i_21] [i_21])), (arr_82 [i_21] [i_31 + 1] [i_32] [i_33] [i_34])))));
                            var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_75 [i_34] [i_34])) ? (((/* implicit */int) (short)-4581)) : ((-(((/* implicit */int) (_Bool)1)))))))))));
                            arr_94 [i_21] [i_21] [i_34] [i_31] [i_34] = ((/* implicit */unsigned char) ((((int) -7080812149779380795LL)) >= (((/* implicit */int) ((unsigned char) arr_53 [i_32] [i_31])))));
                            var_62 ^= ((/* implicit */int) 15177618649197990688ULL);
                        }
                        var_63 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(var_8)))), (((((/* implicit */_Bool) 1805961872)) ? (-3503650969830372759LL) : (((/* implicit */long long int) 1732317347U))))));
                        var_64 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) -1805961859)), (var_5)))) ? ((-(((/* implicit */int) (short)4591)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1243619257U)))))))));
                        arr_95 [i_32] [i_32] [i_31] [i_32] &= ((/* implicit */unsigned char) (short)-4584);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_35 = 0; i_35 < 23; i_35 += 3) 
    {
        arr_98 [i_35] = ((/* implicit */signed char) ((((/* implicit */int) ((((2562649948U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)28666))))) < (((/* implicit */unsigned int) -1805961865))))) >= (((/* implicit */int) ((arr_3 [i_35]) == (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))))))));
        /* LoopNest 3 */
        for (unsigned char i_36 = 2; i_36 < 21; i_36 += 4) 
        {
            for (short i_37 = 3; i_37 < 21; i_37 += 1) 
            {
                for (unsigned long long int i_38 = 0; i_38 < 23; i_38 += 2) 
                {
                    {
                        arr_106 [i_36 + 2] [i_36] [i_36] [i_38] |= ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_38]))) : (arr_3 [i_37])))), ((-(-7273870788609408512LL))))));
                        var_65 = ((/* implicit */unsigned int) min((var_65), (((/* implicit */unsigned int) var_0))));
                    }
                } 
            } 
        } 
    }
}
