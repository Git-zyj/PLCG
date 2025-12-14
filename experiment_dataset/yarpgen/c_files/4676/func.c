/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4676
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */int) min(((unsigned char)255), ((unsigned char)255)));
                            var_11 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) * (min((((/* implicit */int) (_Bool)1)), (198779842)))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15516170608215945618ULL)) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (3145728LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59434))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (-3776031141483819500LL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max(((!(((/* implicit */_Bool) ((int) (short)127))))), ((!(var_7))))))));
                            arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_1 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(arr_1 [i_1]))) || (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 17175133206196391951ULL))))), (((((/* implicit */_Bool) arr_14 [i_5] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    arr_26 [i_6] [i_7] [i_6] [i_6] = (~((-(((/* implicit */int) arr_20 [i_7])))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)202)) ? (15516170608215945605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_27 [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((1048339575) / (((/* implicit */int) (signed char)-53))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)27605)) || (((/* implicit */_Bool) (unsigned char)150))))) : ((+(((/* implicit */int) (short)19)))))) * (((((((/* implicit */int) arr_24 [i_6] [i_6] [i_8] [i_8])) * (((/* implicit */int) arr_24 [1LL] [i_6] [i_7] [i_8])))) * (((/* implicit */int) (!(((/* implicit */_Bool) 4278190080LL)))))))));
                    var_16 &= arr_25 [(_Bool)1] [(_Bool)1] [(unsigned char)22] [(unsigned char)12];
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            {
                                arr_32 [i_6] [i_6] [i_6] [i_9 + 3] [(unsigned short)7] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */unsigned long long int) 604330015U)) * (15516170608215945621ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6] [i_8] [i_9 + 4] [i_8])) ? (arr_25 [i_6] [i_7 + 2] [i_8] [i_9]) : (897016371))))));
                                arr_33 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned long long int) -1784736572)) : (2930573465493605987ULL)));
                                arr_34 [i_7] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_23 [i_6] [i_6])))) ? ((+(((((/* implicit */_Bool) -401109787)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))) : (15516170608215945618ULL))))) : (((/* implicit */unsigned long long int) max((arr_23 [i_6] [i_6]), (((arr_23 [i_6] [i_6]) / (var_1)))))));
                                arr_35 [i_6] [i_7] [i_8] [i_6] [i_10] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_31 [i_7 + 2] [i_9 - 2] [i_6] [i_9 + 1] [i_9 + 2]))), (((/* implicit */long long int) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
