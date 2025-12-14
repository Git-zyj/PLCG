/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241540
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 4; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 7985775084953982038LL))));
                                arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2712601)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) arr_6 [i_0] [i_0] [(short)3])))), (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0] [i_1] [i_2] [i_3] [i_0 + 1])) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned short)38815))))))) ? (((unsigned long long int) 3602198151U)) : (max((((/* implicit */unsigned long long int) (unsigned char)53)), (3071248071292949478ULL)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 4; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_27 [i_5] [4] [4] [i_5] [i_7] = ((/* implicit */int) ((max(((_Bool)0), ((_Bool)1))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_7])) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_6] [i_7])) : (3602198151U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [10ULL] [10ULL]))))) || (((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) var_13))))))))));
                                var_22 &= ((/* implicit */unsigned char) ((long long int) ((1395236726U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) ? (arr_9 [i_0] [i_1] [i_5] [i_5] [(_Bool)1] [9]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))) : (((int) arr_16 [i_0] [i_0] [i_0 + 2] [i_0 + 2])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned short) (~(arr_12 [i_5] [i_5] [i_5] [i_5 - 4] [i_5])))))));
                }
                for (unsigned short i_8 = 4; i_8 < 12; i_8 += 3) /* same iter space */
                {
                    var_25 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
                    var_26 -= ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) arr_1 [i_0 + 1] [i_8 - 1])));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_27 &= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((_Bool) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */int) (short)21820)) : (((/* implicit */int) (signed char)-91))))));
                                var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) && (((/* implicit */_Bool) ((signed char) arr_14 [i_9] [i_9] [12U] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 3; i_11 < 13; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            {
                                var_29 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-91)) && (arr_18 [i_0 + 1] [i_8 + 3] [i_0 + 1] [i_8 + 3]))) ? (((/* implicit */int) (!((_Bool)1)))) : ((((~(((/* implicit */int) var_5)))) | (((/* implicit */int) (_Bool)1))))));
                                arr_43 [i_0] [i_1] [i_8] [i_1] [i_12] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_0 + 1] [i_8 - 2] [i_11 - 2])) ? (((((/* implicit */_Bool) -96048190)) ? (((/* implicit */unsigned long long int) -182861190)) : (17989513545272334456ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) arr_42 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] [i_12]))));
                            }
                        } 
                    } 
                }
                for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -96048190)) : (4424854230297900439LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (arr_36 [i_0] [i_0])));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 2])) ? (arr_13 [i_0 + 2]) : (((/* implicit */int) var_9))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)141)) ? (arr_37 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(short)2] [(short)2] [(short)2] [i_13] [(signed char)5])) && ((_Bool)1))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        var_33 = ((((/* implicit */_Bool) ((unsigned char) var_19))) ? (((/* implicit */int) var_18)) : (-96048187));
                        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_51 [i_0 + 1] [i_0 + 1] [i_0 - 1] [10ULL]))));
                    }
                    var_35 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38027)) ? (17989513545272334456ULL) : (457230528437217159ULL)))) ? (((/* implicit */int) (unsigned short)19641)) : (((/* implicit */int) ((-96048197) > (((/* implicit */int) (unsigned char)179))))))), (((((((/* implicit */_Bool) -4228343765856924960LL)) || (((/* implicit */_Bool) arr_34 [i_0 + 1] [i_0 + 2] [i_0 + 1] [(signed char)10] [13U] [i_0])))) ? (((/* implicit */int) ((-3819148738655371251LL) > (((/* implicit */long long int) -24517715))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14400)) && (((/* implicit */_Bool) arr_48 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                }
                var_36 ^= ((/* implicit */int) (unsigned char)76);
                /* LoopNest 3 */
                for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    for (unsigned char i_17 = 1; i_17 < 13; i_17 += 3) 
                    {
                        for (int i_18 = 2; i_18 < 13; i_18 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */int) (~(((unsigned long long int) arr_18 [i_18] [(short)0] [i_18 - 1] [i_18 + 2]))));
                                var_38 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_38 [i_17 + 2] [i_17 + 1] [i_17] [i_17 + 1])) ? (arr_9 [i_17 + 2] [i_17] [(signed char)10] [i_17 + 2] [i_17] [i_17 + 1]) : (((/* implicit */long long int) 96048186)))));
                                arr_61 [8LL] [i_17] [i_16] [i_16] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_0 - 1])))))));
                                var_39 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (unsigned char)2))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned short) ((unsigned char) var_10));
}
