/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46526
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) (short)-8798)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_8 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_2]))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1783247439)) ? (10483571392298112592ULL) : (((/* implicit */unsigned long long int) -712337209))))) ? (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])) * (16508310891062363936ULL))) : (((/* implicit */unsigned long long int) 4))))));
                            arr_9 [(signed char)3] [i_3] [(signed char)3] [(unsigned char)5] [(signed char)3] = ((/* implicit */short) (((-(arr_2 [i_0] [i_0] [i_0]))) / (((/* implicit */int) arr_6 [i_0] [i_2]))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(4294967295U)))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                            {
                                arr_15 [i_0] [13ULL] [i_2] [i_3] [(short)17] [i_4] = (!(((/* implicit */_Bool) ((arr_13 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4] [(short)10] [i_4] [i_4 - 1] [15U])))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 2] [10U] [i_4] [i_4 + 4] [i_0])) ? (arr_12 [i_4 - 2] [i_4] [i_4] [i_4 + 4] [i_0]) : (arr_12 [i_4 - 2] [i_4 - 3] [i_4] [i_4 + 4] [i_3])))))))));
                            }
                            var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)7))))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27832))) : (10269684903073864233ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 522178868U))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0)))))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_5])))))));
                }
                for (signed char i_6 = 3; i_6 < 21; i_6 += 4) 
                {
                    arr_23 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_6] [i_1] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)23030)), ((unsigned short)8363))))) : (13323358671262119989ULL))) >> (((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_6])) : (((((/* implicit */_Bool) -769907856)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned char)12))))))));
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_7] [i_6] [16ULL] [20U] [i_8] [i_8] = ((/* implicit */short) min((arr_12 [(signed char)5] [(signed char)5] [i_6] [i_7] [i_7]), (((((/* implicit */_Bool) arr_24 [i_8 + 1] [(signed char)8] [i_8 + 1] [i_6 + 3])) ? (1330395809U) : (((((/* implicit */_Bool) arr_20 [i_0] [3U] [i_6] [i_8])) ? (arr_7 [(_Bool)1] [i_7] [i_6] [(_Bool)1] [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) 1407749638))))))));
                            arr_31 [i_0] [12ULL] [(unsigned short)10] [i_7] [12ULL] [(unsigned char)20] [12ULL] = 18446744073709551615ULL;
                        }
                        for (unsigned int i_9 = 3; i_9 < 21; i_9 += 2) 
                        {
                            var_25 -= ((/* implicit */unsigned char) (short)-28866);
                            var_26 = (((((~(((/* implicit */int) (short)17655)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(unsigned char)18] [i_7] [i_9])) && (((/* implicit */_Bool) arr_20 [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_6 - 1]))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */unsigned int) arr_4 [i_6 + 3] [i_6 + 3] [i_6 + 2] [i_9 + 1])) <= ((+(1147511467U)))))), ((signed char)0))))));
                            var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [(unsigned short)14])) ? (arr_0 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) arr_11 [i_9 + 3] [i_0] [i_9 + 3] [i_9 + 3] [(_Bool)0] [i_9 - 3] [i_9])) : (15323835190351202435ULL)))) ? ((-((+(((/* implicit */int) (unsigned char)241)))))) : ((+(((/* implicit */int) (short)0))))));
                            arr_35 [i_0] [i_1] [i_6 - 3] [(unsigned char)10] [i_7] = ((/* implicit */int) (short)-4166);
                        }
                        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 1) 
                        {
                            arr_38 [(unsigned short)7] [i_0] [5ULL] [5ULL] [i_7] [i_0] = ((/* implicit */short) 152549154U);
                            arr_39 [i_7] [18ULL] [18ULL] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2383092005905954713ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))) : (((((/* implicit */_Bool) (short)-26746)) ? (4294967295U) : (((/* implicit */unsigned int) arr_11 [i_0] [i_7] [19ULL] [i_6 + 2] [(short)19] [i_7] [19ULL]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24592))) : (16427289273335574475ULL)));
                            arr_40 [i_0] [i_1] [i_6 - 3] [20U] [i_0] [i_7] [i_1] = ((/* implicit */unsigned int) (unsigned short)15454);
                        }
                        for (unsigned char i_11 = 2; i_11 < 21; i_11 += 2) 
                        {
                            arr_43 [(short)23] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (((!(arr_33 [i_6 - 3] [i_11 - 2] [i_11 + 3]))) ? (((((/* implicit */int) arr_33 [i_6 + 2] [i_11 + 3] [i_11 + 2])) << (((((/* implicit */int) (unsigned short)5312)) - (5306))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1855853353U)))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U))))))));
                            arr_44 [i_7] [i_7] [22ULL] [22ULL] [i_7] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-1))))));
                            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)42120)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_7] [i_0])))))));
                        }
                        arr_45 [i_7] [i_1] [i_7] [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) (unsigned short)26470)) ? (((/* implicit */int) arr_19 [i_0] [17ULL] [i_6 + 1] [i_7])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_6 - 2] [i_7])))) / (((((/* implicit */int) (unsigned char)233)) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 463306416)) != (5374061166489551255ULL)))))));
                        arr_46 [i_7] [(short)18] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)71)) > (((((11894717488105128543ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16190))))) ? (0) : ((-(((/* implicit */int) (unsigned char)21))))))));
                        var_31 *= ((/* implicit */unsigned long long int) (unsigned char)136);
                    }
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        arr_51 [i_0] [2U] [(unsigned char)18] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)44284))));
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            arr_55 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_54 [i_0] [i_1] [i_6]);
                            arr_56 [i_0] [i_6] [i_6] [(signed char)3] [i_1] = ((/* implicit */int) 6522880492916424473ULL);
                            var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)51))))) ? (1320113145U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_54 [i_0] [i_1] [(_Bool)1]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_6 + 3] [i_6 - 2] [i_6 - 2] [i_6 - 2])) / ((-(((/* implicit */int) (short)32741))))));
                        }
                        for (int i_14 = 1; i_14 < 22; i_14 += 2) 
                        {
                            var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)0)) / (((/* implicit */int) (short)-12)))) ^ (((/* implicit */int) ((4294967285U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)23693))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (arr_37 [i_0] [i_6 + 1] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            arr_59 [i_0] [i_1] [(short)21] [10ULL] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((9356678345543258811ULL) * (((/* implicit */unsigned long long int) 2046002825U))))))) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_6] [i_14])) : (((/* implicit */int) (_Bool)0))));
                            var_35 = ((/* implicit */unsigned long long int) (short)-28324);
                        }
                    }
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (+(((((/* implicit */_Bool) 1589288228093879527ULL)) ? (arr_13 [i_1] [i_6 - 1] [i_6] [i_6] [i_6]) : (arr_13 [i_0] [i_6 - 3] [2U] [i_15] [i_15]))))))));
                        arr_64 [i_0] [i_1] [i_1] [i_1] [i_1] [i_15] = ((/* implicit */short) arr_22 [i_0] [i_1] [i_6] [i_15]);
                    }
                    for (unsigned char i_16 = 2; i_16 < 23; i_16 += 2) 
                    {
                        arr_69 [i_6] [(short)21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-34)) * (((/* implicit */int) (short)-4917))));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (-(((/* implicit */int) (unsigned char)97)))))));
                        arr_70 [i_0] = (+(((/* implicit */int) (short)-30984)));
                    }
                    var_38 = ((/* implicit */unsigned int) min((var_38), (4180696128U)));
                }
                for (unsigned int i_17 = 1; i_17 < 21; i_17 += 3) 
                {
                    var_39 += ((/* implicit */unsigned long long int) (-(475898586U)));
                    var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) 7317379136302435481ULL))));
                    var_41 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15934169338666730258ULL)) ? ((+((-(((/* implicit */int) (unsigned char)196)))))) : (((/* implicit */int) (unsigned char)236))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_18 = 1; i_18 < 21; i_18 += 3) 
                    {
                        var_42 ^= ((/* implicit */short) (_Bool)0);
                        arr_76 [i_0] [i_18] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_17 [i_17 - 1] [i_17] [i_17 + 3] [i_17 + 1])) > (4611686018427387392ULL)));
                        arr_77 [18ULL] [i_1] [i_1] [(short)21] [i_18] = ((((/* implicit */_Bool) (unsigned char)4)) ? (arr_7 [i_17] [i_17] [(_Bool)1] [(signed char)3] [i_17 - 1] [i_17 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_18] [i_18 + 1] [(signed char)16] [i_18 + 2]))));
                        arr_78 [i_0] [i_18] [i_17] [i_18 + 1] = ((/* implicit */_Bool) 3281713443U);
                        var_43 -= ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
                arr_79 [i_0] [i_0] [(short)10] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_0] [i_1] [i_0] [i_1])) ? (arr_68 [i_0] [i_1] [i_0] [i_1]) : (arr_68 [i_0] [(signed char)0] [(signed char)5] [i_0]))))));
            }
        } 
    } 
}
