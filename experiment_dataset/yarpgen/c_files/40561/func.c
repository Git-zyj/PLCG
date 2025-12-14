/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40561
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) (unsigned short)5777);
                var_14 *= ((/* implicit */short) var_6);
                arr_4 [i_0 + 2] [i_1 + 3] = ((/* implicit */unsigned short) ((long long int) arr_3 [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_9 [i_3] [(short)4] [i_2] [(_Bool)1] |= min(((short)511), (((/* implicit */short) max((arr_8 [i_2 + 1]), (arr_8 [i_2])))));
                            arr_10 [i_0] [i_1] [i_1] [(signed char)17] [i_2] [i_3 + 1] = ((/* implicit */signed char) ((max(((((_Bool)0) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned short)59759)))), (((/* implicit */int) arr_8 [i_0 + 1])))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)22])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_3] [i_1 + 3]))))) ? (((((/* implicit */int) (unsigned short)52451)) >> (((((/* implicit */int) (short)13950)) - (13920))))) : (((/* implicit */int) arr_2 [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_11 [i_4 - 1])))) ? (min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4] [i_5] [(unsigned short)2])) * (((/* implicit */int) (signed char)3))))), (((8211968813198247278LL) - (3226326927545007763LL))))) : (((((/* implicit */long long int) ((int) arr_12 [i_5]))) / (min((((/* implicit */long long int) var_3)), (-3226326927545007788LL)))))));
            arr_18 [i_4] [i_5] = ((/* implicit */short) arr_8 [i_4]);
            var_15 ^= ((/* implicit */short) 63U);
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 4; i_6 < 21; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_26 [i_4 + 1] [i_6] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)7))));
                    var_16 = ((/* implicit */short) (-(((int) arr_6 [i_6 - 4] [i_6 - 2] [i_6 - 3]))));
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (((((_Bool)1) ? (arr_7 [i_9] [i_9 - 1] [i_9] [i_8] [i_6 - 3] [i_4]) : (arr_7 [i_9] [i_9] [i_9] [i_6 - 2] [i_6 - 2] [i_6]))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59734))))))));
                                arr_31 [i_4] [i_7] [i_7] [i_6 - 3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_3), (((/* implicit */signed char) arr_13 [i_4 + 4] [i_4 + 3])))))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_7 [i_4 + 3] [i_4] [i_4] [i_4] [i_4] [i_4]))) & (((/* implicit */unsigned int) arr_0 [i_4 + 3] [i_6 - 2])))) : (((/* implicit */unsigned int) ((int) arr_5 [i_4 + 3] [i_4 + 3] [(signed char)2])))));
                                arr_32 [i_9 + 3] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((arr_0 [i_6] [i_6]) | (((/* implicit */int) arr_6 [i_4 + 1] [i_6] [i_7]))))) >= (4897575342398766864ULL))) ? (((((/* implicit */_Bool) arr_6 [i_7 + 1] [i_8 - 1] [i_9 + 2])) ? (arr_20 [i_9 + 2] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26)))));
                                arr_33 [i_4] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_16 [i_9 + 2])))), (((/* implicit */int) ((unsigned short) arr_16 [i_4 + 1])))));
                                arr_34 [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_4])) | (((/* implicit */int) (unsigned char)249))))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14484))) : (100828511U)))))) & (((((/* implicit */_Bool) arr_7 [i_4 + 3] [i_6] [i_6] [i_7] [i_8 + 1] [i_9 + 3])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (3998483107811019190LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)59758))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
