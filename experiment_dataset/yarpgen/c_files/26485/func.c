/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26485
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((((min((var_6), ((_Bool)1))) && (((/* implicit */_Bool) -6152355328633773083LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-6152355328633773099LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) 497591071)) : (var_14))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)9328)))) > (((/* implicit */int) (!(((/* implicit */_Bool) -479871827)))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) 6152355328633773106LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0)))) : (max((((/* implicit */int) var_6)), (-1965189821)))))) ? (((/* implicit */int) ((((6152355328633773080LL) / (-6152355328633773083LL))) == (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0)))))))) : (((((/* implicit */_Bool) -6152355328633773099LL)) ? (((((/* implicit */int) (_Bool)0)) / (-1965189821))) : ((-(-1965189821)))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                var_18 = ((/* implicit */signed char) arr_4 [i_0]);
                arr_10 [i_2] [i_1] [i_0] = (((!(((/* implicit */_Bool) var_3)))) ? (max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) (signed char)-55))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31946))) : (var_15)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))))))))));
                arr_11 [i_0] [(unsigned char)1] [i_2] [(unsigned char)1] = ((/* implicit */_Bool) (~(((max((((/* implicit */unsigned int) (unsigned short)56230)), (2333652677U))) >> (((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) var_11)) : (var_14))) - (2830343297U)))))));
            }
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_1])))) ? (((9223372036854775793LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34837))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 3; i_3 < 12; i_3 += 1) 
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_0 [i_3 - 3])))) ? (((((/* implicit */_Bool) (~(6152355328633773087LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) | (var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3 - 2] [i_3 - 2] [i_3 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) 2098323834)))))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_19 [i_0] [10LL] [10LL] [5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 63328667))));
                }
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_24 [i_0] [(signed char)10] [i_3] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)156))));
                    var_22 *= ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (min((var_11), (((/* implicit */int) arr_18 [i_3] [i_5])))) : (((/* implicit */int) ((((/* implicit */_Bool) -4193030255391967979LL)) && (((/* implicit */_Bool) var_9))))))) >= (((((/* implicit */int) max(((short)13535), (((/* implicit */short) (signed char)118))))) >> (((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))))))));
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */int) arr_22 [i_3 - 3] [i_3 - 1] [i_3 - 1] [i_3 - 3])) == (((/* implicit */int) (unsigned char)37)))) || (((/* implicit */_Bool) var_15))));
                    arr_25 [7] [i_0] [i_1] [i_3] [(signed char)1] [(signed char)1] = ((((/* implicit */int) (short)-13535)) / (((/* implicit */int) (short)13534)));
                }
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    var_24 += ((/* implicit */unsigned char) (short)13513);
                    arr_30 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))), (((-9135731541009280991LL) / (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                }
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    arr_34 [i_7] [i_3 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) (short)-24162);
                    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((2098323834) != (((/* implicit */int) (short)-13532)))))) ? (((/* implicit */long long int) arr_28 [i_0] [i_1] [i_0] [i_3 - 3] [i_0] [i_0])) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_5)))));
                }
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 12; i_9 += 2) 
                {
                    for (signed char i_10 = 3; i_10 < 10; i_10 += 1) 
                    {
                        {
                            arr_42 [i_0] [i_1] [i_8] [i_9] [i_0] &= ((/* implicit */short) ((min((4294967294U), (((/* implicit */unsigned int) (signed char)51)))) << ((((~(max((var_14), (((/* implicit */unsigned int) arr_21 [i_10 - 1] [i_9] [i_0] [i_0])))))) - (2338120051U)))));
                            var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((arr_37 [i_10] [i_10] [(_Bool)1] [i_10 - 1] [i_10 - 3]) / (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_9] [i_10])) ? (-1939414949) : (((/* implicit */int) (signed char)-61))))))) <= (min((((long long int) (short)-13514)), (((/* implicit */long long int) (unsigned char)99))))));
                            var_27 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)54)), (var_13)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) 1073741824))) != ((~(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_43 [i_1] [i_8] [i_8] = ((/* implicit */short) min(((unsigned short)24928), (((/* implicit */unsigned short) (unsigned char)255))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13535))) : (0LL)))) + ((-(11409567708244067627ULL)))));
                arr_44 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (var_6)));
            }
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_47 [i_0] [i_0] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) arr_15 [(short)8] [(short)8] [i_11] [(short)8])))))));
            var_29 &= ((/* implicit */short) 114688);
            var_30 = ((/* implicit */_Bool) var_15);
            /* LoopSeq 1 */
            for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                var_31 = ((/* implicit */unsigned char) 6U);
                var_32 = ((/* implicit */unsigned int) var_4);
                var_33 *= ((/* implicit */int) (!(arr_14 [i_12 + 1] [i_12 + 1] [i_12])));
                var_34 = ((/* implicit */int) (~(4294967291U)));
                arr_51 [i_0] [7U] [1U] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((930911414U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))))) : (((1U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [i_11])))))));
            }
        }
    }
    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
    {
        var_35 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (3446429269U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_13]), (((/* implicit */signed char) var_6)))))) : ((-(0U))))), (((/* implicit */unsigned int) (-(0))))));
        var_36 -= ((/* implicit */unsigned short) arr_7 [i_13] [i_13] [i_13] [i_13]);
        arr_55 [i_13] = ((/* implicit */signed char) var_15);
    }
    for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            for (signed char i_16 = 2; i_16 < 10; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 2; i_17 < 10; i_17 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) max(((short)14637), (arr_39 [i_14] [i_14] [i_14] [(unsigned short)4] [i_14] [i_14])))))), (((/* implicit */int) ((short) (short)-13535)))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -114689)), (arr_29 [i_14] [i_15] [(signed char)13] [i_17] [i_17 - 1])))) ? ((+(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) arr_40 [i_16 - 1] [(signed char)11] [i_14] [i_17] [i_18]))))))));
                        }
                        for (int i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (1043999275689946044LL))))));
                            arr_72 [i_14] [i_15] [i_15] [i_14] [i_14] = ((/* implicit */signed char) max((min((arr_70 [i_16 + 2] [i_16 + 2] [i_17] [i_17] [i_17] [3] [2ULL]), (var_4))), (min((((/* implicit */unsigned char) (signed char)-87)), (arr_70 [i_16 + 1] [i_19] [i_19] [i_19] [i_19] [i_19] [(signed char)11])))));
                            var_40 -= ((/* implicit */signed char) var_0);
                            arr_73 [i_14] [i_14] [i_16 - 1] [i_16 - 1] [i_16] [i_17 + 2] [i_17 + 2] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))));
                            arr_74 [i_14] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) min((var_0), (((/* implicit */short) (signed char)-87))))))), (((/* implicit */int) var_0))));
                        }
                        for (signed char i_20 = 2; i_20 < 11; i_20 += 2) 
                        {
                            var_41 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_23 [i_16] [i_15] [i_15 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2147483643))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((-114690), (((/* implicit */int) arr_78 [i_15] [i_15]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */int) arr_9 [i_14] [i_14] [i_14] [i_14])) : (114683)))))))));
                            var_42 = ((/* implicit */short) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_41 [i_20 - 1] [i_15 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)106)) || (((/* implicit */_Bool) -370259135)))))))), ((-(4193280U)))));
                            var_43 ^= ((/* implicit */long long int) (((_Bool)1) ? ((~(((((/* implicit */_Bool) arr_46 [i_15] [i_17] [i_20])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18854))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_17 [i_15] [i_16 + 3] [i_15] [i_20 + 2])) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_6 [i_14] [i_14])))))))));
                            var_44 = ((/* implicit */unsigned char) arr_31 [i_15] [1LL]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 3) 
                        {
                            var_45 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -194254220060758594LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_33 [i_17] [i_16] [(_Bool)0] [i_14])))) ? (((/* implicit */int) arr_71 [i_14] [i_15] [i_16] [i_14] [i_15] [i_17] [(unsigned char)10])) : (((/* implicit */int) min((((/* implicit */signed char) arr_40 [6ULL] [(unsigned char)2] [8U] [i_17] [i_17])), ((signed char)-108))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_14])) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) arr_4 [i_14]))))) ^ (arr_31 [i_15 + 1] [i_16 - 2]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) arr_38 [i_14] [i_15] [(signed char)3])) : (((/* implicit */int) (unsigned char)178)))) ^ (((/* implicit */int) (signed char)-116)))))));
                            arr_81 [i_14] [i_15 + 1] [i_16] [(_Bool)1] [(unsigned char)2] &= ((/* implicit */_Bool) (+(min((((arr_29 [(_Bool)1] [i_17 - 2] [i_16] [(_Bool)1] [i_14]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_17] [(_Bool)1] [i_16]))))), (((/* implicit */unsigned int) arr_66 [i_14] [i_21]))))));
                        }
                        var_46 = ((/* implicit */short) (unsigned char)68);
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_32 [(unsigned short)10] [i_14] [i_14] [i_14]))))) : ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)8)) : (arr_67 [i_14])))))));
    }
    var_48 *= ((long long int) var_2);
}
