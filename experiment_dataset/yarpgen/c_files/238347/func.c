/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238347
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) (-(((((/* implicit */int) ((signed char) var_7))) * (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_11))))))));
        var_15 = ((short) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))));
                            var_17 = ((/* implicit */signed char) ((int) arr_9 [i_1]));
                            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5]))));
                        }
                        for (long long int i_6 = 3; i_6 < 17; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) > (((/* implicit */int) arr_7 [i_4] [i_4] [i_2])))) ? (((long long int) arr_4 [i_1])) : (((/* implicit */long long int) var_2)))))));
                        }
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)115))))))))));
                        var_22 = ((/* implicit */long long int) arr_4 [i_2]);
                        arr_16 [i_1] [i_2] [i_1] [i_3] [i_1] = ((/* implicit */int) ((((unsigned long long int) var_4)) & (((/* implicit */unsigned long long int) (+(var_9))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */long long int) ((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) + (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))));
    }
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
    {
        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) 4134086798U)) ^ (((((/* implicit */_Bool) (unsigned char)134)) ? (arr_19 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31829)) | (((/* implicit */int) (unsigned char)119)))))));
        arr_21 [i_7] |= ((int) ((_Bool) 1325241979U));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) var_8)))) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) ((arr_8 [i_7] [i_7] [i_7]) / (((/* implicit */int) arr_5 [i_7] [i_8] [i_8]))))) ? (var_2) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (var_4))))) : (((((/* implicit */_Bool) var_11)) ? (arr_10 [i_7] [i_7] [(unsigned char)8] [i_7]) : (((/* implicit */int) var_0))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(551908750))), (((/* implicit */int) var_1))))) ? (((((long long int) var_1)) / (max((var_9), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 551908766)), (var_12)))) ? (551908750) : (((((/* implicit */_Bool) 160880495U)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned short)2047)))))))));
            var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_5))), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_7))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_9 = 3; i_9 < 18; i_9 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_12))));
            var_28 = ((/* implicit */signed char) ((unsigned char) (+(arr_18 [i_7]))));
        }
        var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (arr_3 [i_7]) : (arr_3 [i_7]))), ((-(((/* implicit */int) var_6))))));
    }
    var_30 = ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_2)))) ? (((max((((/* implicit */int) var_1)), (var_4))) + (((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_10)))))));
}
