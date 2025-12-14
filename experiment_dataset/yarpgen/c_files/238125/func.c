/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238125
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
    var_10 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)31070))))) ^ (var_2)))) ? (min((var_1), (((/* implicit */unsigned int) min(((short)31046), (((/* implicit */short) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31070)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_0] = (~(((/* implicit */int) arr_3 [i_0] [1LL] [i_1])));
            var_11 = (short)31046;
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-76)) > ((~(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_13 = ((_Bool) -932542223);
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_2] [i_4] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)164))));
                            var_14 |= ((/* implicit */unsigned long long int) arr_5 [i_2]);
                            var_15 -= ((/* implicit */unsigned long long int) (short)31038);
                            var_16 = ((/* implicit */unsigned int) (~(arr_11 [i_4])));
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_10 [i_8] [0LL] [0LL] [0LL]))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_11 [i_5]))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [i_5] [i_6] [i_5])) ^ (((/* implicit */int) arr_7 [i_0] [i_0] [i_6] [i_5]))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(short)22])) : (((/* implicit */int) arr_19 [i_0] [i_5] [(unsigned char)8] [(unsigned char)8]))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((((/* implicit */int) (unsigned short)47822)) > (((/* implicit */int) (signed char)-102)))))))));
                    var_23 &= ((/* implicit */long long int) (short)-31047);
                }
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                {
                    var_24 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0]))));
                    arr_29 [i_0] [i_0] |= (-((~(arr_23 [i_10] [i_10] [i_6] [i_10] [i_5]))));
                    var_25 += ((/* implicit */short) (unsigned short)2040);
                }
            }
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                var_26 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18091))) < (((unsigned long long int) (short)-31094))));
                var_27 = ((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_5] [i_11] [8LL] [i_11]));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (signed char)0))));
        var_29 += ((/* implicit */short) ((((/* implicit */int) (short)18091)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)26281)))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_51 [i_14] [i_14] = ((/* implicit */unsigned int) (((~(max((arr_23 [i_13] [i_14] [i_15] [i_15] [i_17]), (((/* implicit */unsigned long long int) arr_0 [i_15])))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_15] [i_13] [i_13])))));
                                var_30 -= (!(((/* implicit */_Bool) min((arr_3 [i_13] [i_14] [i_16]), (arr_3 [i_13] [i_14] [i_13])))));
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) * (3629449898U)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_18 = 0; i_18 < 17; i_18 += 4) 
                    {
                        arr_54 [i_13] [i_14] [i_13] [i_18] = ((/* implicit */int) 65535U);
                        arr_55 [i_14] [i_14] [i_14] [i_14] [i_18] = ((/* implicit */unsigned int) arr_14 [i_18] [(short)17] [i_15] [i_14] [i_13]);
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) -8122271874100529653LL))));
                    }
                    /* vectorizable */
                    for (signed char i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        arr_58 [i_13] [i_14] [i_14] [i_15] [i_13] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13]))) == (arr_17 [i_14]))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (short)26281))));
                        var_34 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_31 [i_19] [i_15]))))));
                        var_35 = ((/* implicit */unsigned int) arr_1 [i_15]);
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_21 = 0; i_21 < 17; i_21 += 4) 
                        {
                            var_36 = ((/* implicit */short) min((var_36), ((short)-31071)));
                            var_37 = ((/* implicit */unsigned short) arr_36 [i_14] [i_14]);
                        }
                        for (long long int i_22 = 0; i_22 < 17; i_22 += 2) 
                        {
                            arr_68 [i_22] [i_14] [i_14] [1] [i_22] [i_14] [i_22] = ((/* implicit */_Bool) min(((~(min((((/* implicit */long long int) arr_67 [i_13] [i_14] [i_15] [i_20] [i_15])), (-6823701711777666892LL))))), (((/* implicit */long long int) (short)-31071))));
                            arr_69 [i_14] = ((/* implicit */long long int) 15361440402236366587ULL);
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_23 = 0; i_23 < 17; i_23 += 1) 
                        {
                            var_38 = ((unsigned long long int) (_Bool)1);
                            arr_73 [i_13] [i_13] [i_13] [i_14] [i_13] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)3395)) ? (((/* implicit */int) (short)-22792)) : (((/* implicit */int) max(((short)-31071), (((/* implicit */short) arr_25 [i_14] [i_15] [i_23])))))))));
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (-(arr_21 [i_20] [(signed char)12] [i_14]))))));
                        }
                        for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 1) 
                        {
                            var_40 |= (-(min((18420566674154565957ULL), (min((((/* implicit */unsigned long long int) arr_32 [i_24])), (arr_57 [i_13] [i_13] [i_13] [(unsigned char)10] [i_13]))))));
                            arr_76 [i_24] [i_14] [i_13] [i_13] [i_13] [i_14] [i_13] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_13] [i_20] [i_24])) ? (((/* implicit */int) (short)-22782)) : (((/* implicit */int) (short)-31044)))))))));
                            var_41 = ((/* implicit */unsigned short) min((arr_11 [i_20]), (min((((/* implicit */unsigned long long int) min((arr_10 [i_24] [i_20] [(_Bool)1] [i_14]), (((/* implicit */unsigned int) arr_9 [i_13] [i_15] [i_15] [i_24]))))), ((+(18420566674154565957ULL)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_25 = 0; i_25 < 17; i_25 += 1) /* same iter space */
                        {
                            arr_81 [i_14] [i_14] [i_14] [i_20] = ((/* implicit */unsigned short) -5642197015722536062LL);
                            arr_82 [i_14] [i_14] = ((/* implicit */unsigned short) 2298635839U);
                            var_42 = ((/* implicit */unsigned short) ((max((6836700135846418256LL), (((/* implicit */long long int) 786432U)))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (short)-21046)))))));
                        }
                        for (unsigned char i_26 = 0; i_26 < 17; i_26 += 1) /* same iter space */
                        {
                            var_43 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_13] [i_13] [i_20] [i_13]))) : (arr_11 [(signed char)11]))), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
                            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (~(((/* implicit */int) max((min((((/* implicit */unsigned char) arr_34 [i_14] [i_14])), ((unsigned char)205))), (((/* implicit */unsigned char) arr_5 [i_13]))))))))));
                            var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) max((arr_17 [i_15]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65525)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [i_26] [i_13] [i_15] [i_14] [i_14] [i_13])))))))))))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 17; i_27 += 1) 
        {
            for (short i_28 = 0; i_28 < 17; i_28 += 3) 
            {
                for (signed char i_29 = 0; i_29 < 17; i_29 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 1) /* same iter space */
                        {
                            arr_97 [i_30] = ((((/* implicit */_Bool) ((short) 4294967295U))) ? (arr_41 [(unsigned short)16] [i_29] [i_30]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)11951))))));
                            var_46 = ((/* implicit */unsigned short) arr_20 [i_13] [i_28] [2ULL] [i_30]);
                            var_47 = ((/* implicit */unsigned int) arr_85 [i_13] [i_13]);
                        }
                        for (unsigned long long int i_31 = 0; i_31 < 17; i_31 += 1) /* same iter space */
                        {
                            var_48 = ((/* implicit */unsigned int) max(((+(288230376151711743ULL))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) (signed char)1)), (arr_87 [i_13] [i_27] [i_27] [i_27]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 26177399554985641ULL))))))))));
                            arr_100 [i_13] [i_27] [i_28] [i_28] [i_29] [i_31] [8ULL] = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_80 [i_31] [(signed char)6] [i_28] [i_27] [i_13])), (min(((unsigned short)57344), (((/* implicit */unsigned short) (short)-4857)))))));
                        }
                        for (unsigned long long int i_32 = 0; i_32 < 17; i_32 += 1) /* same iter space */
                        {
                            arr_104 [i_32] [i_28] [i_27] = (short)-31164;
                            arr_105 [i_13] [i_13] [i_13] [i_13] [i_13] &= ((/* implicit */short) (!(((/* implicit */_Bool) (short)30527))));
                            var_49 *= ((/* implicit */unsigned short) arr_36 [12U] [i_32]);
                            arr_106 [i_13] [i_13] [i_13] [i_29] [i_32] [i_29] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8455171215106603971ULL))))), (max((arr_10 [i_13] [i_27] [i_27] [i_29]), (2439194689U))))));
                            arr_107 [i_27] [i_27] [i_29] [i_29] = ((/* implicit */unsigned long long int) ((_Bool) max((arr_0 [i_13]), (arr_0 [i_29]))));
                        }
                        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)55))))))))))));
                        var_51 = ((/* implicit */_Bool) arr_39 [i_28]);
                        var_52 = ((/* implicit */_Bool) (short)28211);
                        var_53 = ((/* implicit */_Bool) arr_46 [i_13] [i_13] [i_13] [i_13]);
                    }
                } 
            } 
        } 
        var_54 ^= ((/* implicit */long long int) (signed char)117);
    }
    /* LoopNest 3 */
    for (short i_33 = 0; i_33 < 18; i_33 += 2) 
    {
        for (unsigned long long int i_34 = 0; i_34 < 18; i_34 += 1) 
        {
            for (short i_35 = 0; i_35 < 18; i_35 += 1) 
            {
                {
                    var_55 = ((/* implicit */unsigned int) min(((~(arr_33 [i_35]))), (((/* implicit */int) (signed char)126))));
                    var_56 |= ((/* implicit */unsigned short) 17567882568741556700ULL);
                }
            } 
        } 
    } 
    var_57 |= ((/* implicit */unsigned int) var_5);
}
