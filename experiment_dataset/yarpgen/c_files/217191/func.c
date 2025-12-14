/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217191
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_2]);
                                arr_16 [i_0] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) ((short) 11550260168168035701ULL));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4 - 2] = ((/* implicit */short) var_2);
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3])) || (((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_11))))))))));
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_4] [i_0] [i_3] = ((/* implicit */short) max((((unsigned long long int) ((var_0) < (4457453394046956386ULL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2879462076141718820LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_2] [i_2] |= ((/* implicit */int) arr_14 [i_0] [i_2]);
                    arr_21 [i_0] [i_0] [i_2] = min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (min((var_4), (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) var_7)));
                    arr_22 [i_2] [10LL] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) >= (((((/* implicit */_Bool) 3847600599U)) ? (9854639991309086058ULL) : (((/* implicit */unsigned long long int) 8191))))))), (((unsigned short) min((((/* implicit */int) var_10)), (8200))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_27 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) max((4079381126U), (((/* implicit */unsigned int) arr_8 [i_2] [i_6]))));
                                arr_28 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((13989290679662595230ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_5])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5483)) ? (990900640U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((13989290679662595229ULL) < (((/* implicit */unsigned long long int) -2879462076141718830LL))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            {
                                arr_43 [i_7] [8] [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                                arr_44 [i_7] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) (+(((-7157649970797202218LL) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                                arr_45 [i_7] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) (-(min((((/* implicit */int) (short)(-32767 - 1))), (min((arr_36 [i_7] [i_9] [i_10] [i_9]), (arr_37 [i_8] [i_8])))))));
                                arr_46 [i_10] [i_10] [i_10] [i_10] [(unsigned short)12] = ((/* implicit */unsigned long long int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                                arr_47 [i_7] [i_8] [i_11] [(unsigned char)6] [15LL] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) -1066699622)) || (((/* implicit */_Bool) 16769024))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 1839691041U)))))))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) 6896483905541515914ULL)) ? (min((arr_30 [18]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_2)))))));
                            }
                        } 
                    } 
                } 
                arr_48 [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned int) arr_40 [i_7] [i_7] [i_7])), (2455276255U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (((/* implicit */int) var_2)) : (((int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (arr_29 [i_8]))))));
                arr_49 [i_7] [i_7] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)195)) << (((/* implicit */int) arr_34 [19ULL] [i_7] [i_7] [i_7]))))) ? (8823119089510239572LL) : (((/* implicit */long long int) 80288713))))));
                arr_50 [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_5);
            }
        } 
    } 
}
