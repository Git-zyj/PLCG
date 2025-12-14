/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29627
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
    var_13 = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */int) (unsigned char)111)) ^ (((/* implicit */int) (signed char)-43)))), (((/* implicit */int) (short)-3638)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) ((unsigned short) (~(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)3641)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)3638)) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) (unsigned short)6144))));
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [3U] [i_1] [i_2] [i_3 + 2] [i_2] [i_2]))))) ? (((/* implicit */int) ((signed char) 9223372036854775807LL))) : ((-(((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 2] [i_2] [i_3 + 2] [i_2] [i_3 + 2])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) var_3);
                            var_18 = ((/* implicit */int) ((unsigned long long int) arr_0 [i_0 - 1]));
                        }
                        arr_12 [(unsigned char)11] [i_1] [i_2] [i_3 + 2] [i_2] [i_3] = (i_2 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned char)154)) / (((/* implicit */int) (unsigned char)111))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [11] [i_2] [i_3] [i_2] [i_2]))) : (5565908818035174824LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]) && (((/* implicit */_Bool) arr_8 [i_0] [7LL] [i_2] [i_3])))))) : (min((arr_8 [i_0] [i_1] [i_2] [i_1 + 1]), (arr_8 [6] [i_1 + 2] [i_2] [i_1 + 1])))))))) : (((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned char)154)) / (((/* implicit */int) (unsigned char)111))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [11] [i_2] [i_3] [i_2] [i_2]))) : (5565908818035174824LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]) && (((/* implicit */_Bool) arr_8 [i_0] [7LL] [i_2] [i_3])))))) : (min((arr_8 [i_0] [i_1] [i_2] [i_1 + 1]), (arr_8 [6] [i_1 + 2] [i_2] [i_1 + 1]))))))));
                        arr_13 [i_0] [i_0] [(unsigned char)8] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -275215268)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (unsigned short)6149))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [10ULL] [i_0]))) | (var_4))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) (short)-3638)), ((unsigned short)65517))))))));
        arr_15 [i_0 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [10U] [i_0] [10U]))));
    }
    for (long long int i_5 = 4; i_5 < 9; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (unsigned char i_7 = 3; i_7 < 9; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 4; i_9 < 7; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_17 [i_9]))));
                            arr_29 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (short)3638)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((6789728837137157169ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9112762052917317772LL)) && (((/* implicit */_Bool) 11938336822365841717ULL)))))))));
                            var_20 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_22 [i_5] [i_5] [i_5] [1U])), (arr_1 [i_5 - 3])))), (((((/* implicit */_Bool) (+(arr_27 [i_5] [i_6] [(short)4] [i_8] [0U])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_6] [i_5] [i_6]))))) : (arr_2 [14LL] [i_6])))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((((((/* implicit */_Bool) min((arr_20 [i_5]), (((/* implicit */int) (unsigned char)16))))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)6142)) ? (3810290531U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3638)))))))) | (((/* implicit */long long int) ((((((/* implicit */int) (short)-3638)) | (((/* implicit */int) (unsigned short)47768)))) ^ (((((/* implicit */_Bool) (unsigned char)32)) ? (67107840) : (137298237))))))))));
                        }
                        var_22 -= arr_10 [i_5] [i_5] [10LL] [i_5] [i_6];
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 8; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                {
                    arr_36 [i_5] [i_10] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)22))))))) || (((/* implicit */_Bool) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_11 [i_5 - 3] [i_5 - 3] [i_5] [i_5] [i_10])))) + (((/* implicit */long long int) arr_6 [i_5] [i_5] [i_11] [i_5])))))))) : (((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)22))))))) || (((/* implicit */_Bool) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_11 [i_5 - 3] [i_5 - 3] [i_5] [i_5] [i_10])))) - (((/* implicit */long long int) arr_6 [i_5] [i_5] [i_11] [i_5]))))))));
                    var_23 = ((/* implicit */short) arr_1 [2ULL]);
                    arr_37 [i_5] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) 2592515912U))));
                    var_24 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12))))) * (-1590377661)))));
                }
            } 
        } 
        arr_38 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) max((9223372036854775807LL), (((/* implicit */long long int) (short)-1)))))) ? (((/* implicit */int) ((((unsigned long long int) 1601387478)) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)47768)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_5 + 1] [i_5] [i_5] [i_5 - 4]))))) ? ((((_Bool)1) ? (1498337741) : (((/* implicit */int) (unsigned char)42)))) : (((((/* implicit */int) (unsigned char)162)) / (1791928911)))))));
        var_25 = ((/* implicit */_Bool) min((((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_5] [(short)3] [i_5] [(_Bool)1] [i_5])), ((unsigned short)65535)))) - (((/* implicit */int) ((18446744073709551591ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91)))))))), (((/* implicit */int) ((arr_31 [i_5] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((-2322334818833208089LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (short)5)) * (((/* implicit */int) arr_40 [i_12])))))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 18; i_13 += 4) 
        {
            for (int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) ((unsigned short) arr_45 [i_13 + 1]));
                    var_28 ^= ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-73)) + (2147483647))) << (((var_1) - (1411945340U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)7)) >> (((/* implicit */int) (short)8))))) : (arr_42 [i_13 + 1] [i_13 - 2] [i_13 - 2]));
                    arr_47 [i_12] [i_13 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_46 [i_12] [i_13] [i_14]))));
                    arr_48 [(unsigned char)17] [i_13] [3ULL] [3ULL] = ((/* implicit */_Bool) (+(18446744073709551613ULL)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_45 [i_12]))));
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                arr_54 [i_12] [i_15] [i_16] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_46 [i_16] [i_15] [i_12])))))));
                arr_55 [i_12] [i_12] [i_12] [i_16] = ((/* implicit */int) (+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_12] [i_15]))) : (arr_42 [i_12] [19ULL] [i_16])))));
            }
            for (unsigned short i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                var_30 += ((/* implicit */signed char) ((314074608) | (((/* implicit */int) (unsigned char)11))));
                var_31 += (signed char)-63;
                var_32 -= ((/* implicit */unsigned long long int) (-(arr_58 [i_12])));
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1064611284505092787LL)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40634))) : (4104162817U)))))))));
            }
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) 137298218)))))));
        }
    }
    /* LoopNest 2 */
    for (short i_18 = 0; i_18 < 22; i_18 += 4) 
    {
        for (int i_19 = 3; i_19 < 21; i_19 += 4) 
        {
            {
                var_35 ^= arr_62 [21] [i_19 - 3];
                /* LoopNest 3 */
                for (long long int i_20 = 1; i_20 < 20; i_20 += 3) 
                {
                    for (unsigned short i_21 = 2; i_21 < 18; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_36 -= ((/* implicit */long long int) max((min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_63 [i_18] [i_18] [i_18])))), (((/* implicit */int) (unsigned short)40631)))), (((((int) var_1)) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_69 [i_19] [i_20] [i_21 - 1] [7ULL])), ((unsigned short)30074))))))));
                                arr_74 [i_20] [(signed char)16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_62 [(_Bool)1] [12LL]), ((-(((/* implicit */int) arr_69 [i_18] [i_19] [(unsigned char)18] [i_21 - 1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) arr_71 [i_20] [0LL] [i_20] [(signed char)15] [i_20 - 1]))))) ? (((/* implicit */unsigned int) arr_62 [i_18] [i_19])) : (((unsigned int) arr_65 [i_19] [i_18]))))) : (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) * (3223827516U))))));
                            }
                        } 
                    } 
                } 
                var_37 = ((/* implicit */unsigned char) max((((unsigned int) min((((/* implicit */long long int) arr_63 [i_18] [i_19] [i_18])), (arr_71 [i_18] [i_18] [i_18] [i_18] [i_19 + 1])))), (((/* implicit */unsigned int) (unsigned short)2))));
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) max((((((/* implicit */_Bool) arr_67 [(short)4] [i_18] [(signed char)14] [i_18] [i_19 - 2])) ? (((((/* implicit */unsigned int) (-2147483647 - 1))) * (arr_66 [i_19] [i_18] [i_18] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-1)))))), (((/* implicit */unsigned int) ((((arr_60 [i_18]) & (var_10))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_18] [i_19 - 2])))))))))));
                var_39 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_65 [i_19 - 2] [i_19 + 1]))) ? ((~(7419406944159947494ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_63 [i_19 - 2] [i_19 + 1] [i_19 - 2])))))));
            }
        } 
    } 
    var_40 = ((/* implicit */int) (-(var_10)));
}
