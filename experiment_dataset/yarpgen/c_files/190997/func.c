/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190997
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((5963548690071578923ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((max((((/* implicit */long long int) var_9)), (-13LL))) < (((((arr_9 [i_0 - 2] [i_0 - 2] [(unsigned char)0] [i_0 - 2] [i_1] [i_0 - 2]) + (9223372036854775807LL))) << (((((/* implicit */int) var_16)) - (240))))))))));
                        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_9 [i_3] [i_1] [12U] [i_3 - 1] [i_1] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)127)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (((var_17) | (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        arr_11 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((max((((/* implicit */unsigned long long int) var_7)), (var_6))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */short) arr_6 [12U] [i_1] [i_1])))))))));
                        var_19 -= ((/* implicit */unsigned long long int) max((var_1), (((short) var_5))));
                        var_20 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_3] [i_1])) : (((/* implicit */int) var_2)))));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(max((var_6), (((/* implicit */unsigned long long int) arr_3 [i_4] [i_4])))))))));
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_23 *= ((/* implicit */signed char) arr_1 [i_4]);
            arr_16 [i_5 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)32)))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) - (1057436503U)))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_19 [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) 8942342517360879678ULL);
            arr_20 [i_4] [(unsigned char)9] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)72)), (var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (long long int i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    {
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_16)) - (238)))));
                        arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) max((2097120), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_0))))) >= (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
                {
                    {
                        arr_34 [i_4] [i_7] [i_7] [i_10] [i_4] = ((/* implicit */unsigned short) ((short) ((long long int) var_13)));
                        var_25 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1419952789859134682ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))))), (max((arr_25 [i_4]), (((/* implicit */unsigned int) var_8))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                var_26 = ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_4] [i_7] [i_12]));
                var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)56)) * (((/* implicit */int) (signed char)-9))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    for (short i_14 = 1; i_14 < 15; i_14 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) var_11);
                            var_29 = ((/* implicit */short) (signed char)97);
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) 0LL))));
                        }
                    } 
                } 
                arr_43 [i_7] &= ((/* implicit */long long int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_15 [i_12] [(signed char)16] [i_12])))) ? ((+(2145386496U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))));
                arr_44 [i_7] [i_12] = ((/* implicit */unsigned char) (~(3237530815U)));
            }
            /* LoopSeq 3 */
            for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 14; i_16 += 3) 
                {
                    for (signed char i_17 = 3; i_17 < 16; i_17 += 2) 
                    {
                        {
                            arr_51 [(unsigned short)12] [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7] [i_15] [i_7] [i_17]))) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (1419952789859134682ULL))) % (((/* implicit */unsigned long long int) max((arr_4 [17LL] [i_7] [i_15]), (((/* implicit */unsigned int) arr_48 [i_15])))))))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_5 [(_Bool)1] [i_7] [i_17 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    for (unsigned char i_19 = 0; i_19 < 17; i_19 += 3) 
                    {
                        {
                            var_32 = ((((/* implicit */_Bool) max(((short)-20966), ((short)4032)))) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_52 [i_7]))))), (min((2149580802U), (((/* implicit */unsigned int) (unsigned char)239)))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1560797449)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))))));
                            var_33 = ((/* implicit */unsigned int) -6320110791976304719LL);
                            var_34 ^= ((signed char) 1057436499U);
                            var_35 ^= (signed char)-30;
                            arr_58 [i_4] [i_7] [i_4] [(unsigned char)5] [(unsigned char)5] [i_18] [i_19] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_0 [i_4] [i_15]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))) ^ (((arr_0 [i_4] [i_4]) ? (4454754449892052124LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                        }
                    } 
                } 
                var_36 ^= ((/* implicit */unsigned char) (+(1074519681824559135LL)));
                /* LoopNest 2 */
                for (short i_20 = 4; i_20 < 16; i_20 += 3) 
                {
                    for (signed char i_21 = 4; i_21 < 16; i_21 += 1) 
                    {
                        {
                            var_37 -= ((/* implicit */_Bool) (unsigned char)193);
                            var_38 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (((unsigned int) (signed char)29))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_22 = 0; i_22 < 17; i_22 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 17; i_23 += 2) 
                {
                    for (unsigned char i_24 = 0; i_24 < 17; i_24 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17026791283850416943ULL)));
                            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (short)-21580))));
                            var_41 ^= ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_7]))) ^ (arr_4 [i_4] [i_7] [i_22])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 17; i_25 += 1) 
                {
                    for (signed char i_26 = 0; i_26 < 17; i_26 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) arr_17 [i_7] [i_22] [i_25]);
                            var_43 ^= ((/* implicit */unsigned int) (((!((_Bool)1))) ? (-4509860877580724357LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
            }
            for (signed char i_27 = 0; i_27 < 17; i_27 += 4) 
            {
                arr_81 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) (signed char)53);
                var_44 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)14))))) && (((/* implicit */_Bool) var_4)))))));
            }
            arr_82 [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (((max((var_4), (((/* implicit */long long int) var_3)))) + (((/* implicit */long long int) (-(var_12))))))));
        }
        for (int i_28 = 0; i_28 < 17; i_28 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_29 = 1; i_29 < 16; i_29 += 1) 
            {
                var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((max((((((/* implicit */_Bool) var_8)) ? (-5815376295827708408LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))))), (((/* implicit */long long int) (short)25475)))) / (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_17))), ((_Bool)1))))))))));
                arr_87 [i_4] [i_28] = ((/* implicit */int) (unsigned char)126);
                arr_88 [i_4] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) | (6500822375483479037LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_72 [i_29] [i_28] [i_28] [i_4]))))), (((unsigned int) (short)32767)))))));
                arr_89 [i_4] = ((/* implicit */int) min((((((/* implicit */long long int) ((((/* implicit */int) var_1)) - (arr_50 [i_4] [i_28] [i_29] [i_28] [i_29] [i_28] [i_4])))) == (-540985925355247169LL))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (unsigned char)128)))))))));
            }
            arr_90 [i_4] [i_4] [i_28] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((unsigned short) (_Bool)0)))))));
            arr_91 [i_28] [i_4] [i_4] = max((((long long int) arr_66 [i_4])), (((/* implicit */long long int) ((unsigned short) 3405546032U))));
            var_46 += ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) ((unsigned short) var_14))))));
        }
    }
    var_47 ^= ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((((/* implicit */_Bool) 330562471301642778LL)) || (((/* implicit */_Bool) var_14)))))))));
}
