/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191596
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
    var_10 = ((/* implicit */unsigned char) min((805306368U), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4147593729991992185ULL)) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 3]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-74)), (arr_0 [i_0 + 2] [i_0 + 3])))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (arr_0 [i_0 + 2] [i_0 + 3]))))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) (~(min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) 3489660945U);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) var_7);
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (26U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))))) : (max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned char) arr_3 [15]))))), (var_6)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */int) (~(((arr_6 [i_1]) & ((+(arr_6 [i_2])))))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_1] [i_1 + 1] [i_2] [i_1] [(unsigned char)2] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)51264))));
                            arr_20 [i_5] [11] [i_1] [i_1] [(unsigned char)16] [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (min((((/* implicit */unsigned long long int) arr_4 [i_4])), (((((/* implicit */unsigned long long int) arr_17 [i_1] [(unsigned short)17] [i_3] [(signed char)5] [i_5])) | (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_1] [i_4] [i_3 + 1] [(unsigned short)0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17592183947264LL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (1679008758)))) : (min((max((-17592183947264LL), (-17592183947265LL))), (((/* implicit */long long int) min(((unsigned char)12), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))))));
                            var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)64973)) ? (((/* implicit */int) (unsigned short)563)) : (((/* implicit */int) var_0)))))), ((~(arr_17 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3])))));
                            arr_24 [i_1] = ((/* implicit */unsigned short) ((short) (+(((17592183947267LL) << (((/* implicit */int) arr_10 [(short)1] [i_1] [i_1])))))));
                        }
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            arr_27 [i_1 - 1] [i_1] [10LL] [i_3] [i_4] [i_1] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(arr_8 [i_1] [i_2])))), (((((/* implicit */_Bool) ((int) arr_11 [i_1]))) ? ((~(11705632414451335218ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_3] [i_4] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) var_7)))))))));
                            var_15 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17592183947267LL)) ? (var_6) : (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (3189891990U) : (((/* implicit */unsigned int) arr_22 [i_1] [(short)10] [(short)10] [i_1] [i_1] [i_1]))))) : (max((((/* implicit */long long int) var_3)), (-1LL))))));
                            arr_28 [i_1] [i_1] [i_1 + 3] [i_1] [i_1 + 2] = ((/* implicit */int) min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_17 [i_7] [i_4] [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) var_3)) : (var_6))) : (((/* implicit */unsigned long long int) (+(var_3)))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_10 [i_7] [i_1] [i_1])))))))));
                            arr_29 [i_1] [(short)6] [i_3] [i_3] [i_7] = (~(((/* implicit */int) var_7)));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_16 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (var_3))), (((((/* implicit */_Bool) -648590456)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))))), (0)));
                            arr_32 [i_8] [i_1] [i_1] [i_3 - 1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) min((-1), (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 3489660957U)) : (275593770303205471LL)))))))));
                            var_17 = ((/* implicit */unsigned short) (~(13588013845299746732ULL)));
                        }
                        for (unsigned int i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            arr_35 [i_1] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned int) (unsigned char)113);
                            arr_36 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */short) ((((((4920462916467296354LL) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51986)) || (((/* implicit */_Bool) 244289400)))))));
                            arr_37 [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)52001))))), (min((((/* implicit */long long int) arr_34 [i_1] [i_1] [i_1] [i_1])), (-7995412686000636995LL))))) | (((/* implicit */long long int) (-(((/* implicit */int) max((arr_26 [i_1] [i_1] [i_9] [i_4] [(short)12]), (arr_26 [i_9] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))))))));
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        arr_40 [i_1] [i_2] = ((/* implicit */int) (((~(((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)563))))))));
                        arr_41 [i_1] [i_1] [i_1] [(unsigned short)9] = min((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_3 + 2] [i_1 + 3] [i_1 - 1] [i_1] [(_Bool)1])) / (((/* implicit */int) arr_15 [i_3 + 1] [(unsigned short)19] [(signed char)4] [i_1 + 1]))))), (var_9));
                        var_18 = ((/* implicit */unsigned char) (signed char)0);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                        {
                            arr_46 [i_1] [i_1] [i_1] [i_1] [(signed char)15] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (min(((unsigned short)19988), (((/* implicit */unsigned short) (_Bool)1))))))), ((~(((/* implicit */int) arr_38 [i_1 - 1] [i_1 - 1] [i_3 + 1]))))));
                            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_47 [i_11] [i_1] [i_1] [i_2] [i_1] [(signed char)1] [(signed char)1] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) arr_42 [i_1] [i_1] [i_3 + 1] [i_1] [4LL] [i_11] [i_11]))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                        {
                            arr_50 [i_1] [(signed char)14] [i_1] [i_3 + 1] [(signed char)14] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_1 + 1] [i_1 + 1] [i_1] [15ULL] [i_10] [i_12])) ? (((/* implicit */int) arr_34 [(unsigned short)10] [i_2] [i_1] [(unsigned short)10])) : (((/* implicit */int) (unsigned char)255))))))))));
                            arr_51 [i_1 + 2] [i_1 + 2] [(_Bool)0] [i_3] [i_1] [i_12] [i_12] = ((/* implicit */unsigned char) min((arr_30 [11] [i_2] [17ULL] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_38 [i_1] [i_3 + 1] [i_10]))) ? (((((/* implicit */_Bool) arr_15 [i_12] [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (arr_38 [i_12] [i_10] [i_2]))))))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            arr_54 [i_1] [i_2] [i_3 + 2] [i_1] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1] [i_2] [i_1] [i_10] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (arr_52 [i_10] [i_10] [i_10] [i_10] [i_10] [10LL])))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) + (12599651240295152851ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
                            arr_55 [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)87)) != ((+(((((/* implicit */_Bool) (signed char)-126)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)0))))))));
                        }
                    }
                    arr_56 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_8)) >> (((((/* implicit */int) min(((unsigned char)113), (var_5)))) - (110)))))));
                    /* LoopSeq 2 */
                    for (int i_14 = 4; i_14 < 16; i_14 += 2) 
                    {
                        arr_60 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_14 + 1])) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_26 [i_14] [i_1] [i_2] [(unsigned char)5] [i_1])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) != (((/* implicit */int) (signed char)52)))))));
                        arr_61 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_5 [i_1] [i_1])))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1 + 2])) : (((/* implicit */int) arr_5 [i_14] [i_1]))))));
                    }
                    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_3 - 1] [i_15] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned short)56918))))))) | (max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_53 [(_Bool)0] [i_2] [(_Bool)0] [i_2] [i_2] [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (288230375883276288LL)))))))))));
                        var_21 = ((/* implicit */unsigned short) arr_14 [i_2] [i_2] [i_3] [i_15] [i_3]);
                    }
                }
            } 
        } 
        arr_65 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) ((((/* implicit */int) (unsigned short)56918)) != (((/* implicit */int) (unsigned short)0))))) >> (((((((/* implicit */_Bool) 14741971177138092977ULL)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)127)))) - (101)))))));
    }
}
