/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241827
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
    var_14 = ((/* implicit */unsigned int) var_13);
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) max(((unsigned short)65515), (((/* implicit */unsigned short) (short)23916)))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-23905), (((/* implicit */short) (signed char)114)))))) + (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-23894)) ? (((/* implicit */int) (short)23918)) : (((/* implicit */int) (signed char)7)))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -628505425)) ? (1946266556) : (2147481600)));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1946266560)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (short)7812)) ? (974824797U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) 16382)) >= (3320142500U)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) != ((-2147483647 - 1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */unsigned int) max((var_5), (((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) arr_0 [i_1]))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) min((-2147483643), (((/* implicit */int) arr_5 [i_1]))))) : (max((((/* implicit */unsigned int) arr_3 [i_1])), (3320142501U))))))))));
        /* LoopSeq 2 */
        for (short i_2 = 4; i_2 < 11; i_2 += 1) 
        {
            var_20 = ((/* implicit */short) min((((((/* implicit */int) min((((/* implicit */short) arr_0 [i_2 - 4])), (var_7)))) - (-2147483646))), (max((var_11), (var_5)))));
            arr_8 [6ULL] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_9)) & (var_4))) >> (((min((1152640029630136320ULL), (((/* implicit */unsigned long long int) 817083118)))) - (817083073ULL)))))) ? (((min((arr_7 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_7)))) - (((/* implicit */unsigned long long int) max((arr_4 [i_1]), (-1398971331)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-119)), (arr_6 [i_1] [i_1] [i_1])))))));
            arr_9 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) (signed char)-54)), (var_7)))), (min((((/* implicit */int) ((8160) <= (((/* implicit */int) var_7))))), ((((_Bool)1) ? (((/* implicit */int) var_0)) : (var_9)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_21 = max((((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned long long int) 277937869U)) : (3275469181297277728ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)64)) >> (((((/* implicit */int) arr_0 [i_1])) + (139))))), (((/* implicit */int) var_1))))));
            arr_13 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((3701960056U), (3320142519U))), (((/* implicit */unsigned int) (((-2147483647 - 1)) & (((/* implicit */int) (signed char)52)))))))) && (((/* implicit */_Bool) min((min((var_2), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((-1126743405) <= (var_11)))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((max((var_2), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((var_2) >= (((/* implicit */unsigned int) 2147483647))))))))));
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -2147483647)), (var_2)))) != (max((min((18446744073709551594ULL), (((/* implicit */unsigned long long int) var_3)))), (min((15701735617650216195ULL), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_3] [i_4 + 1]))))))));
            }
            arr_18 [(short)8] [(signed char)8] = ((((/* implicit */_Bool) min((max((arr_15 [i_1] [i_3]), (((/* implicit */unsigned short) arr_6 [i_1] [i_3] [i_3])))), (arr_1 [i_3])))) ? (min((min((((/* implicit */unsigned long long int) var_0)), (arr_7 [i_1] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((arr_4 [i_1]) | (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)32764))))))));
            var_24 -= ((/* implicit */short) min((((36028797018963967ULL) >> (((arr_12 [i_1] [i_1] [i_3]) - (8042972957370109378ULL))))), (max((9128777941150627151ULL), (((/* implicit */unsigned long long int) var_1))))));
        }
        var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_0)) + (((/* implicit */int) (short)18089)))), (((/* implicit */int) arr_10 [i_1]))))) & (min((((((/* implicit */_Bool) var_9)) ? (139611588448485376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) min((-852507166), (((/* implicit */int) (_Bool)1)))))))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) max((5152694906812470098ULL), (((/* implicit */unsigned long long int) (signed char)120)))))));
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_6 = 3; i_6 < 14; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                for (short i_8 = 3; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_27 ^= ((/* implicit */unsigned long long int) ((((min((arr_26 [i_5] [i_6 - 2] [i_6 + 2]), (arr_26 [i_5] [i_7] [i_5]))) == (((/* implicit */int) max((((/* implicit */short) (signed char)125)), ((short)-18079)))))) ? (max((((/* implicit */unsigned int) max((((/* implicit */int) (short)32420)), (-268556236)))), (3320142528U))) : (((/* implicit */unsigned int) min((((/* implicit */int) max((arr_27 [i_5] [i_6] [i_7] [i_8 + 1] [i_8]), ((_Bool)1)))), (max((var_9), (((/* implicit */int) var_0)))))))));
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_20 [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7 + 1])) ? (((/* implicit */int) (short)11)) : (var_5)))) : (min((var_12), (1722245142954283685ULL)))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1670975911) + (((/* implicit */int) (signed char)55))))) ? (max((4414405808906686141ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-19602), ((short)23227)))))))) ? (min((((/* implicit */unsigned int) (signed char)-85)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))));
        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (((-2147483647 - 1)) != (((/* implicit */int) (signed char)116))))), (((((/* implicit */int) ((((/* implicit */int) (signed char)8)) <= (((/* implicit */int) (signed char)110))))) & (((/* implicit */int) (_Bool)1))))));
    }
    for (int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned char) min((2103063535493070090ULL), (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) 2147483647)) : (15567665998197448366ULL)))));
        var_32 = ((/* implicit */_Bool) min((max((arr_28 [i_9] [i_9] [i_9] [i_9]), ((short)4383))), (((/* implicit */short) min((var_6), ((signed char)101))))));
        var_33 = ((/* implicit */int) min((min((max((var_12), (((/* implicit */unsigned long long int) arr_23 [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8069)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) arr_29 [i_9] [i_9] [i_9] [i_9]))))))), (min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9]))) : (var_12))), (((/* implicit */unsigned long long int) var_9))))));
    }
    var_34 |= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))))), (max((var_12), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) var_6))));
}
