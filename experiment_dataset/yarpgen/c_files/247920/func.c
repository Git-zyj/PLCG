/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247920
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_1 + 2] [i_2] [i_3 - 1] [i_4]))) : (arr_4 [9U] [i_2] [i_2] [i_4]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)63)))))))))));
                                arr_11 [i_4 + 2] [i_3] [i_2] [(signed char)14] [i_2] [i_0 - 2] [i_0 - 2] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (max((((16938602971098514616ULL) - (((/* implicit */unsigned long long int) 326650152U)))), (((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-8192)), (arr_9 [i_1 - 1] [i_1 + 1] [i_2] [i_1 - 2] [i_1 - 2]))))) : (max((((/* implicit */long long int) var_7)), (-9223372036854775804LL)))))));
                                arr_12 [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(2147483647)))))))) < (((((/* implicit */unsigned int) var_6)) | (var_4)))));
                            }
                            for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
                            {
                                var_12 = ((/* implicit */unsigned int) var_2);
                                arr_16 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_9))))) * (((((/* implicit */long long int) ((/* implicit */int) (short)-8192))) / (arr_14 [i_3] [i_5]))))))));
                                arr_17 [i_0 + 2] [i_1] [i_2] [i_3 + 2] [i_2] = -1973807212;
                            }
                            arr_18 [i_2] = ((((/* implicit */_Bool) max((((0ULL) - (((/* implicit */unsigned long long int) arr_14 [14LL] [i_2])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 1] [i_2])));
                            arr_19 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) max(((unsigned char)245), (((/* implicit */unsigned char) (_Bool)1)))))), (((unsigned long long int) ((signed char) arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_2])))));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */int) var_10);
                var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_10 [i_0 - 2] [i_0] [i_0] [i_0] [11ULL])))))) > (((((/* implicit */_Bool) (unsigned short)24772)) ? (((((/* implicit */_Bool) 2851152533U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8178))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 563379698U)) : (9223372036854775807LL))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (unsigned int i_7 = 4; i_7 < 8; i_7 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)106)), ((unsigned short)26437)))) ? (((((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_6] [i_6 + 1] [i_7] [i_6] [i_7 - 3]), (var_10))))) / (arr_6 [i_7 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) - (var_6)))))))))))));
                var_15 += ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_7] [i_7 - 1])) | (((/* implicit */int) (short)8178))))) != (var_8))))));
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 6; i_8 += 4) 
                {
                    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24742)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2)))));
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (739797560U)))) ? (((((/* implicit */_Bool) (signed char)-21)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6]))))) : (min((((/* implicit */long long int) var_8)), (3385854770073612385LL))))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_9 [i_9] [i_8] [i_6] [i_6] [i_6])), (-3277293411536443635LL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(var_8)))) >= (((arr_6 [7U]) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_7 - 3] [i_8] [i_9 + 1])))))))) : (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_6] [i_6] [i_6] [i_6]))))) == (max((((/* implicit */long long int) arr_15 [i_9 + 1] [i_9 + 1] [i_8] [i_7 - 3] [i_6])), (arr_23 [i_7 - 2]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) 7909824615217087387ULL);
            }
        } 
    } 
    var_20 = ((/* implicit */short) max(((+(-9223372036854775790LL))), (((/* implicit */long long int) var_9))));
}
