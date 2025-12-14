/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194558
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_16 = ((((((/* implicit */int) arr_3 [i_3 - 2])) != (((/* implicit */int) arr_3 [i_3 + 2])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_3 + 1])) : (((/* implicit */int) arr_3 [i_3 + 1])))) : (((((/* implicit */_Bool) 17429290023146208895ULL)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (signed char)120)))));
                                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)72))))), (var_15)));
                                arr_13 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) max((((/* implicit */short) ((arr_8 [i_0] [i_0] [i_4] [i_3]) && (((/* implicit */_Bool) ((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))), (((short) var_3))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_18 = ((/* implicit */int) 7222513706035870244ULL);
                    var_19 += ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned short)5] [i_5])));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) 2829029655U)))))));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = arr_12 [i_0] [(unsigned char)1];
                }
                for (unsigned short i_6 = 3; i_6 < 11; i_6 += 1) 
                {
                    arr_19 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) (short)6060);
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)62)))) ? (((var_11) - (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)120)), (var_12)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6069))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) & (4294967295U)))))) > (max((((var_11) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))))), (((/* implicit */long long int) (+(var_5))))))));
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) var_1);
                                arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) arr_0 [i_1]);
                            }
                        } 
                    } 
                    arr_28 [i_0] [(unsigned char)6] [i_0] [i_0] = ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)72)) : (303609279))))) << (min((10044845563090633798ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_0])) << (((((/* implicit */int) (short)6060)) - (6054))))))))));
                }
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 11; i_12 += 1) 
                        {
                            {
                                arr_35 [i_0] [i_11] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned int) 8418166514070680977LL))) ? (((/* implicit */unsigned int) arr_33 [i_12] [i_12] [i_12 - 1] [i_12 - 1])) : (max((var_10), (var_10))))), (min((((((/* implicit */_Bool) arr_24 [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1024))) : (3306719811U))), (((2703661648U) << (((((/* implicit */int) (signed char)-117)) + (121)))))))));
                                arr_36 [i_11] [i_11] [i_11] [i_11] [9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_20 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12]))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned short)15041)))) - (((/* implicit */int) (unsigned short)65535))))) : (min((((/* implicit */unsigned long long int) var_5)), (arr_34 [i_12 - 1] [i_12 + 1] [i_11] [i_12 - 1] [i_11] [i_12 - 1] [i_12 - 1])))));
                                var_24 = ((int) ((((/* implicit */_Bool) min((arr_10 [i_0] [(short)10] [i_11] [(unsigned short)7] [i_12]), (((/* implicit */unsigned char) (signed char)120))))) ? (((/* implicit */long long int) var_13)) : (((long long int) 988247484U))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((int) ((var_10) << (((var_15) - (16760159304132700323ULL)))))))));
                            }
                        } 
                    } 
                    arr_37 [i_0] [i_0] [i_1] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_0] [i_0] [0ULL] [i_0])) | (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) arr_29 [i_10] [i_10] [i_10])) : (((/* implicit */int) (short)-15221))))))));
                }
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)0)) << (((17195996370249115737ULL) - (17195996370249115706ULL)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        for (unsigned short i_14 = 1; i_14 < 9; i_14 += 3) 
        {
            {
                arr_44 [i_14] = (unsigned short)50494;
                var_27 -= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (min((((/* implicit */unsigned int) arr_15 [i_13] [i_13] [i_13] [i_13])), (2898302366U))))) ? (527765581332480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_15 = 0; i_15 < 13; i_15 += 4) 
    {
        for (unsigned int i_16 = 4; i_16 < 12; i_16 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? ((+(((/* implicit */int) (unsigned short)50494)))) : (((((/* implicit */_Bool) arr_45 [i_15])) ? (var_5) : (((/* implicit */int) (_Bool)1))))))) | ((+(min((1017454050563342721ULL), (((/* implicit */unsigned long long int) var_14))))))));
                var_29 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_46 [i_15] [i_16]))))), (((((/* implicit */_Bool) 7048579182966311707LL)) ? (-5657928181055903094LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))))))) / (arr_50 [i_15] [i_15] [i_16])));
                arr_51 [i_15] [i_16 - 1] = ((/* implicit */long long int) ((unsigned short) 7226036198718508073LL));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) (unsigned char)191);
    var_31 = ((/* implicit */unsigned char) var_10);
}
