/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36676
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_0] [i_1]))));
                var_13 = ((/* implicit */unsigned char) min((714279907U), (3580687388U)));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_14 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)73))))));
                    arr_7 [i_2] [i_2] [10LL] [i_1] = ((/* implicit */long long int) arr_5 [i_1] [i_1] [i_2] [i_1]);
                    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_3 [i_0])) * (arr_0 [i_1] [i_0]))), (((/* implicit */unsigned long long int) (+(-8401686434745439599LL))))));
                }
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    arr_10 [(short)14] [i_1] [(short)14] = ((/* implicit */signed char) max((2724412311U), (((/* implicit */unsigned int) (short)-25220))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        arr_13 [13ULL] [13ULL] [i_1] [13ULL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((((/* implicit */_Bool) 2724412291U)) ? (((/* implicit */int) (short)6424)) : (1698852490))), (((/* implicit */int) (unsigned short)11725))))) > (arr_3 [i_0])));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_16 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-(var_9)));
                            arr_17 [i_5] [i_5] [i_5] [16LL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned int) ((signed char) -1LL)));
                            var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)12288)), (12744811663911244044ULL)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_20 [i_1] [i_3] [10LL] = ((/* implicit */unsigned short) ((unsigned char) ((long long int) var_10)));
                            arr_21 [i_0] [0LL] [i_3] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-53))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)107)))) : (min((1402474927U), (714279907U)))));
                            arr_22 [i_0] [i_1] [i_3] [i_4 + 1] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [8U] [i_1] [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_6]))) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1])))) ? (max((714279908U), (((/* implicit */unsigned int) (signed char)-53)))) : ((+(((((/* implicit */_Bool) var_12)) ? (3580687384U) : (3580687393U))))));
                            var_17 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (3580687393U)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            arr_25 [i_1] [i_1] [i_3] [i_1] [(unsigned char)6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) (signed char)13))))), (max((arr_9 [9LL] [i_4] [i_3] [i_0]), (min((((/* implicit */unsigned long long int) (unsigned short)62107)), (var_9)))))));
                            var_18 = ((/* implicit */unsigned int) 13196840628732402497ULL);
                        }
                        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_1] [i_3] [14ULL] [14ULL] = ((/* implicit */unsigned long long int) max(((unsigned char)243), ((unsigned char)22)));
                            var_19 *= ((/* implicit */unsigned int) 9223372036854775807LL);
                        }
                        arr_30 [i_0] [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)5))))), (min((arr_14 [i_4] [i_4] [i_4] [i_4 - 2] [i_4] [i_4]), (((/* implicit */unsigned int) -347337873))))));
                        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_3] [i_4] [i_1] [i_3]))))) ? (max((((/* implicit */long long int) var_12)), (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16647894971368831087ULL)) ? (1155873086U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))))))));
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) 7300873095905857481ULL))));
                    var_22 = ((/* implicit */short) ((signed char) 130023424ULL));
                    arr_35 [i_9] [i_0] = ((/* implicit */unsigned short) min((3336425032391979332LL), (3991746355529044280LL)));
                    arr_36 [i_1] [i_9] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_31 [i_9] [i_1] [i_0]))))))));
                    var_23 = ((/* implicit */short) min((var_23), (((short) min((((-2310078765062165877LL) | (251658240LL))), ((~(var_2))))))));
                }
                var_24 = ((/* implicit */long long int) min((var_24), (min((max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_1) : (((/* implicit */long long int) 2724412291U)))), (max((-1569089489784483941LL), (-895642571605981580LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((signed char) (unsigned char)13))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -251658259LL))))))))))));
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    var_25 ^= max((min((((/* implicit */unsigned short) ((unsigned char) (short)22023))), (max(((unsigned short)7833), (((/* implicit */unsigned short) (short)-7438)))))), (((/* implicit */unsigned short) ((signed char) 18446744073709551615ULL))));
                    var_26 = var_7;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) -895642571605981580LL))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57702))) - (2287828610704211968ULL))))));
                    }
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_12] [i_12] [10LL] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_26 [i_12] [i_12] [i_1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 2; i_13 < 17; i_13 += 2) 
                    {
                        for (signed char i_14 = 2; i_14 < 15; i_14 += 3) 
                        {
                            {
                                arr_50 [i_0] [i_0] [i_0] [i_0] [i_13 - 2] [i_0] = arr_38 [i_0];
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((0LL) % (var_1))))));
                            }
                        } 
                    } 
                    arr_51 [9ULL] [9ULL] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_45 [i_0] [i_0] [i_0] [(unsigned short)5] [(unsigned short)11])) * (var_10)));
                    arr_52 [1ULL] [i_1] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4229883731917582564LL)))) / (((var_0) / (((/* implicit */long long int) 6U)))));
                    arr_53 [i_12] [i_12] [i_0] [i_0] = ((/* implicit */long long int) ((int) (+(11259114067177010395ULL))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        var_31 = ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned char)220)), (var_0))), (min((arr_55 [i_15] [2ULL]), (((/* implicit */long long int) (unsigned char)60))))))) ? (((((/* implicit */unsigned long long int) var_0)) + (var_9))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 0U)), (arr_55 [i_15] [i_15])))));
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((long long int) max((18174666216280593790ULL), (((/* implicit */unsigned long long int) -1601230503))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((4229883731917582555LL), (((/* implicit */long long int) arr_57 [i_15]))))) > (((((/* implicit */_Bool) (unsigned char)195)) ? (8738543795370703930ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))))))));
        arr_58 [i_15] = ((/* implicit */unsigned char) ((unsigned int) -1601230503));
    }
    for (signed char i_16 = 2; i_16 < 15; i_16 += 2) 
    {
        var_33 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 3570790734905927285LL)) + (9708200278338847685ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761)))));
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */long long int) 2564816734U)) : (0LL)))) ? (((/* implicit */long long int) ((unsigned int) ((-5105915023297457496LL) & (((/* implicit */long long int) ((/* implicit */int) (short)8519))))))) : (((-1086504184921673038LL) | (-1086504184921673038LL))))))));
        arr_61 [i_16 + 2] = var_3;
        /* LoopNest 2 */
        for (long long int i_17 = 2; i_17 < 16; i_17 += 3) 
        {
            for (unsigned int i_18 = 0; i_18 < 17; i_18 += 2) 
            {
                {
                    var_35 = (~(((((((/* implicit */long long int) 3520548420U)) < (2495801269398837762LL))) ? (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_9))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_17]))))));
                    arr_69 [i_17] = ((/* implicit */long long int) ((16158915463005339653ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) (unsigned char)209))))))));
                }
            } 
        } 
    }
}
