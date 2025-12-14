/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244446
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_2]) >> (((arr_0 [1LL] [i_1]) - (10658003555059967769ULL)))))) ? (min((arr_0 [i_0] [1U]), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (646913656U) : (646913668U))))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (646913643U) : (((/* implicit */unsigned int) ((int) var_9)))))) ? (arr_8 [i_1]) : (var_2))))));
                    var_18 = ((/* implicit */int) ((unsigned long long int) max((max((var_9), (arr_2 [3] [i_1] [i_2]))), (arr_8 [i_2]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 646913643U)) ? (646913668U) : (1898692455U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_4 - 1] [i_4 - 1])) ? (arr_2 [i_5 - 1] [i_4 - 1] [i_4 - 1]) : (((/* implicit */unsigned long long int) arr_13 [i_5 + 3] [i_5 - 1] [i_4 - 1] [i_4 - 1])))))));
                        var_20 = (-(((((/* implicit */_Bool) arr_14 [4U] [i_4 - 1] [i_5 + 4] [i_5 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 + 2] [i_4 + 1] [i_5 + 4] [7U]))) : (2703711262U))));
                        var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_4] [i_4 + 1] [3ULL])))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_12 [i_5 + 2] [i_5 - 1] [i_4 + 2]) : (max((var_14), (((/* implicit */unsigned int) var_1)))))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_12 [i_3] [i_3] [i_0]))) | (max((var_14), (((/* implicit */unsigned int) arr_3 [i_0]))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_0)))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned int) ((10582403849988782995ULL) != (((/* implicit */unsigned long long int) -15))))), (((646913643U) ^ (((/* implicit */unsigned int) 12)))))));
                        var_25 = ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (signed char)24)), (10492304541452018868ULL))), (((/* implicit */unsigned long long int) (+(var_12)))))))));
                            var_27 -= ((/* implicit */unsigned int) ((var_4) * (max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */unsigned long long int) var_3)) / (var_15)))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_28 = ((/* implicit */unsigned long long int) ((var_2) < (((unsigned long long int) (_Bool)1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_11] [i_11])) ? (var_15) : (((/* implicit */unsigned long long int) var_8))));
        var_30 = ((/* implicit */signed char) arr_32 [i_11]);
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */_Bool) arr_33 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11] [i_11]))) : (var_4)))));
    }
    for (signed char i_12 = 1; i_12 < 13; i_12 += 1) 
    {
        var_32 -= ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) arr_35 [12U])) ? (arr_35 [i_12]) : (10925544554409157207ULL))) >> (((var_3) - (4155901718U)))))));
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 1) 
            {
                var_33 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_13]))) : (arr_35 [i_12])))));
                var_34 -= (signed char)-2;
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_12 + 3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_34 [i_14 - 2]))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_39 [i_12])) + (var_3)))) < (var_8))))));
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_14]))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 646913672U)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)-64))))) : (((unsigned long long int) var_10)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    for (unsigned char i_17 = 3; i_17 < 15; i_17 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_49 [i_12 + 4] [i_12 + 4] [i_12] [i_12] [i_12 + 4]))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [i_17 - 3] [13ULL] [i_14] [i_12] [i_17] [i_12 + 3])) ? (arr_51 [i_17 - 1] [i_13] [(short)11] [i_12] [i_17] [i_12 + 1]) : (var_13)));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 646913643U)) < (arr_36 [i_12] [i_12]))) ? (arr_40 [i_12 + 3] [i_14 - 1] [i_14 - 2] [i_12 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))))));
            }
            var_41 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) : (3802694605U))), (((/* implicit */unsigned int) arr_45 [i_12] [i_12] [i_12 - 1] [i_12]))))));
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 3; i_19 < 15; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    {
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_12] [i_12])) ? (((((/* implicit */_Bool) arr_36 [i_12] [i_18])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_55 [i_12 + 3] [i_12 + 3] [i_12 + 2]))) : (((((/* implicit */_Bool) arr_55 [i_20] [i_18] [i_12])) ? (arr_36 [i_12] [i_20]) : (arr_55 [i_12 + 4] [i_12 + 4] [i_12 + 2])))));
                        /* LoopSeq 1 */
                        for (signed char i_21 = 4; i_21 < 15; i_21 += 3) 
                        {
                            var_43 = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_40 [i_21 - 4] [i_19 + 2] [i_19 - 2] [i_12 - 1])));
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_21 - 4] [i_19 - 1])) ? (((/* implicit */int) max((arr_54 [i_21 + 1] [i_19 - 3]), (arr_54 [i_21 + 2] [i_19 + 2])))) : (((/* implicit */int) arr_54 [i_21 - 4] [i_19 - 2]))));
                            var_45 = ((/* implicit */unsigned char) arr_60 [i_21]);
                        }
                        var_46 = (+((+(max((var_13), (arr_51 [i_12] [i_12] [i_12] [i_12] [i_12] [10ULL]))))));
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned long long int) ((unsigned int) max((((((/* implicit */_Bool) var_12)) ? (arr_42 [i_18] [i_18] [i_12] [i_12]) : (arr_35 [i_12]))), (((/* implicit */unsigned long long int) min((var_11), (var_10)))))));
            var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_7))))))) ^ (((/* implicit */int) var_10)))))));
            /* LoopSeq 2 */
            for (unsigned short i_22 = 1; i_22 < 15; i_22 += 4) 
            {
                var_49 -= (~(min((var_2), (arr_55 [i_12 + 3] [i_12 + 4] [i_12 + 1]))));
                var_50 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 11733718586759023129ULL)) ? (var_4) : (((/* implicit */unsigned long long int) arr_63 [i_12] [i_18] [i_22])))));
                var_51 = (((~(min((((/* implicit */unsigned long long int) 1591256033U)), (var_9))))) >> (((max((14403325587744209510ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (639821061U) : (((/* implicit */unsigned int) var_7))))))) - (14403325587744209462ULL))));
            }
            for (int i_23 = 1; i_23 < 14; i_23 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_24 = 2; i_24 < 15; i_24 += 1) 
                {
                    var_52 = arr_60 [i_23];
                    var_53 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) arr_51 [i_24] [i_23] [i_12] [i_12] [i_18] [i_12 - 1]))), (((signed char) arr_46 [i_12] [i_12] [i_23] [i_24] [i_12 + 3] [i_24])))))) <= ((-(((unsigned long long int) arr_63 [6U] [16] [i_23]))))));
                }
                for (signed char i_25 = 1; i_25 < 14; i_25 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_26 = 2; i_26 < 16; i_26 += 4) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned int) ((((arr_52 [i_12]) - (((/* implicit */unsigned long long int) 2147483647)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1757871232476710301ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) : (max((((/* implicit */unsigned int) (_Bool)0)), (2237918458U))))))));
                        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_26] [i_18]))) != (var_15)))), (arr_63 [i_26 - 2] [i_23 + 1] [i_12 + 4])))))));
                        var_56 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 144114913197948928ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 646913668U)))) != (max((18446744073709551615ULL), (6684233563082433811ULL)))));
                        var_57 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_3)) ? (arr_68 [i_23 + 2] [i_23 + 3] [i_12] [i_23 - 1] [i_23 + 3] [i_23 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_23 + 3] [i_23 + 1] [i_12] [i_23 + 3] [i_23 - 1]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)124)), (var_6)))) ? (var_13) : (((/* implicit */unsigned long long int) max((arr_40 [i_25] [i_18] [i_23] [(signed char)5]), (var_6))))))));
                        var_58 = ((/* implicit */unsigned long long int) max((arr_64 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (max((var_7), (arr_39 [i_23]))) : (((/* implicit */int) arr_33 [i_12] [i_12])))))));
                    }
                    for (signed char i_27 = 2; i_27 < 16; i_27 += 4) /* same iter space */
                    {
                        var_59 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_43 [i_12 + 2] [i_18] [i_25 + 2] [i_27 + 1])) ? (3648053646U) : (min((4294967285U), (var_12))))));
                        var_60 = ((/* implicit */unsigned short) max((((min((var_15), (arr_42 [i_12 + 1] [i_18] [i_12 + 1] [i_25]))) * (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (-(1851371276U))))));
                        var_61 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (arr_68 [i_12 + 1] [i_18] [i_12] [i_25] [(short)5] [i_23]) : (arr_68 [i_12 + 2] [15ULL] [i_12] [i_25] [2ULL] [i_12 + 1]))) ^ (max((arr_68 [i_12 + 2] [i_18] [i_12] [i_18] [i_27] [4U]), (((/* implicit */unsigned long long int) var_12))))));
                    }
                    var_62 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((signed char) var_11))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_60 [i_23 - 1]))) : (((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((unsigned short) (~(var_6)))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_28 = 0; i_28 < 17; i_28 += 2) 
                {
                    var_63 = ((/* implicit */unsigned long long int) (+(267577086U)));
                    var_64 -= ((/* implicit */unsigned char) (((+(arr_32 [i_12 + 1]))) / (((/* implicit */unsigned long long int) ((int) arr_32 [i_12 + 1])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_29 = 0; i_29 < 17; i_29 += 4) 
                    {
                        var_65 = (!(((/* implicit */_Bool) ((unsigned long long int) 15649173136925818778ULL))));
                        var_66 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_29])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [12]))) : (4027390209U)))) ? (((arr_59 [i_12 + 3] [i_23 + 3] [15] [13U] [i_29]) << (((var_12) - (2411459815U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_12) : (520029286U))))));
                        var_67 = ((/* implicit */unsigned char) ((arr_64 [i_23 + 2] [i_12] [i_23 + 1] [i_23]) * (arr_64 [i_23 - 1] [i_12] [i_23 - 1] [i_23])));
                    }
                    /* vectorizable */
                    for (unsigned int i_30 = 1; i_30 < 14; i_30 += 3) 
                    {
                        var_68 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)224))))));
                        var_69 = ((/* implicit */signed char) ((unsigned int) (signed char)35));
                    }
                }
            }
            var_70 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_12])) ? (((((/* implicit */_Bool) arr_70 [14U] [i_12 + 4] [14U] [i_18] [i_18])) ? (var_13) : (((/* implicit */unsigned long long int) 2449301144U)))) : (((((/* implicit */_Bool) var_2)) ? (arr_76 [i_12 + 4] [i_12 + 2] [i_12] [i_12] [i_18] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) arr_32 [i_12 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_32 [i_12 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17372554679417833893ULL)) ? (arr_47 [i_12] [i_12 + 2] [i_12 - 1] [i_12 + 2]) : (arr_47 [i_12] [i_12 + 4] [i_12 + 2] [i_12 + 4])))));
        }
        var_71 = ((/* implicit */int) var_15);
        var_72 = ((/* implicit */unsigned short) max((var_72), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6864080690921478116LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-2))))), (((arr_43 [i_12] [i_12] [i_12 + 3] [i_12]) * (((/* implicit */unsigned long long int) var_8)))))) ^ (((((/* implicit */_Bool) ((6864080690921478109LL) / (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_12] [i_12])))))) ? (arr_75 [i_12 + 2] [i_12] [i_12 + 4]) : (((/* implicit */unsigned long long int) ((unsigned int) 3648053639U))))))))));
    }
    for (unsigned short i_31 = 4; i_31 < 23; i_31 += 2) 
    {
        var_73 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_8) < (((/* implicit */long long int) arr_82 [i_31] [i_31 - 2]))))), (((unsigned int) (+(646913656U))))));
        var_74 -= (!(((/* implicit */_Bool) arr_81 [i_31] [i_31])));
    }
}
