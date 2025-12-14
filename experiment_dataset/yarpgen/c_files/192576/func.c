/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192576
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
    var_10 = ((/* implicit */long long int) ((short) var_8));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 ^= ((/* implicit */unsigned char) (unsigned short)65535);
                                arr_13 [i_0] [i_0] [i_0] [(unsigned short)15] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
                                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                                arr_14 [(unsigned short)10] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_12 [i_1 + 4] [i_1] [11U] [i_2 - 2] [i_4] [i_4] [i_4])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 + 3] [i_1] [i_2] [i_3] [i_4] [i_2 - 1] [i_1])))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [4ULL])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1] [i_1]))))) == (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) == (arr_7 [(unsigned short)4] [i_1] [i_1] [i_1 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) : (((((/* implicit */_Bool) (short)-9546)) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9545)))))))));
                arr_15 [(unsigned char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4447901062909526028ULL)) ? (max((((/* implicit */unsigned long long int) min(((unsigned char)243), ((unsigned char)255)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (13998843010800025569ULL))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-1))))) - (((arr_7 [i_0] [i_0] [i_1] [(unsigned char)2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_23 [(unsigned short)9] [i_1] [(unsigned short)9] [i_6] [i_7] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_1] [i_6] [i_7]);
                                var_14 ^= ((/* implicit */unsigned int) ((signed char) (+(var_7))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                {
                    arr_31 [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 1511601427))) ? (max((((/* implicit */unsigned long long int) 2355632154U)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_12 [i_8] [(_Bool)0] [i_9] [(signed char)0] [i_9] [(_Bool)0] [i_10])) ? (arr_19 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))))));
                    arr_32 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 16707551749648951628ULL)) ? (arr_7 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_8] [i_8]))))))));
                }
            } 
        } 
    } 
}
