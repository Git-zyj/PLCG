/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192852
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
    var_10 = ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_2)))) < ((~(((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (1291870816) : (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [22] [i_0 + 2] [i_2])))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_2] [i_3])) ? (((((/* implicit */_Bool) (signed char)-38)) ? (-4562024266815650579LL) : (((/* implicit */long long int) 918586355)))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_2 [i_0 + 1] [22U] [i_2]) : (arr_2 [9] [i_1] [i_2])))));
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_5] [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 461230876)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2080734097)) ? (arr_12 [i_3]) : (((/* implicit */int) (short)24926))))) : (arr_7 [i_0 + 1] [i_0] [i_0 - 2])))), (max((((/* implicit */unsigned long long int) arr_16 [i_5] [i_0 - 1] [i_3] [i_0 - 1] [i_0 - 1])), (17083591394648249338ULL)))));
                            var_12 = ((/* implicit */unsigned long long int) ((((-512LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40629))) + (arr_11 [i_0 + 2])))));
                        }
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) -512LL)) ? (10910810236133716207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)16])))))) ? (((/* implicit */unsigned long long int) -4562024266815650580LL)) : (7ULL)))));
                            arr_21 [i_0] [i_3] [i_0] [i_0 + 2] [i_0 + 2] [(short)17] = ((/* implicit */unsigned char) ((((int) arr_5 [i_0] [i_2])) + (((-461230880) - (((/* implicit */int) arr_5 [i_0] [i_1]))))));
                            var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)40607)) ? (1270122301U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))));
                        }
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) * (((((/* implicit */_Bool) 486LL)) ? (((((/* implicit */_Bool) -4623207630527420626LL)) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)170)))) : (((/* implicit */int) arr_3 [0LL] [(unsigned char)5]))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 2; i_7 < 23; i_7 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)108)) & (((/* implicit */int) (short)11441))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)255)))) + (((((/* implicit */_Bool) -14LL)) ? (max((((/* implicit */long long int) 1766414665U)), (6306180591905738238LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((-4623207630527420623LL) == (((/* implicit */long long int) -1951470540))))) * (((/* implicit */int) ((((/* implicit */int) arr_8 [14] [i_1] [i_1] [i_1] [i_1])) < (((/* implicit */int) (unsigned char)251)))))))) > (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [20LL] [i_0] [20LL] [4U])) || (((/* implicit */_Bool) arr_8 [i_7] [i_3] [i_2] [i_1] [2]))))), ((+(2676098813U)))))));
                            var_18 -= ((/* implicit */_Bool) ((int) max((1167927886U), (260096U))));
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_23 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1]))) ? (((((/* implicit */_Bool) (-(1291870816)))) ? (((/* implicit */long long int) (-(arr_7 [9LL] [i_0] [i_0])))) : (((-6306180591905738238LL) + (9223372036854775807LL))))) : (((-4623207630527420628LL) % (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
        {
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [(signed char)0] [i_0] [i_0] [i_0])), (arr_29 [i_0] [i_8 + 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? ((-(max((((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0] [i_8] [i_8])), (arr_1 [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2417455443889858683LL)) ? (((/* implicit */long long int) 1766414668U)) : (4623207630527420642LL)))))))));
            var_20 = ((/* implicit */unsigned long long int) min((((int) ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_0] [6ULL] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0])) : (-2060006478)))), (((((/* implicit */int) max(((unsigned short)13), (((/* implicit */unsigned short) arr_23 [i_0] [i_8] [i_8] [i_8 - 1] [i_8 - 1]))))) / (-393080201)))));
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            arr_32 [i_9] = (+(((/* implicit */int) (signed char)(-127 - 1))));
            var_21 = ((((/* implicit */_Bool) ((arr_3 [i_9] [i_0 - 2]) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) arr_10 [i_9 + 1] [i_0 - 2] [20U] [2] [i_9] [20U] [i_0 - 2]))))) || (((((/* implicit */_Bool) 3077091494833968879ULL)) || (((/* implicit */_Bool) (unsigned short)26529)))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1025461664)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)43558), (((/* implicit */unsigned short) (_Bool)1)))))) : (max((arr_16 [i_9] [i_0] [10] [i_0] [i_0]), (((/* implicit */long long int) arr_23 [20] [20] [i_9] [i_9] [i_9]))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (17360696280668697380ULL) : (264241152ULL)))) ? (max((2528552641U), (((/* implicit */unsigned int) (unsigned char)59)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9 + 1] [i_9 + 1]))))) : (((/* implicit */unsigned int) ((int) (unsigned char)252)))));
        }
        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    {
                        arr_41 [i_0] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [11LL] [i_11] [i_10] [11LL] [i_0])) ? ((-(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_22 [i_0 - 1])) ? (max((1766414636U), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52216))))) : (((((/* implicit */_Bool) arr_28 [i_12 + 1] [i_12 + 1])) ? (arr_28 [i_12 + 1] [i_12 + 1]) : (arr_28 [i_12 + 1] [i_12 + 1])))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48873)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (short)32767))));
                        var_24 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) ((((/* implicit */_Bool) (short)-28870)) || (((/* implicit */_Bool) (short)-28870))))), ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_12])) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 15369652578875582736ULL)) ? (((/* implicit */int) (unsigned short)0)) : (226901950)))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_4 [(signed char)20] [i_11 + 1] [i_10])))) % (min((arr_0 [i_0]), (arr_0 [i_12 + 1])))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)23))));
                            arr_45 [i_11] [i_10] [i_11] [i_12] [i_13] [i_0 - 1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)64593)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16677)) ? (((/* implicit */int) (_Bool)1)) : (402653184)))) : (max((((/* implicit */unsigned long long int) (unsigned short)65515)), (18446744073709551615ULL)))))));
                            arr_46 [i_0] [i_10] [i_0] [i_11] [i_10] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((15369652578875582737ULL) << (((arr_7 [i_0] [i_10] [(short)1]) - (3098085451U)))))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((0ULL) + (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)122)))))));
                            arr_47 [i_11] [15ULL] [(unsigned short)22] [i_10] [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_11 - 1] [i_12] [i_13])) ? (((/* implicit */int) arr_8 [i_0 + 1] [5LL] [i_0 + 1] [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_8 [i_0 + 2] [(unsigned char)18] [i_11 - 1] [23LL] [i_13])))), (((/* implicit */int) max((arr_8 [i_0 + 1] [i_10] [i_11 - 1] [i_0 + 1] [i_0]), (((/* implicit */signed char) (_Bool)1)))))));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) 3077091494833968880ULL)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (unsigned char)95))))))));
        }
        arr_48 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 0))) ? (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [22LL] [i_0 - 2] [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 2] [i_0 + 1] [(unsigned char)16] [i_0 - 2] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) : (((((/* implicit */_Bool) 8538306306865381124LL)) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0] [(_Bool)1] [i_0 - 2] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_10 [(unsigned short)2] [i_0 + 2] [20] [(unsigned short)16] [i_0 - 2] [i_0] [i_0 + 1]))))));
    }
    for (int i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
        {
            arr_53 [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 8538306306865381124LL)) || (((/* implicit */_Bool) arr_19 [i_15] [22LL] [i_14])))))))) || (((/* implicit */_Bool) arr_16 [i_14] [i_14] [(unsigned char)4] [i_14] [i_15]))));
            arr_54 [i_14] [i_14] = ((/* implicit */short) ((_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) + (3077091494833968879ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_52 [i_14] [i_15] [i_14])))))));
        }
        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) 18446744073709551605ULL))));
                arr_60 [17] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_33 [i_17] [(unsigned char)9])))) || (((/* implicit */_Bool) ((unsigned long long int) 7603328977422150036ULL)))));
            }
            for (short i_18 = 0; i_18 < 19; i_18 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) 3077091494833968893ULL);
                var_30 = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) arr_8 [i_18] [i_16] [i_18] [(unsigned short)18] [(unsigned short)9]))))));
            }
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)80))))))));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                {
                    arr_71 [i_14] [i_14] = ((/* implicit */_Bool) ((max((max((9434129427702223675ULL), (((/* implicit */unsigned long long int) -3317980882663642577LL)))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-5276500188902020268LL)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(signed char)13] [i_19])))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 2; i_21 < 18; i_21 += 1) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 19; i_22 += 1) 
                        {
                            {
                                var_32 &= arr_7 [23LL] [i_21] [i_21 - 2];
                                var_33 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) == (25LL))) ? (((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2778))) : (2001312240034351459LL))) : (min((((/* implicit */long long int) 2007550552)), (576460752303422976LL)))))) & (((((/* implicit */_Bool) 2147483647)) ? ((~(4555284679398500764ULL))) : (max((arr_24 [i_21] [i_19] [i_19] [(short)0]), (((/* implicit */unsigned long long int) 4194176U))))))));
                                var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (1015808U)))) ? (((/* implicit */unsigned long long int) ((int) arr_43 [i_14] [(_Bool)0] [18] [i_14] [i_19] [i_21 - 1] [i_20 - 1]))) : (4555284679398500739ULL)));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((int) 4555284679398500748ULL)), (((/* implicit */int) ((_Bool) arr_31 [i_14])))))) * (((((((/* implicit */_Bool) 25ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) -318937951)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_14] [i_14] [i_14])) ? (2149929721U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 19; i_24 += 3) 
            {
                {
                    arr_84 [(unsigned short)4] [i_23] [i_23] [(unsigned short)4] |= ((/* implicit */short) max((((((/* implicit */_Bool) (((_Bool)1) ? (4066270595673400474LL) : (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_14] [i_14] [i_14] [i_24] [i_24])))))) ? (max((arr_58 [i_24]), (((/* implicit */unsigned int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_30 [i_24] [i_14])) ? (((/* implicit */unsigned int) -511965292)) : (2149929721U))))), ((-(((((/* implicit */_Bool) arr_70 [i_14] [(short)17] [i_24] [i_24])) ? (4293951464U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [(short)20] [i_23] [(short)20])))))))));
                    arr_85 [i_14] = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) (short)18754))));
                    var_36 = ((/* implicit */_Bool) arr_58 [i_24]);
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2112793141174895340LL)) ? (var_6) : (2250506897316670717ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((var_9) ? (17360696280668697406ULL) : (((/* implicit */unsigned long long int) var_8))))))) ? ((-(((((/* implicit */_Bool) 138409954650317186LL)) ? (((/* implicit */unsigned long long int) 272185897U)) : (var_6))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_2))))) / (max((((/* implicit */unsigned long long int) -9171894927855388802LL)), (2250506897316670717ULL)))))));
    var_38 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (5456327269283861619ULL)))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) var_5)))) : ((-(((/* implicit */int) var_7)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) 1274525431U))))))))));
}
