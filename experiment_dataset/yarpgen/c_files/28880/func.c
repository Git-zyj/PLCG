/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28880
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
    var_13 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */short) (_Bool)1)), ((short)-32760))), (((/* implicit */short) ((_Bool) 576320014815068160LL))))))));
    var_14 = max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (~((-2147483647 - 1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_15 ^= (+(((((/* implicit */int) ((short) var_12))) << (((((((/* implicit */_Bool) var_10)) ? (-114870626417051686LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (114870626417051708LL))))));
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                arr_9 [i_2] [i_1 - 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((7460598073081420881LL) <= (2095104LL)))) | (((((/* implicit */int) (unsigned short)48911)) / (-559681884)))));
                arr_10 [1ULL] [1ULL] = ((/* implicit */_Bool) var_10);
                arr_11 [i_0] [i_0] [3ULL] [i_2] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) 576320014815068160LL)) * (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_7))))), (max((4201944667371118251ULL), (((/* implicit */unsigned long long int) var_12))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    var_16 = (+(((/* implicit */int) ((_Bool) (short)-24425))));
                    var_17 *= ((/* implicit */unsigned char) ((var_8) <= (var_8)));
                }
                var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_3)) | (((/* implicit */int) var_6)))), (((int) var_2))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_0)) + (var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14509420696268844121ULL)))))))));
            }
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_9)))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_7))) : (((/* implicit */unsigned long long int) ((unsigned int) var_11)))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned long long int) ((13406454354652657572ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13486)))))))));
                var_21 ^= ((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9843)))));
            }
            for (long long int i_6 = 3; i_6 < 19; i_6 += 4) 
            {
                arr_24 [i_0] [i_0] &= ((/* implicit */signed char) ((var_11) > (((/* implicit */int) (_Bool)0))));
                arr_25 [i_6] [i_6 - 3] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((int) var_8))));
            }
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1922791652U) >= (((/* implicit */unsigned int) 2147483620))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    arr_32 [i_0] [i_4] [i_0] [i_7] [i_7] = ((/* implicit */long long int) (~(((var_10) % (((/* implicit */int) var_4))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        arr_36 [i_9] [i_7] [i_7 - 1] [i_7] [i_0] = ((var_12) ? (((/* implicit */int) (unsigned short)16617)) : (((((/* implicit */_Bool) (unsigned short)48879)) ? (((/* implicit */int) (unsigned short)63943)) : (((/* implicit */int) (unsigned short)34734)))));
                        arr_37 [(unsigned short)8] [i_8] [i_0] [i_4] [i_0] &= ((/* implicit */_Bool) ((((-1079707676) + (2147483647))) << (((var_1) - (1453175378)))));
                        var_23 = ((/* implicit */unsigned short) ((524287) != (((/* implicit */int) var_4))));
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -131543626)) ? (((/* implicit */int) var_0)) : (var_11))) * (((/* implicit */int) ((short) 9510735238657605839ULL)))));
                    }
                }
                for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    arr_42 [i_4] [i_7] = ((/* implicit */unsigned long long int) (~(2147483647)));
                    arr_43 [i_7] [i_4] [(_Bool)1] = ((((4201944667371118251ULL) >> (((4062082476U) - (4062082476U))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (var_9))));
                }
                for (short i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (_Bool)1))) <= (((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1))))));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        arr_49 [i_0] [i_0] [(short)9] [i_7] [i_7] [(short)4] = ((/* implicit */short) ((2022745608655976991ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52)))));
                        arr_50 [(unsigned short)9] [i_11] [i_7] [i_0] [i_0] = ((((/* implicit */_Bool) var_4)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)));
                        arr_51 [i_7] = ((/* implicit */long long int) ((var_2) - (((/* implicit */int) (short)5753))));
                        arr_52 [i_7] [i_7] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (var_1)))) : (((((var_5) + (2147483647))) << (((var_1) - (1453175378)))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)49310)) ? (var_1) : (var_2)));
                        arr_55 [i_0] [i_0] [i_7] [i_11] [(_Bool)1] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)77)) & (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22151))) : (((((/* implicit */_Bool) -1LL)) ? (-576320014815068151LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        arr_56 [i_7] [i_11] [i_11] [14LL] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22150)) || (((/* implicit */_Bool) var_0))))) & (((/* implicit */int) (signed char)-67))));
                    }
                    for (long long int i_14 = 3; i_14 < 19; i_14 += 3) 
                    {
                        arr_61 [i_14 - 2] [(unsigned char)0] [i_7] [i_4] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (var_1)));
                        arr_62 [i_7] [i_11] [i_7] [(unsigned short)6] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1996076171318365231LL)) ? (var_5) : (621657283)));
                    }
                }
                var_27 ^= ((/* implicit */short) ((((_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12026785693300536997ULL)));
                /* LoopSeq 1 */
                for (int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    arr_65 [i_0] [i_0] [i_0] [i_7 + 1] [i_7] [(unsigned short)16] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65517))));
                    arr_66 [(short)6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)480)) ? (-1881610199533987159LL) : (var_8)));
                    /* LoopSeq 4 */
                    for (short i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((var_11) + (2147483647)));
                        arr_70 [17ULL] [i_15] [i_7] [i_15] [i_15] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)48911)) ? (((/* implicit */int) var_12)) : (-2147483647))) / (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_12))))));
                        var_29 = ((/* implicit */short) ((((1679727897U) < (((/* implicit */unsigned int) var_10)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19272)) / (((/* implicit */int) (short)21964))));
                    }
                    for (short i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
                        var_32 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_75 [i_0] [i_4] [(unsigned short)13] [(short)14] [i_15] [i_15] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (6867219121682342185LL)))) >= (((unsigned long long int) (short)480))));
                    }
                    for (short i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
                    {
                        arr_79 [17U] [i_4 - 1] [i_7] [i_7] [7] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_9)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) >= (var_7))))));
                        arr_80 [i_18] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((var_8) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)43380)) == (var_10)))))));
                    }
                    for (unsigned int i_19 = 4; i_19 < 19; i_19 += 4) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_11)))) >= (((((/* implicit */_Bool) 1916301645U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                        var_34 = ((/* implicit */unsigned short) ((16923736258888919019ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        arr_83 [i_0] [i_4] [i_7] [i_7] [i_19 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (var_7)))) : ((~(((/* implicit */int) (signed char)25))))));
                        arr_84 [(unsigned char)8] [i_4] [i_4] [i_7] [i_7] [i_19 - 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (4294967295U))))) != (((((/* implicit */_Bool) var_6)) ? (2771439493U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                        arr_85 [i_7] [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                    }
                }
            }
            for (unsigned long long int i_20 = 2; i_20 < 19; i_20 += 4) 
            {
                var_35 = ((/* implicit */unsigned int) ((long long int) var_6));
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4395)) ? (var_11) : (((/* implicit */int) var_3))))) < (((((/* implicit */_Bool) var_2)) ? (18065686159509580769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))));
            }
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_92 [i_21] = ((/* implicit */unsigned short) 13523322048850530564ULL);
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 4; i_22 < 19; i_22 += 4) 
            {
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) ((short) min((((/* implicit */int) var_4)), (var_1))))) : (max((((((/* implicit */int) var_12)) & (((/* implicit */int) var_3)))), (((/* implicit */int) ((var_5) <= (((/* implicit */int) var_3))))))))))));
                var_38 *= ((/* implicit */unsigned int) 18446744073709551614ULL);
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2551614161573674988LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (4934004337281366811LL))) >= (((/* implicit */long long int) var_2)))))));
            }
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (~(((((/* implicit */unsigned long long int) var_5)) * (((((/* implicit */_Bool) var_1)) ? (10ULL) : (((/* implicit */unsigned long long int) var_10)))))))))));
            var_41 = ((/* implicit */short) ((-4934004337281366827LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526)))));
        }
        for (short i_23 = 0; i_23 < 20; i_23 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_24 = 3; i_24 < 19; i_24 += 2) 
            {
                var_42 = ((/* implicit */short) ((4156458397U) + (((/* implicit */unsigned int) -1063725612))));
                arr_100 [i_0] [i_0] [i_23] = ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_4))));
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_26 = 0; i_26 < 20; i_26 += 2) 
                {
                    arr_105 [i_26] [i_23] [i_0] [i_23] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-11)))) * (((((/* implicit */int) (short)-24011)) / (-2135443758)))));
                    arr_106 [i_26] [i_23] [i_23] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39599)) || (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) 3864332159386332847LL)) ? (var_7) : (18446744073709551614ULL)))));
                    arr_107 [4LL] [i_23] [i_25] [i_26] [i_23] = ((/* implicit */long long int) ((var_1) << (((((/* implicit */int) var_4)) - (3560)))));
                }
                /* LoopSeq 1 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_110 [i_23] [i_23] = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)-24027)))) << (((5582790128756840253ULL) - (5582790128756840244ULL)))));
                    var_43 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) 1833675010442774159LL)))) || ((!(((((/* implicit */_Bool) 4ULL)) || (((/* implicit */_Bool) -131543641))))))));
                }
                arr_111 [i_0] [i_25] [i_25] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (-1809046720)));
            }
            var_44 = max((((int) var_0)), (((/* implicit */int) var_6)));
            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) | (var_2))) / (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-32))))) : (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 4255533603U)) : (var_8))))))));
        }
    }
}
