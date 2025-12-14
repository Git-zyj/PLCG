/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246285
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
    var_13 = ((/* implicit */int) min((var_13), (max((((/* implicit */int) var_7)), ((((+(((/* implicit */int) (unsigned char)173)))) + ((-(((/* implicit */int) var_1))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) ((unsigned short) ((long long int) arr_1 [i_0])));
                var_15 = ((/* implicit */signed char) var_12);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        arr_18 [i_5] [(unsigned short)18] [i_4] [12LL] [i_5] = 1514514998U;
                        arr_19 [i_2] [i_5] = ((/* implicit */int) 1514514998U);
                    }
                    for (long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        arr_22 [i_6] [i_6] [i_6] [i_2] = ((/* implicit */unsigned short) var_6);
                        var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_4] [i_6 - 2])) ? (arr_14 [i_3] [i_4] [i_4] [i_6 - 2]) : (arr_14 [i_6] [i_6] [i_6] [i_6 - 2]))))));
                        var_17 = ((/* implicit */signed char) var_12);
                        var_18 = ((/* implicit */unsigned long long int) arr_4 [i_6] [i_4] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_26 [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_4])) ? (1514514998U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (signed char)-67)) : (1519313934)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)29127)) || (((/* implicit */_Bool) 1514515016U))))))))));
                        arr_27 [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), (min((arr_16 [i_7] [i_7] [1U] [i_2] [i_2] [i_2]), (min((7711898327479807778LL), (((/* implicit */long long int) (signed char)61))))))));
                    }
                    var_19 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_15 [10]))))));
                    var_20 = ((/* implicit */int) min(((+((-(4371294786681611111ULL))))), (((/* implicit */unsigned long long int) (unsigned short)20154))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)66))) | (min((((/* implicit */long long int) var_12)), (-1849400261580368339LL))))))));
            arr_30 [i_8] [i_8] [i_8] = ((_Bool) arr_8 [i_8]);
        }
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 19; i_9 += 3) 
        {
            arr_34 [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (-2147483647 - 1)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_2])) : (var_0)))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) 562949953421311ULL)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (_Bool)1)))))));
            arr_35 [i_9] [i_9] = var_7;
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))));
            arr_43 [i_10] [i_10] [i_10] = ((/* implicit */int) (unsigned short)13752);
        }
        arr_44 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_1)))) >> ((+(((/* implicit */int) (unsigned char)4))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(unsigned short)12])) * (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)4)))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_10]))) != (879087953U))) ? (arr_41 [i_10] [i_10]) : (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_10])) | (var_9))))))));
        arr_45 [2ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15681827171900071438ULL)) ? (13214151518740332739ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) (+(3305010427U))))));
        var_24 -= ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))), (((unsigned short) (+(2147483647))))));
    }
    var_25 = ((/* implicit */short) (_Bool)1);
}
