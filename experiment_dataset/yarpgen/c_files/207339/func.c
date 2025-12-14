/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207339
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(max((max((var_11), (var_7))), (max((((/* implicit */unsigned long long int) var_17)), (var_7))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((unsigned long long int) (short)(-32767 - 1)))));
        arr_4 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_19)) ? ((-(var_3))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)680)))))))));
        var_21 ^= ((/* implicit */unsigned int) (-(max(((+(var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            var_22 ^= ((/* implicit */unsigned short) (~(max((((/* implicit */int) var_18)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (short)0))))))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    arr_13 [(unsigned short)12] [i_0] [i_2] [i_1] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_19), (var_19)))), ((~(var_3)))));
                    arr_14 [i_2] = ((/* implicit */_Bool) ((short) max((var_8), (((/* implicit */int) var_4)))));
                }
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((short) ((long long int) var_14))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) > ((~(var_6)))));
                }
                arr_17 [i_0] [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) var_18))), (max((((/* implicit */unsigned long long int) var_4)), (var_3)))));
            }
            for (unsigned short i_5 = 3; i_5 < 15; i_5 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((var_17), (var_4)))), (max((var_11), (((/* implicit */unsigned long long int) var_19))))));
                var_26 *= ((/* implicit */long long int) max((((/* implicit */short) var_1)), (((short) (-(var_10))))));
            }
            for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                arr_25 [i_6] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) var_5)));
                var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_0) >> (((var_7) - (12476378402787861008ULL)))))))) ^ ((+((-(var_6)))))));
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        {
                            arr_32 [i_7] [i_7] [i_6] [i_1] [i_7] = ((/* implicit */unsigned short) ((long long int) var_19));
                            var_28 = ((/* implicit */signed char) var_0);
                            var_29 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (max((max((var_11), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) var_4))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 4; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (~((~(((((/* implicit */int) (unsigned short)60653)) * (((/* implicit */int) (_Bool)1))))))));
                            var_31 = ((/* implicit */unsigned long long int) max((((unsigned short) var_18)), (((/* implicit */unsigned short) (!(var_1))))));
                            var_32 = ((/* implicit */_Bool) ((unsigned int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-8073)))), ((-(((/* implicit */int) var_16)))))));
                            arr_39 [i_0] [12ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (+(var_2))))) ? ((((!(var_15))) ? (var_6) : (max((((/* implicit */unsigned long long int) var_2)), (1186279912276392176ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) var_17))))))));
                            var_33 = ((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) var_17))))) : (max((((/* implicit */unsigned long long int) var_2)), (var_11))));
                        }
                    } 
                } 
            }
            var_34 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_18))))))))));
            arr_40 [(short)9] [i_1] = max((((unsigned int) ((signed char) var_5))), (((/* implicit */unsigned int) max((((/* implicit */short) var_17)), (var_19)))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_35 = ((/* implicit */unsigned short) (+((~(var_3)))));
            /* LoopSeq 4 */
            for (long long int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
            {
                var_36 ^= ((/* implicit */short) ((var_10) << (((((/* implicit */int) var_5)) - (8751)))));
                arr_45 [i_0] [12ULL] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_13)));
                var_37 -= ((/* implicit */unsigned int) (+(((long long int) var_5))));
            }
            for (long long int i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)));
                arr_48 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_16)))));
            }
            for (unsigned int i_14 = 1; i_14 < 14; i_14 += 3) 
            {
                arr_51 [(unsigned short)9] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_19));
                var_39 += ((/* implicit */signed char) var_5);
                var_40 |= ((/* implicit */unsigned short) ((unsigned long long int) var_18));
                arr_52 [(unsigned short)1] [(unsigned short)1] [i_14 + 2] = ((/* implicit */unsigned short) ((var_17) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) var_15))))));
                var_41 += ((/* implicit */short) (+(((/* implicit */int) var_15))));
            }
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                var_42 = ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)));
                arr_55 [i_0] [i_11] [i_15] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
                var_43 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_44 += ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)0)))))) == (var_0))));
            var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_4)))));
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 3; i_18 < 15; i_18 += 3) 
                {
                    {
                        arr_66 [8LL] [i_16] [i_18 + 1] = ((/* implicit */_Bool) max((max((var_0), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4294967293U)), (3532983989874603892LL)))))), (((/* implicit */unsigned long long int) ((_Bool) var_8)))));
                        arr_67 [(unsigned short)8] [(unsigned short)14] [i_0] [i_0] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1037815366U)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15664)))))), (var_11))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8)))))))));
                        var_46 -= ((/* implicit */short) max((((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (max((var_3), (((/* implicit */unsigned long long int) (+(var_10))))))));
                        /* LoopSeq 2 */
                        for (long long int i_19 = 3; i_19 < 15; i_19 += 2) 
                        {
                            arr_70 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)4094))))))))) >= (18446744073709551613ULL)));
                            var_47 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_13))), (((/* implicit */unsigned int) max((var_5), (var_19))))))));
                            var_48 = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) var_2)));
                            arr_71 [(unsigned short)8] [i_16] [i_17] [(short)12] [i_19] = ((/* implicit */unsigned long long int) max(((~(var_13))), ((+(((unsigned int) var_7))))));
                        }
                        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) 
                        {
                            var_49 = ((/* implicit */long long int) (+(max(((~(var_11))), (((unsigned long long int) var_10))))));
                            var_50 = ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
                        }
                    }
                } 
            } 
            var_51 ^= ((/* implicit */unsigned int) max(((unsigned short)65408), (((/* implicit */unsigned short) (unsigned char)109))));
            arr_74 [(unsigned short)10] [i_16] = ((/* implicit */int) var_12);
        }
    }
    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 2) /* same iter space */
    {
        var_52 = max((max((((/* implicit */unsigned long long int) var_12)), (var_3))), (((/* implicit */unsigned long long int) var_10)));
        var_53 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)46426)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8))) : (-1267241730720658600LL))), (((/* implicit */long long int) ((unsigned int) var_15))))))));
    }
    for (unsigned short i_22 = 0; i_22 < 21; i_22 += 2) /* same iter space */
    {
        var_54 = ((/* implicit */unsigned long long int) (+(((long long int) max((((/* implicit */unsigned int) (short)235)), (var_10))))));
        var_55 = ((/* implicit */unsigned int) (+(max((max((((/* implicit */unsigned long long int) var_15)), (var_3))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16)))))))));
        var_56 = ((/* implicit */unsigned short) (+((-(var_12)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_23 = 0; i_23 < 19; i_23 += 3) 
    {
        var_57 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_10)) || (var_1)))))), (max((var_7), (((/* implicit */unsigned long long int) ((_Bool) var_18)))))));
        var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) (+((+(((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) 4294967295U))))))))))));
        var_59 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) var_0))), (0ULL)));
        var_60 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_18)), (var_6))) >> (((unsigned long long int) ((var_17) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_61 |= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5))))));
    var_62 |= ((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))), (9223372036854775807LL))))));
}
