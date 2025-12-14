/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28943
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) max((((arr_0 [12U] [i_0]) + (var_10))), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1])) < (((/* implicit */int) arr_2 [i_0]))));
            var_16 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)88)))) + ((-(((/* implicit */int) var_4))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) ((_Bool) arr_3 [i_0])))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_18 = ((/* implicit */long long int) (signed char)-112);
                arr_6 [i_0] [6ULL] [(short)18] = ((/* implicit */unsigned long long int) (signed char)-26);
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_19 = var_9;
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [(unsigned char)3] [i_1]))));
                            arr_12 [i_0] [i_3] [(unsigned char)0] [(signed char)10] [i_0] [(signed char)3] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [19LL] [i_4])) ? (((/* implicit */int) arr_1 [i_1] [i_3])) : (((/* implicit */int) var_7)))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */short) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
            }
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                var_21 = ((_Bool) ((((/* implicit */int) (short)26114)) + (((/* implicit */int) (signed char)-112))));
                arr_17 [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) 127LL);
                var_22 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [4ULL] [i_0]))) ? ((~(((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) ((short) arr_4 [i_1] [(unsigned short)19] [(unsigned short)19])))));
                var_24 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -1511352753289191396LL)))) ? ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [(signed char)1])))) : ((-(((/* implicit */int) (signed char)-1))))));
            }
        }
        for (short i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                var_25 = ((/* implicit */_Bool) (short)-26115);
                var_26 = ((/* implicit */short) ((_Bool) max((((/* implicit */signed char) arr_11 [i_7] [i_6] [i_6] [i_0] [i_0] [i_0] [i_7])), (var_4))));
                var_27 *= ((/* implicit */unsigned char) var_2);
                arr_24 [i_0] [(short)4] [(signed char)20] [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
            }
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                /* LoopSeq 4 */
                for (short i_9 = 2; i_9 < 21; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) arr_25 [(signed char)2]);
                        arr_31 [(_Bool)1] [17] [(unsigned char)22] [(_Bool)1] [(unsigned char)22] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-6))));
                        var_29 = ((/* implicit */unsigned int) -1);
                    }
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2733405035169373399ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_2 [i_0])))))) : (((unsigned int) var_4)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 296453836)) ? (((/* implicit */int) ((unsigned char) arr_23 [(unsigned short)22]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)7316)) : (((/* implicit */int) var_12)))))))));
                    var_31 *= ((/* implicit */int) ((((long long int) (-(var_10)))) >= (((/* implicit */long long int) ((((_Bool) (unsigned short)65535)) ? (((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) arr_30 [(unsigned char)10] [i_6] [(short)11]))))) : (((/* implicit */int) var_12)))))));
                    var_32 = ((/* implicit */unsigned short) ((((16327360870081802592ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)12)) == (((/* implicit */int) arr_30 [i_0] [i_6] [(short)17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9 - 1] [i_6] [i_0]))) : ((~(3752044573U))))))));
                    arr_32 [i_0] [i_0] [i_0] [3U] [i_0] = ((/* implicit */signed char) -1);
                }
                /* vectorizable */
                for (short i_11 = 2; i_11 < 21; i_11 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [(signed char)18] [i_8]))) == (var_10))))) - (arr_29 [12] [12] [22U] [i_8] [i_6])));
                    var_34 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_11] [i_8] [i_6] [i_0])) > (((/* implicit */int) var_13))))) % (((/* implicit */int) arr_14 [i_11] [i_11 - 1] [i_11 + 2] [i_11 + 2]))));
                }
                for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    arr_39 [i_0] = var_7;
                    arr_40 [i_0] [i_0] [i_0] = ((/* implicit */short) var_1);
                    var_35 = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) -296453845)), (978674961164594783ULL))), (((/* implicit */unsigned long long int) 2842496387775440092LL)))), (5225609627327460107ULL)));
                }
                for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    arr_45 [i_0] = ((_Bool) (_Bool)0);
                    var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)221))));
                    var_37 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_44 [3] [i_6] [20LL] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_6] [i_13])))), (((/* implicit */int) (unsigned short)65522)))) & (((/* implicit */int) var_9))));
                }
                var_38 = ((/* implicit */signed char) arr_21 [i_0] [i_6] [i_8]);
            }
            var_39 = arr_37 [i_0] [i_0] [i_6] [i_6] [(unsigned char)18];
            arr_46 [i_6] [i_6] = min((((unsigned char) ((arr_29 [i_0] [i_0] [i_0] [22U] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(_Bool)1] [i_6] [(short)2] [(short)0] [i_6])))))), (((/* implicit */unsigned char) var_8)));
            arr_47 [i_0] = ((/* implicit */unsigned int) (-(max((((((/* implicit */int) (signed char)-123)) | (((/* implicit */int) arr_15 [(unsigned short)22])))), (((((/* implicit */int) (unsigned char)251)) | (((/* implicit */int) var_11))))))));
            /* LoopSeq 1 */
            for (short i_14 = 1; i_14 < 21; i_14 += 2) 
            {
                var_40 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) % (min((min((arr_35 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_34 [(short)21] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9])))), (((/* implicit */unsigned long long int) (unsigned char)96))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 1; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) var_6))));
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [(short)19])) - (((/* implicit */int) arr_16 [i_15 + 1] [i_0]))))) * (((unsigned int) (!(((/* implicit */_Bool) arr_41 [i_0] [(unsigned short)19] [i_0]))))))))));
                        }
                    } 
                } 
            }
        }
        for (short i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            arr_58 [i_17] [22LL] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_2 [i_0]))))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((long long int) (unsigned char)47)) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [6U] [i_17] [i_17] [i_0])))))));
            arr_59 [i_17] [17ULL] = ((/* implicit */short) arr_4 [i_0] [(signed char)9] [i_17]);
            var_43 -= ((/* implicit */unsigned char) ((signed char) arr_49 [(short)18] [i_17] [i_17] [i_0]));
        }
    }
    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) min((((/* implicit */long long int) var_12)), (var_10))))));
}
