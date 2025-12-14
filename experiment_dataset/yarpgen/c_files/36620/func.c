/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36620
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [4] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((7495887813607593080LL) < (((/* implicit */long long int) (-2147483647 - 1))))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_4))) - (arr_1 [(unsigned short)9])))));
        arr_3 [i_0] = ((/* implicit */short) (-(425447600)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)71)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_20 [i_1] [i_2 + 1] [i_3] [i_3] [1ULL] = (-(var_7));
                                arr_21 [i_1] [2] [i_3] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */unsigned long long int) 97525301)) : (17102905583571117474ULL)));
                                var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */long long int) arr_13 [i_4] [i_4 + 3] [i_4] [i_4 + 2] [i_4] [i_4 + 2])) / (((((/* implicit */_Bool) var_14)) ? (-6162533233943078559LL) : (((/* implicit */long long int) arr_13 [i_4] [i_4] [i_4] [i_3] [i_2 - 1] [i_1]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_28 [i_7] = ((2758212286154767071ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2 + 2] [i_6 - 3] [i_6 - 1] [i_6 - 1]))));
                                arr_29 [i_7] [i_7 - 1] [i_7 - 1] [i_6] [i_7 - 1] [i_3] [i_7 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)44650))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */unsigned int) ((var_8) << (((((((/* implicit */_Bool) var_12)) ? (arr_25 [i_1] [i_2] [i_1] [14] [i_3] [14] [i_3]) : (((/* implicit */unsigned int) arr_7 [11ULL] [11ULL] [11ULL])))) - (1099996412U)))));
                    arr_30 [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1])) ? (473036676) : (((/* implicit */int) var_11)));
                    var_19 = ((/* implicit */unsigned char) (+(4307472395656627321LL)));
                }
            } 
        } 
    }
    for (int i_8 = 3; i_8 < 22; i_8 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [(signed char)15]))))) | (((arr_31 [i_8] [i_8]) << (((((-7495887813607593054LL) + (7495887813607593066LL))) - (11LL)))))))) ? ((((!(((/* implicit */_Bool) arr_32 [i_8 - 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) : (var_8)))) : (((arr_32 [i_8]) - (((/* implicit */unsigned long long int) var_7)))))) : (max((((arr_32 [i_8 + 1]) | (2758212286154767064ULL))), (max((var_9), (((/* implicit */unsigned long long int) var_14)))))))))));
        /* LoopNest 3 */
        for (long long int i_9 = 4; i_9 < 23; i_9 += 3) 
        {
            for (short i_10 = 2; i_10 < 20; i_10 += 3) 
            {
                for (unsigned int i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    {
                        arr_39 [i_8] [i_8] [i_8] [i_11 - 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((1343838490138434141ULL), (((/* implicit */unsigned long long int) var_1))))) ? (max((((/* implicit */int) var_6)), (-231438521))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_10] [i_10 + 3])) && (((/* implicit */_Bool) arr_31 [i_8] [i_8])))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 808869628U)) != (2586555450452860233ULL))))) - ((((-(arr_36 [i_8] [i_9] [(_Bool)1] [i_11 + 3]))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_10 - 1] [i_11] [i_12])) - (-362243294))))))));
                            arr_42 [i_12] [2ULL] [i_10] [2ULL] [i_8] &= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_9] [i_10] [(signed char)4] [2U]))))) && (((/* implicit */_Bool) ((15688531787554784543ULL) | (arr_32 [i_11 + 3])))))))));
                            arr_43 [i_8] [i_8] [i_8] [i_10] [i_10] [i_10] [i_8] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1247640173U)))) ? ((~(((/* implicit */int) (unsigned char)38)))) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))))), (max(((signed char)66), ((signed char)68))))))));
                            arr_44 [i_8] [i_9 - 2] [i_8] [i_8] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) arr_35 [i_9 - 3] [i_10 + 3] [i_11 + 1])), (-8668699580917869284LL))), (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            arr_45 [i_8] [i_9] [12LL] [i_11] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_9] [i_9] [i_10] [10LL]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_36 [i_8 + 2] [1U] [1U] [i_12]) : (var_0)))))))) : (min((min((2402485489700195956ULL), (((/* implicit */unsigned long long int) arr_41 [i_8 - 2] [i_8] [i_8 - 2] [18ULL])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_11] [i_9])))))))));
                        }
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((2402485489700195960ULL) >= (17102905583571117474ULL))))));
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 22; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                {
                    arr_52 [i_14] [(unsigned char)22] [i_8] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2069506320U)) ? (arr_51 [i_14] [i_13] [i_8 - 1]) : (((/* implicit */unsigned long long int) 3067534377850014284LL)))), (((arr_36 [i_8] [i_8] [i_8] [i_8 + 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59)))))))) ? (((((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_47 [0LL] [i_8] [0LL])))) % (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) arr_34 [i_8] [3ULL] [i_8]))))))) : ((~(-1622960387))));
                    arr_53 [i_8] [i_13] [i_8] = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_50 [i_8] [(short)6] [i_8])), (4ULL))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_15 = 1; i_15 < 22; i_15 += 3) 
        {
            for (signed char i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_17 = 3; i_17 < 21; i_17 += 1) 
                    {
                        arr_61 [i_8] [i_16] [17] [i_8] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_48 [(signed char)18] [i_16] [i_8])) ? (((/* implicit */long long int) 1559925984)) : (var_1))) << (((min((var_2), (((/* implicit */unsigned long long int) var_13)))) - (3624167858ULL)))))) ? (((((/* implicit */_Bool) 0)) ? (min((((/* implicit */unsigned int) 362243268)), (4U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8] [i_15] [i_8] [i_8 - 2] [i_8])))))))) : (((/* implicit */unsigned int) ((max((229376), (((/* implicit */int) (_Bool)1)))) ^ (max((((/* implicit */int) arr_47 [i_8 - 2] [i_8 - 2] [i_8 - 2])), (arr_34 [i_8 - 3] [7ULL] [i_8])))))));
                        arr_62 [i_8] [i_15 - 1] [i_16] [1ULL] [i_17] = (i_8 % 2 == 0) ? (((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)512)))), (((((((var_16) + (2147483647))) << (((((/* implicit */int) arr_55 [i_15] [i_15] [i_8])) - (19))))) | ((+(arr_56 [i_17] [i_16] [i_15])))))))) : (((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)512)))), (((((((var_16) + (2147483647))) << (((((((/* implicit */int) arr_55 [i_15] [i_15] [i_8])) - (19))) - (131))))) | ((+(arr_56 [i_17] [i_16] [i_15]))))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        arr_65 [i_8] [i_18] |= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) max((arr_63 [i_18]), (arr_47 [i_8 - 3] [(unsigned char)8] [(unsigned char)8])))), (max((arr_58 [i_8] [i_18]), (((/* implicit */unsigned long long int) var_7)))))) >= (((((/* implicit */_Bool) arr_47 [i_15 + 2] [i_15 - 1] [i_15 + 2])) ? (((/* implicit */unsigned long long int) 2225460967U)) : (var_15)))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16495281840590473393ULL)) ? (((/* implicit */int) arr_41 [i_18] [i_8] [i_8] [i_18])) : (((/* implicit */int) arr_41 [i_18] [i_15] [i_8] [i_18]))))) ? (((((/* implicit */_Bool) arr_41 [i_18] [2] [2] [i_18])) ? (-1752473006460553085LL) : (((/* implicit */long long int) -362243310)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_18] [(unsigned short)18] [i_15 - 1] [i_18])))))))))));
                        arr_66 [i_8] = ((/* implicit */int) min(((~(arr_58 [i_8 - 2] [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_8])) ? (var_7) : (((/* implicit */int) arr_63 [i_8])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_19 = 2; i_19 < 21; i_19 += 3) /* same iter space */
                    {
                        arr_69 [i_19] [i_19] [i_8] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))));
                        arr_70 [i_8] [i_15] [i_8] [i_19] = ((/* implicit */signed char) (!(((((/* implicit */int) (unsigned short)20887)) != (((/* implicit */int) (unsigned char)209))))));
                    }
                    for (unsigned int i_20 = 2; i_20 < 21; i_20 += 3) /* same iter space */
                    {
                        arr_74 [i_15 + 1] [18ULL] [i_20] |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((arr_56 [i_8] [i_8] [i_20]) / (((/* implicit */int) arr_72 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [22ULL]))))) * (((16495281840590473371ULL) * (((/* implicit */unsigned long long int) var_1)))))) * (((/* implicit */unsigned long long int) ((((arr_46 [(short)20] [0LL]) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) arr_41 [i_8] [i_8] [14ULL] [(_Bool)1])))) * (((/* implicit */int) max((var_5), (arr_41 [i_8] [i_15] [i_16] [(unsigned char)14])))))))));
                        var_24 ^= ((/* implicit */long long int) min((((((/* implicit */int) var_11)) <= (-929874331))), (((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) arr_31 [i_8] [i_8])))) != (((/* implicit */long long int) max((arr_56 [i_15] [i_15] [i_15]), (((/* implicit */int) (unsigned char)244)))))))));
                    }
                    arr_75 [i_8] [i_8] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(-1422125917737184957LL)))))) && ((!(((/* implicit */_Bool) (~(362243333))))))));
                }
            } 
        } 
    }
    for (long long int i_21 = 0; i_21 < 13; i_21 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_22 = 2; i_22 < 9; i_22 += 2) 
        {
            for (signed char i_23 = 0; i_23 < 13; i_23 += 4) 
            {
                for (long long int i_24 = 4; i_24 < 10; i_24 += 2) 
                {
                    {
                        var_25 = (-((+(var_8))));
                        var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (6236412673347069198LL) : (((/* implicit */long long int) arr_5 [i_23] [(unsigned char)2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_51 [i_21] [i_21] [i_21]) : (16495281840590473378ULL)))))))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_78 [i_22] [i_22 + 2] [i_22])))));
                        arr_86 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-70)))))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) <= (arr_4 [i_24] [i_23])))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_2))) - (12800184654392574659ULL)))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)73)))))))), (((((/* implicit */_Bool) arr_34 [i_21] [i_21] [i_21])) ? (((((/* implicit */unsigned long long int) var_3)) * (11357183574778993402ULL))) : (((/* implicit */unsigned long long int) var_3))))));
    }
    var_28 = (+((+(max((((/* implicit */unsigned long long int) -8069960213449084117LL)), (var_9))))));
}
