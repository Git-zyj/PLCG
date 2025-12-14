/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207556
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (unsigned char)241)), (5056119172207331015ULL))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))) * (7520341081701518590ULL)))))) ? (((long long int) (-(((/* implicit */int) (unsigned short)3093))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0] [i_1])) ^ (83887616))) >= (((/* implicit */int) max(((unsigned char)32), (((/* implicit */unsigned char) arr_2 [i_0]))))))))));
                var_13 = ((/* implicit */signed char) min(((((-(arr_1 [(short)8]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) (short)26102))))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) (~(-530104054)))) <= (-1839678204408624623LL))))));
                var_14 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (max((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (863142934U))) : (((/* implicit */unsigned int) ((arr_0 [i_1] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) | (var_5))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max(((+(var_2))), (((/* implicit */unsigned int) 68803492))));
    var_16 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 3431824362U)) ? (((/* implicit */int) (short)9958)) : (var_10))) << (((((/* implicit */int) (short)-23404)) + (23413))))), ((~(max((arr_7 [i_2 + 2] [i_2]), (((/* implicit */int) (unsigned short)47545))))))));
                arr_13 [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9))))), (var_6)))) ? ((+(((var_5) & (var_5))))) : (((/* implicit */unsigned int) var_8))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_23 [(short)16] [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_6 + 3]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) & (var_2))) : (((/* implicit */unsigned int) var_7)))));
                                arr_24 [i_6] [i_3] [i_4] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)-107))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3187649012U))))) : (((/* implicit */int) (short)4094))))) ? (var_9) : (((var_5) ^ (var_5)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 2; i_7 < 21; i_7 += 3) 
                {
                    for (int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned int) (_Bool)0);
                                arr_31 [i_3] [i_7] [(signed char)14] = ((/* implicit */_Bool) arr_22 [i_2] [(unsigned char)3] [i_2] [i_2 + 2] [i_9]);
                                var_19 = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_8] [i_9]));
                                var_20 = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_20 [i_7 + 2] [i_7 - 2] [i_7] [(unsigned char)18] [(short)7])) : (var_6))) >= (((((/* implicit */int) arr_10 [i_3])) | (((2147483647) - (((/* implicit */int) (unsigned char)229)))))));
                            }
                            /* LoopSeq 2 */
                            for (long long int i_10 = 2; i_10 < 21; i_10 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */_Bool) var_9);
                                arr_35 [(short)15] [i_3] [16U] [i_3] [i_2] = ((/* implicit */unsigned int) ((int) ((unsigned char) ((unsigned short) var_7))));
                                var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_26 [i_3] [i_2 + 1] [i_8 + 1] [i_10 - 2])) ? (((/* implicit */int) (unsigned short)3085)) : (((/* implicit */int) arr_10 [i_3])))));
                                var_23 = ((/* implicit */short) (!(((_Bool) ((((arr_7 [i_8] [i_3]) + (2147483647))) >> (((arr_14 [i_7 - 1]) - (3564448415U))))))));
                                arr_36 [15U] [i_3] [i_3] [i_3] [i_3] [i_3] [(signed char)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_12 [i_3])))) ? (max((arr_12 [i_3]), (((/* implicit */unsigned long long int) var_2)))) : (((((/* implicit */unsigned long long int) var_4)) * (var_11)))));
                            }
                            for (long long int i_11 = 2; i_11 < 21; i_11 += 1) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (max((var_8), (((var_4) % (((/* implicit */int) arr_19 [(unsigned short)22] [i_3] [22LL] [(signed char)21] [i_11] [i_11]))))))));
                                var_25 = ((/* implicit */signed char) ((((int) 6314159823282975817LL)) != (((/* implicit */int) arr_30 [15] [i_3] [i_7 - 1] [i_3] [i_2]))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_10 [i_3]))))) >> (((((/* implicit */long long int) arr_27 [i_3] [i_2] [i_7] [i_8] [i_7 - 1] [i_2])) / (var_3)))))) ? (((/* implicit */int) arr_6 [i_11])) : (max((-659708692), (((/* implicit */int) (signed char)118))))));
                                var_27 = ((/* implicit */unsigned int) (+(var_6)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
