/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221105
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (14077202827337744249ULL) : (max((((/* implicit */unsigned long long int) (short)19748)), (arr_0 [i_0] [i_0])))))) ? ((+(((/* implicit */int) (signed char)56)))) : (((((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)20])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 3])))) << (((arr_0 [(_Bool)1] [i_0 + 4]) - (11820631083223197486ULL)))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_0 - 2] [i_0 - 2]))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) (short)32687))) : (((/* implicit */int) arr_1 [i_0] [i_0 - 3])))) : (((((/* implicit */int) ((short) 8520528558140034426LL))) ^ (((var_9) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((+(8520528558140034397LL))))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 3])) ? (arr_0 [i_0 - 3] [i_0 + 1]) : (((/* implicit */unsigned long long int) -8520528558140034437LL)))) >> (((((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2])) + (153))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (+(8520528558140034426LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((8520528558140034430LL) >= (-8520528558140034427LL))))) : (((((/* implicit */_Bool) 8520528558140034408LL)) ? (-8520528558140034439LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))))))) : ((-(-8520528558140034427LL)))));
            var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 3])) ? (arr_0 [i_1 - 2] [i_2]) : (arr_0 [i_1 - 2] [i_1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_1 [(short)16] [i_2]))))))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max(((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (8520528558140034408LL))))), (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */short) var_0)), (var_6)))), ((~(((/* implicit */int) arr_2 [i_1] [i_2]))))))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 4; i_4 < 19; i_4 += 3) 
                {
                    var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_4 + 3])) ? (-8520528558140034409LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 4] [i_4 - 3])))));
                    arr_16 [i_1 + 3] [i_2] [i_4] [(_Bool)1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4 - 4])) || (((/* implicit */_Bool) -8520528558140034426LL))));
                    arr_17 [i_2] [i_4] = ((arr_4 [i_1 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) == (((/* implicit */int) arr_6 [i_2] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 - 2] [i_1 + 1] [i_4 + 3] [i_5]))) : ((+(-8520528558140034426LL)))));
                        var_20 = ((/* implicit */unsigned int) ((unsigned short) arr_10 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 - 3]));
                        arr_22 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1 - 3] [i_5] [i_5])) % (((/* implicit */int) arr_20 [i_1] [i_1 - 1]))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_4] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (-8520528558140034416LL) : (-8520528558140034427LL)));
                        var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_6] [i_2])) || (((/* implicit */_Bool) 8520528558140034407LL))));
                        var_22 ^= ((/* implicit */signed char) ((unsigned int) -8520528558140034436LL));
                        var_23 ^= ((/* implicit */short) arr_10 [i_1] [i_1] [(short)14] [3ULL]);
                    }
                    for (unsigned char i_7 = 3; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (arr_26 [i_4 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((-8520528558140034440LL) < (-8520528558140034412LL)))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8520528558140034411LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_2]))) : (8520528558140034426LL)));
                        var_26 -= ((/* implicit */signed char) ((-8520528558140034410LL) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        arr_29 [i_1] [i_4] [(short)13] [i_4 - 1] [i_4 - 1] = ((/* implicit */signed char) var_6);
                    }
                }
                var_27 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */signed char) ((((/* implicit */_Bool) 8520528558140034435LL)) && (((/* implicit */_Bool) 8520528558140034426LL)))))));
                /* LoopSeq 3 */
                for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    var_28 ^= ((/* implicit */signed char) (+(8520528558140034379LL)));
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max((-8520528558140034416LL), (((/* implicit */long long int) arr_18 [i_3] [i_2] [i_2] [i_2] [i_2] [i_8 - 1])))))));
                }
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8520528558140034440LL)) ? (-8520528558140034435LL) : (8520528558140034435LL)))) ? (max((8520528558140034426LL), (((/* implicit */long long int) arr_13 [i_1] [i_1 + 1] [i_3])))) : (8520528558140034426LL))))));
                    arr_35 [i_1 + 2] [i_2] [i_2] [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_13 [i_1] [20] [i_9])), (((short) var_4))))), (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1 - 3] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_27 [i_2]))))))))));
                }
                for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    arr_38 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_1] [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 2; i_11 < 19; i_11 += 2) 
                    {
                        arr_43 [i_1 + 1] [(short)9] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_11] [i_11 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-8520528558140034463LL) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (arr_26 [i_1 + 1])))), (((((8520528558140034426LL) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1 - 3] [i_2] [i_3] [i_10] [i_10] [i_2]))))) - (((8520528558140034424LL) * (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                        var_31 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8520528558140034424LL)) ? (-8520528558140034410LL) : (-8520528558140034436LL)))), (((((/* implicit */_Bool) ((arr_30 [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5)))) ? (max((((/* implicit */unsigned long long int) var_0)), (var_5))) : (((/* implicit */unsigned long long int) arr_41 [i_1] [i_1 - 3] [i_1] [i_1] [i_11 - 2] [i_11]))))));
                    }
                }
            }
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                var_32 = ((/* implicit */unsigned long long int) -8520528558140034444LL);
                arr_48 [(unsigned char)12] = ((/* implicit */int) (-(((unsigned int) max((-8520528558140034431LL), (((/* implicit */long long int) var_7)))))));
                arr_49 [i_1] [i_2] [i_12] [i_12] = ((/* implicit */unsigned char) (-(-8520528558140034425LL)));
                arr_50 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_2);
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_39 [i_1] [i_1 + 4] [i_1 - 1] [i_1 + 4] [i_1] [i_1 + 4] [i_1 - 1]), (arr_39 [i_1 + 4] [i_1] [i_1 - 1] [i_2] [i_2] [i_12] [i_12])))) ? (((/* implicit */long long int) (-(arr_41 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 1] [i_2])))) : ((-((+(-8520528558140034433LL)))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_34 = ((/* implicit */unsigned long long int) max(((+(((8520528558140034421LL) + (-8520528558140034417LL))))), (8520528558140034432LL)));
                arr_53 [i_1] [i_2] [i_2] [i_13] = ((/* implicit */short) max((((((/* implicit */_Bool) 8520528558140034435LL)) ? (-8520528558140034433LL) : (-8520528558140034420LL))), (8520528558140034417LL)));
            }
        }
        var_35 = ((/* implicit */unsigned int) max(((-(max((8520528558140034408LL), (8520528558140034435LL))))), (((/* implicit */long long int) arr_30 [i_1]))));
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1 + 2] [17LL] [i_1])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_1 + 1] [i_1 - 3] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_44 [i_1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_1] [i_1 - 3]))) : (-8520528558140034438LL)))));
    }
    /* LoopSeq 2 */
    for (int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_54 [i_14] [i_14])) * (((/* implicit */int) arr_54 [i_14] [i_14]))))) - ((((-(-8520528558140034433LL))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8))))))))));
        arr_57 [i_14] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) max((var_3), (var_1)))), (max((((/* implicit */unsigned short) var_8)), (arr_55 [(signed char)3]))))))));
        arr_58 [(unsigned char)24] [i_14] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
    }
    for (int i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
        {
            arr_64 [i_15] [i_16] [i_15] = ((/* implicit */unsigned char) arr_60 [i_16]);
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8520528558140034431LL)) ? (8520528558140034392LL) : (-8520528558140034435LL)))) || (((((/* implicit */_Bool) arr_60 [i_15])) && (((/* implicit */_Bool) -8520528558140034419LL))))));
            /* LoopSeq 1 */
            for (short i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_66 [i_16])))))))));
                var_40 = ((/* implicit */unsigned long long int) ((8520528558140034426LL) / (((/* implicit */long long int) arr_67 [i_17]))));
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((-8520528558140034433LL) / (8520528558140034432LL))))));
                arr_68 [i_16] [i_16] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_60 [i_17]))));
            }
        }
        for (short i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
        {
            var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((8520528558140034457LL) >= (-8520528558140034440LL))))) < (max((var_11), (((/* implicit */unsigned long long int) -8520528558140034445LL))))));
            arr_73 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((8520528558140034411LL) == (8520528558140034417LL)));
            arr_74 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_56 [i_15]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_55 [i_18]))))) : (max((-8520528558140034434LL), (((/* implicit */long long int) arr_72 [i_15] [(signed char)16] [(signed char)16]))))))) ? (((/* implicit */int) arr_71 [i_15] [i_15])) : (((((((((/* implicit */int) var_4)) | (((/* implicit */int) var_2)))) + (2147483647))) << (((((((/* implicit */_Bool) -8520528558140034434LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_18]))) : (var_11))) - (18446744073709551544ULL)))))));
        }
        var_43 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) arr_60 [i_15])), (((long long int) arr_69 [i_15] [i_15] [i_15])))));
        var_44 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_61 [i_15] [i_15] [i_15])) ? (max((8520528558140034429LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_15]))))), (max((((-8520528558140034417LL) / (-8520528558140034419LL))), (((/* implicit */long long int) (~(arr_67 [i_15]))))))));
        arr_75 [i_15] |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_62 [i_15] [i_15])) ? (((/* implicit */long long int) arr_62 [i_15] [i_15])) : (8520528558140034435LL)))));
        var_45 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_72 [i_15] [i_15] [i_15])) ? (8520528558140034427LL) : (((/* implicit */long long int) arr_72 [i_15] [i_15] [i_15]))))), (max((var_11), (((/* implicit */unsigned long long int) ((-8520528558140034426LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
    }
}
