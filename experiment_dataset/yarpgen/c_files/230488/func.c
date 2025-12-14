/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230488
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) max((var_20), ((+((~(((/* implicit */int) arr_0 [18] [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((unsigned long long int) 12226258200109149423ULL)) ^ (((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_1] [i_1])))));
            var_22 = min((var_6), (((/* implicit */unsigned long long int) ((signed char) arr_2 [i_1 + 3] [i_0] [i_1 + 1]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13580985517169136372ULL)))))) : (((((/* implicit */unsigned long long int) 899731973U)) ^ (var_8)))));
                arr_9 [i_0] = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)8))))));
                var_24 = ((/* implicit */signed char) (+(arr_5 [i_0] [i_2])));
                arr_10 [i_0] [i_0] [(unsigned char)17] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) var_3))) <= (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (9478451539867907519ULL)))));
                arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)182)) | (((/* implicit */int) ((4447777661943853945ULL) != (((/* implicit */unsigned long long int) 2887592955U)))))));
            }
            for (int i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                arr_15 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((3836419603U) << (((422931197U) - (422931177U)))));
                arr_16 [(signed char)0] [i_0] [1] = ((/* implicit */int) ((var_15) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16))))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 450303688)) ? (3710059922U) : (2887592971U)));
            }
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_26 += ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-92))));
                var_27 = (~(((/* implicit */int) arr_17 [i_5] [i_2] [i_5] [i_0])));
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        var_28 = ((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_5] [i_6] [2ULL])) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_5] [(unsigned short)8])) : (-1457510200))) / (((/* implicit */int) ((arr_5 [i_0] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_2])))))));
                        arr_23 [i_7] [i_0] [i_5] [i_2] [i_0] [5U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0] [i_5] [i_6] [i_0]))));
                        var_29 = ((/* implicit */int) ((arr_3 [i_0] [i_7 - 2] [i_5]) > (((/* implicit */unsigned long long int) arr_2 [i_7 + 2] [i_0] [i_7 - 2]))));
                        var_30 = ((/* implicit */signed char) ((16095107357118743391ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70)))));
                    }
                    for (signed char i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        var_31 *= ((var_4) | (arr_5 [i_6] [i_8 + 2]));
                        arr_26 [i_0] [i_2] [i_5] [i_0] [i_6] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-123))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_8 + 2] [i_5] [i_0])) ? (((/* implicit */unsigned int) arr_19 [i_8 + 2] [i_0])) : (2461590380U)));
                        var_33 = ((((/* implicit */_Bool) arr_22 [i_8] [11ULL] [i_8 + 1] [i_8] [i_8 + 2])) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_6] [i_2]))))));
                        var_34 = ((/* implicit */unsigned int) var_14);
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 1) 
                    {
                        arr_29 [i_0] [i_5] [i_6] |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 13994174363182571163ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_9 + 3]))) : (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) var_2))))));
                        var_35 = ((unsigned int) arr_4 [i_2] [i_0]);
                        var_36 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_9] [i_2])) != (((/* implicit */int) arr_18 [i_2]))));
                        var_37 = ((/* implicit */int) ((arr_24 [i_0] [i_2]) < (((/* implicit */unsigned int) arr_19 [i_0] [i_0]))));
                        arr_30 [i_0] [i_0] [i_9 - 4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1836357680120943589ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_2] [i_5] [i_6] [i_0] [i_9]))))))) : (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0])))))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        var_38 = ((int) arr_20 [i_0] [i_0]);
                        var_39 |= ((/* implicit */int) arr_22 [i_0] [i_2] [i_5] [i_6] [(signed char)16]);
                        arr_35 [i_2] [i_6] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_0]))) >= (arr_34 [i_0] [i_10 + 1] [i_5] [i_0] [i_10] [i_0])));
                    }
                    var_40 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_0] [i_5])) < (arr_19 [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (signed char i_11 = 2; i_11 < 20; i_11 += 2) 
                    {
                        var_41 |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)56)) | (((/* implicit */int) arr_12 [i_6] [i_2] [i_5] [i_6]))));
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (((~(var_10))) >> (((((12426910970133809378ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (12426910970133805649ULL))))))));
                    }
                    for (signed char i_12 = 1; i_12 < 19; i_12 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_0] [i_5] [(short)8])) > (422931226U))))) / (4447777661943853945ULL)))));
                        var_44 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_6] [i_2] [i_5] [i_0])) << (((arr_34 [i_0] [i_12 + 1] [i_12 - 1] [i_12] [i_12] [i_0]) - (3230138527U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_6] [i_2] [i_5] [i_0])) << (((((arr_34 [i_0] [i_12 + 1] [i_12 - 1] [i_12] [i_12] [i_0]) - (3230138527U))) - (523266221U))))));
                    }
                    var_45 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_6 [i_6]) : (((/* implicit */unsigned long long int) ((int) 12803964441952122212ULL)))));
                }
                for (signed char i_13 = 2; i_13 < 20; i_13 += 1) 
                {
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_5])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (3456968866U))) : (((((/* implicit */_Bool) -1146985315)) ? (arr_22 [i_0] [i_2] [i_5] [i_0] [18ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0])))))));
                    var_47 = ((/* implicit */unsigned int) ((arr_6 [i_13 + 1]) <= (4045314031079388727ULL)));
                    var_48 |= (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_11)) : (var_8))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    var_49 = ((/* implicit */signed char) arr_36 [i_0] [i_0] [i_0] [i_2] [i_5] [i_14]);
                    arr_44 [i_0] [i_2] [i_5] [i_0] = var_17;
                    var_50 = ((/* implicit */unsigned int) (~(((int) var_14))));
                    var_51 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_40 [i_0] [i_2] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_5])))));
                }
                arr_45 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))));
            }
            arr_46 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) * (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (unsigned char i_15 = 2; i_15 < 17; i_15 += 2) 
        {
            arr_51 [i_0] [i_0] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (15126699449388853058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5665)))))))) && (((/* implicit */_Bool) min((((arr_43 [i_0] [i_0] [i_0] [i_15] [i_15] [i_15]) ? (arr_42 [i_0] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32022))))), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-118))))))));
            /* LoopNest 3 */
            for (unsigned short i_16 = 4; i_16 < 20; i_16 += 3) 
            {
                for (unsigned int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 19; i_18 += 1) 
                    {
                        {
                            var_52 = var_8;
                            arr_61 [i_0] [(short)12] [i_16] [i_0] [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) 2351636716590808216ULL))) <= (((/* implicit */int) ((signed char) arr_12 [i_18] [i_15 + 2] [i_16] [i_15])))));
                            arr_62 [i_18] [i_17] [i_0] [i_0] [i_15] [i_0] = ((/* implicit */short) (((~(1521674962679888885ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [i_15 + 3] [i_16 - 4])) ^ (((/* implicit */int) arr_38 [i_0] [i_15] [i_15] [(unsigned short)12] [i_16] [i_17] [i_18 - 2])))))));
                        }
                    } 
                } 
            } 
            var_53 = ((/* implicit */unsigned int) max((((unsigned long long int) (+(((/* implicit */int) var_5))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0]))) / (12426910970133809398ULL)))))));
        }
    }
    var_54 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((3992067520092111837ULL) == (((/* implicit */unsigned long long int) 422931193U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_14)))) : ((-(var_13)))))) != (((unsigned long long int) var_17))));
}
