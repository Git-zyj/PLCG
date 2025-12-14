/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26465
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_17 = min((max((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (((var_12) | (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1])))))), (7110458421950210790ULL));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_1 - 1] [i_0] [i_1] [i_1] [i_0] [i_1 + 1]), (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]))))) ? (min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) var_11)))) : (arr_8 [i_2 + 2] [i_2 + 2])));
                                var_19 = ((/* implicit */unsigned long long int) (unsigned char)74);
                                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_0 [i_2 + 1])) * (((/* implicit */int) arr_0 [i_2 + 1]))))));
                            }
                            for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */short) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77))) & (arr_9 [i_0] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_1 + 1] [i_2] [i_2 + 2])))))));
                                var_22 |= ((/* implicit */signed char) arr_0 [i_0]);
                            }
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_8)))) / (((/* implicit */int) ((unsigned char) (unsigned char)74))))) + (-1196299969)));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-6121143966634859501LL) == (((/* implicit */long long int) arr_16 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))))) & (max(((-(arr_8 [i_0] [i_0]))), (arr_5 [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) & (max((max((16248826760732222798ULL), (((/* implicit */unsigned long long int) 65535)))), (((/* implicit */unsigned long long int) (short)-25340)))))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) max(((signed char)70), (((/* implicit */signed char) (_Bool)1))));
                            arr_26 [4] [i_8] [i_8] [i_6] = ((/* implicit */long long int) ((((arr_0 [i_7]) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_0 [i_6])))) / (((/* implicit */int) arr_1 [i_6] [i_6]))));
                            arr_27 [i_8] = ((/* implicit */unsigned long long int) (unsigned short)35417);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_6] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39768)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_8] [i_7]) < (((/* implicit */long long int) 1474783327)))))) : (max((arr_9 [i_8] [i_7]), (((/* implicit */unsigned long long int) arr_11 [i_8] [i_9]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_24 [(unsigned short)10] [11ULL] [11ULL] [i_11]))));
                            var_28 = ((/* implicit */unsigned int) ((long long int) (unsigned char)154));
                            arr_32 [14LL] [3LL] [i_10] [3LL] = ((/* implicit */unsigned short) 16274006736745714543ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
