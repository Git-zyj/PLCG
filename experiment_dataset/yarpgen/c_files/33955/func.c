/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33955
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_2] |= (~(max((var_5), (arr_3 [i_0 - 3] [i_4]))));
                                arr_12 [i_4] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */long long int) 3765811997794435614ULL);
                                arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) min((2147483647LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_20 [i_0] = ((/* implicit */_Bool) var_10);
                            arr_21 [i_0] [i_1 + 2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 11ULL))) ? (2291783807U) : (2291783802U)));
                            arr_22 [i_0 - 2] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)6926)) ? (16168471194077516042ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))))) & (var_4)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_1 + 1] [i_0] [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) var_17)) | (arr_14 [i_0] [i_1] [i_7] [i_0]))), (max((((/* implicit */int) (unsigned char)181)), (arr_3 [i_0 - 2] [i_0]))))), (((/* implicit */int) (unsigned short)21007))));
                            arr_28 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)0)), (822075656)));
                            arr_29 [i_0] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) arr_26 [i_1 - 1] [i_1 + 1]))) : ((-(((/* implicit */int) (unsigned short)0)))));
                            arr_30 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (~(((((/* implicit */_Bool) 3486977420935348459LL)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 3; i_9 < 24; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            arr_41 [i_9] [i_9] [i_12] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_9 - 1] [i_9] [i_9 - 3] [i_9 + 1])) && (((/* implicit */_Bool) var_4)))))));
                            var_20 &= ((/* implicit */unsigned char) (-((+(arr_32 [i_11])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 24; i_14 += 3) 
                    {
                        {
                            arr_48 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) arr_34 [i_9] [i_14 - 1] [i_10]);
                            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_9 - 2]))) / (1024485202593859254ULL)))) ? (min((max((((/* implicit */long long int) var_10)), (var_6))), (arr_40 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(var_5)))), (245802063U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_15 = 0; i_15 < 19; i_15 += 4) 
    {
        for (long long int i_16 = 4; i_16 < 18; i_16 += 3) 
        {
            for (unsigned short i_17 = 4; i_17 < 15; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_18 = 1; i_18 < 15; i_18 += 3) 
                    {
                        for (unsigned long long int i_19 = 3; i_19 < 17; i_19 += 1) 
                        {
                            {
                                arr_60 [i_16] [6ULL] [i_18 + 4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-16))));
                                var_22 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (unsigned short)22633)) ? (2432411431384903769LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_15)), (2291783818U)))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_15] [i_15])) ? (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_11)))), (7750627793834501371LL))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((arr_46 [i_15] [i_15] [i_15] [i_15]) - (2516987309U)))))), ((-(2147483641LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 2; i_20 < 18; i_20 += 4) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
                        {
                            {
                                arr_66 [(short)10] [i_16 + 1] [i_16] [i_16 - 3] [i_16] = ((/* implicit */int) 8388607LL);
                                arr_67 [i_15] [i_15] [i_17 + 2] [i_20] [i_17 + 2] = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */int) var_12))))))));
                                var_24 = max((((/* implicit */long long int) arr_39 [i_15] [i_15] [i_17] [i_20])), (3486977420935348453LL));
                                arr_68 [i_15] [i_15] [i_17 - 1] [i_20] [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 17422258871115692390ULL))));
                                var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)-126)), ((unsigned short)25813)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_22 = 1; i_22 < 16; i_22 += 3) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 17; i_23 += 2) 
                        {
                            {
                                arr_73 [i_15] [i_15] [i_22] [i_22 + 2] = (+(((arr_36 [i_22] [i_22 + 3]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27952))))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((short) var_17)))));
                                arr_74 [i_22] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8524)))))) ? ((~(((/* implicit */int) arr_63 [i_23] [i_22 + 2] [i_17] [i_16 - 1] [(signed char)0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_15] [18LL] [18LL] [18LL] [i_15] [i_15]))))))), (((/* implicit */int) var_8)));
                                var_27 ^= ((signed char) (-(((((/* implicit */_Bool) (short)18041)) ? (var_4) : (var_16)))));
                                arr_75 [i_15] [13ULL] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_62 [i_17 + 1] [i_17 - 3] [i_17 - 1] [i_17 + 2] [i_17] [i_17 + 3])) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_1)))))))) == (((11760096290482390012ULL) * (((/* implicit */unsigned long long int) -1LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 19; i_24 += 4) 
                    {
                        for (signed char i_25 = 2; i_25 < 18; i_25 += 3) 
                        {
                            {
                                arr_82 [i_25 + 1] [i_15] [i_17] [i_16 - 1] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_81 [i_15] [i_16] [i_15] [i_24])), ((unsigned char)97)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned short)64471)))))) : (((unsigned long long int) arr_63 [i_15] [i_16 - 4] [i_17 - 2] [i_24] [i_25]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_17 - 2] [i_16 - 2] [i_15] [i_15] [i_15])) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)97))))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_16 - 3] [i_17])) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) var_19))))) - (min((516244898968943645ULL), (4782656253685590462ULL)))))));
                                arr_83 [i_15] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)-3331), (((/* implicit */short) (_Bool)0)))))))) ? (min((408275699), (((/* implicit */int) ((((/* implicit */_Bool) -5173059845222254716LL)) && (((/* implicit */_Bool) 2291783818U))))))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_15] [i_17 + 2])) : (((/* implicit */int) arr_50 [i_25])))) >> (((5173059845222254737LL) - (5173059845222254712LL)))))));
                                arr_84 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) arr_45 [i_16 - 3] [i_24]);
                                arr_85 [i_15] [i_16 - 3] [i_15] [i_24] [i_25 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (-26LL) : (((/* implicit */long long int) min((((/* implicit */int) arr_61 [i_16 - 1] [i_24])), (var_18))))))) ? (((long long int) arr_80 [18] [13] [i_15] [i_15])) : (min((-3486977420935348460LL), (((/* implicit */long long int) arr_81 [i_15] [i_16 - 3] [i_25 - 1] [i_25 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
