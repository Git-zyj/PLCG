/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209126
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
    var_18 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) ((var_12) | (var_15)))), (((((/* implicit */_Bool) -120925531)) ? (var_11) : (2251799813685247ULL)))))));
    var_19 -= ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((2251799813685224ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))))))), (((/* implicit */int) var_8))));
    var_20 = ((/* implicit */unsigned int) (!(var_10)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_4))));
        var_22 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_8)))) + (((((/* implicit */_Bool) (unsigned short)6679)) ? (((/* implicit */int) (unsigned short)17398)) : (((/* implicit */int) (unsigned char)172))))));
    }
    /* LoopSeq 4 */
    for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_23 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((1423516293) >> (((((/* implicit */int) (unsigned char)66)) - (38)))))), (min((min((((/* implicit */unsigned int) (_Bool)1)), (var_16))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (-1423516294) : (((/* implicit */int) arr_3 [i_1 + 1])))))))));
        var_24 += ((/* implicit */int) max((2U), (((/* implicit */unsigned int) (unsigned short)34645))));
        var_25 += ((/* implicit */unsigned long long int) var_3);
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)15360))))));
        var_27 = ((/* implicit */int) min((var_27), (max((((/* implicit */int) (unsigned char)83)), (((((/* implicit */_Bool) var_5)) ? (-415621902) : (((/* implicit */int) var_10))))))));
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((18444492273895866359ULL) | (((/* implicit */unsigned long long int) var_0)))) : (arr_4 [i_3] [i_3])));
            var_29 = ((/* implicit */signed char) ((short) (~(1051230269))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) (_Bool)1);
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_15 [i_7 + 3] [i_6] [i_5] [i_4] [i_4] [8ULL]))));
                            var_32 = ((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) arr_15 [i_4] [i_5 - 1] [i_5] [i_7 + 1] [i_5 - 1] [i_5 - 1]))));
                            var_33 = ((/* implicit */unsigned long long int) ((arr_4 [i_6 + 1] [i_4]) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) % (2208675524U))))));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            var_34 = ((/* implicit */unsigned long long int) min((((int) arr_17 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1])), (((/* implicit */int) ((arr_4 [i_8 - 1] [i_8]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_3] [i_3]))))))));
            var_35 += ((((/* implicit */_Bool) max((arr_19 [i_8] [i_8] [i_8 + 1] [i_8] [i_8]), (arr_19 [i_8] [i_8 + 1] [i_8 + 1] [10ULL] [7ULL])))) ? ((~(arr_19 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_8 - 1] [11ULL] [i_8 + 1] [i_8 - 1] [i_8])))))));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 3) 
        {
            var_36 += ((/* implicit */unsigned int) arr_16 [11ULL]);
            /* LoopSeq 2 */
            for (unsigned char i_10 = 3; i_10 < 12; i_10 += 3) 
            {
                var_37 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26849))))), (max((arr_21 [i_3] [(unsigned short)12]), (((/* implicit */int) (unsigned char)127)))))) & (arr_21 [10ULL] [10ULL])));
                /* LoopSeq 4 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_38 = ((/* implicit */unsigned char) min((max((arr_4 [i_9 + 2] [i_9]), (arr_4 [i_9 + 1] [(unsigned short)11]))), (((arr_4 [i_9 + 2] [(unsigned short)3]) | (arr_4 [i_9 + 2] [i_9])))));
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) arr_5 [(signed char)8]))));
                    /* LoopSeq 1 */
                    for (short i_12 = 2; i_12 < 12; i_12 += 3) 
                    {
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3683689107U)) ? (((/* implicit */int) (unsigned short)13023)) : (((/* implicit */int) (unsigned short)14207))))) ? (max((((/* implicit */unsigned long long int) 611278188U)), (min((((/* implicit */unsigned long long int) var_1)), (arr_6 [i_10]))))) : (((((/* implicit */_Bool) (+(arr_29 [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43419)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_12)))) : ((~(6900506304375048047ULL)))))));
                        var_41 = min((var_11), (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30096)) - (((/* implicit */int) (short)25795)))))))));
                        var_42 -= ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) arr_23 [i_12 - 1])))));
                    }
                    var_43 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65505)) && (((/* implicit */_Bool) var_13))))), (var_12)));
                }
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24379)) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [3ULL] [i_3] [3ULL] [3ULL] [3ULL] [(unsigned short)0] [i_13]))))), (((2251799813685247ULL) + (arr_5 [i_13]))))) : (((/* implicit */unsigned long long int) (-((-(arr_34 [i_3] [i_3] [i_3] [i_3] [9] [i_3])))))))))));
                    var_45 = ((/* implicit */int) min((var_45), (max(((+(((/* implicit */int) arr_2 [i_10 + 1])))), (max((arr_13 [i_10 - 1] [i_9 + 2]), (arr_13 [i_10 + 1] [i_9 - 1])))))));
                    var_46 += ((/* implicit */short) (+(arr_18 [i_10 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 + 1])));
                }
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    var_47 = ((/* implicit */_Bool) var_13);
                    var_48 = max((min((arr_29 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_3])))), (arr_19 [i_3] [i_9] [(unsigned short)1] [i_3] [i_10 - 3]));
                    var_49 += ((/* implicit */unsigned short) min((6900506304375048047ULL), (max((((/* implicit */unsigned long long int) arr_34 [i_10] [i_9 + 2] [i_9 + 2] [i_10] [i_10] [i_14])), (536870911ULL)))));
                }
                for (unsigned long long int i_15 = 4; i_15 < 10; i_15 += 3) 
                {
                    var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                    var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_12)), (max((arr_6 [i_3]), (((/* implicit */unsigned long long int) var_8)))))))))));
                    var_52 -= ((/* implicit */unsigned int) (((((_Bool)1) ? (6900506304375048028ULL) : (((/* implicit */unsigned long long int) 82768024U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (max((var_2), (((/* implicit */unsigned int) 1564041379))))))))));
                    var_53 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1423516293)) ? (155089858) : (((/* implicit */int) (signed char)-86))));
                }
            }
            for (unsigned short i_16 = 2; i_16 < 12; i_16 += 4) 
            {
                var_54 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6900506304375048039ULL)) ? (14044837418775037934ULL) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_8)))) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_40 [i_16 - 2] [i_9 - 1] [i_16] [i_9])) : (((/* implicit */int) ((_Bool) var_7)))))));
                var_55 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
            }
        }
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            var_56 -= ((/* implicit */unsigned short) var_13);
            var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1663885086202410328ULL)) ? (11546237769334503582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125)))))) || (((/* implicit */_Bool) max((arr_1 [i_17]), (arr_10 [i_17])))))) ? ((+((~(var_15))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)52894)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3]))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 3) 
        {
            var_58 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
            var_59 = ((/* implicit */unsigned short) (~(arr_13 [i_18] [i_18])));
            var_60 -= ((/* implicit */unsigned long long int) (unsigned short)13029);
            var_61 = ((/* implicit */unsigned int) min((var_61), (((((/* implicit */_Bool) (unsigned short)13029)) ? (arr_27 [i_3] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13710)))))));
        }
        var_62 += max((((/* implicit */unsigned long long int) (unsigned short)61145)), (((((/* implicit */_Bool) max(((unsigned short)52507), ((unsigned short)13034)))) ? (arr_37 [7ULL] [i_3] [(_Bool)1] [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_15)))));
    }
    for (int i_19 = 2; i_19 < 15; i_19 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_20 = 0; i_20 < 17; i_20 += 3) 
        {
            var_63 += max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned long long int) 4294967292U)) : (2181942862483750077ULL))));
            var_64 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_3 [i_19 - 2]), (arr_3 [i_19 + 2])))), (min((arr_6 [i_19 - 2]), (((/* implicit */unsigned long long int) arr_54 [i_19 + 1] [i_19 - 2]))))));
        }
        var_65 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_19] [i_19 + 2])) ? (((/* implicit */unsigned long long int) 3820279578U)) : (arr_5 [(signed char)13]))))));
        var_66 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned short)52487)))), ((+(((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) 522489238806526223ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_67 = (unsigned short)13036;
        var_68 = ((/* implicit */unsigned short) min((8723525386413350513ULL), (14044837418775037934ULL)));
    }
}
