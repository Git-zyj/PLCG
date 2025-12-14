/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238219
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
    var_20 = ((/* implicit */unsigned long long int) (short)20345);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (((~(((/* implicit */int) arr_1 [i_0])))) > (((/* implicit */int) (short)20594)));
        var_21 = ((/* implicit */short) min(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)0)))));
        arr_3 [(short)11] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(18446744073709551604ULL))))))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)-32754))))));
        var_22 = max((((((/* implicit */_Bool) ((((/* implicit */int) (short)32738)) << (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32746))) + (arr_0 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)23)) ? (1498306351331429606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))))))), (((/* implicit */unsigned long long int) (unsigned short)40447)));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) (unsigned short)65520);
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_4])) > (((/* implicit */int) min((arr_11 [i_3] [i_4 + 2] [i_4 + 2] [i_3]), (((/* implicit */unsigned char) var_12)))))));
                        arr_13 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)96)));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) min(((short)-29336), (min((arr_6 [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_1])))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-1))) ? ((-(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) (signed char)-70))))))) || (((/* implicit */_Bool) arr_10 [i_1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    arr_19 [i_6] [i_5 - 2] [(unsigned short)19] = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4246201354U)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) var_6))))), (min((9118777455048263407ULL), (((/* implicit */unsigned long long int) var_18))))))));
                    var_27 = ((/* implicit */unsigned short) arr_14 [i_1]);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 1; i_8 < 16; i_8 += 3) 
        {
            {
                arr_24 [i_7] [i_8 - 1] [i_7] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) arr_7 [i_8 + 1] [i_8 - 1] [i_8])));
                var_28 = ((/* implicit */unsigned short) (~(18446744073709551601ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_7] [(short)12] [i_7]))), (arr_0 [i_7])))) ? (((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2306))) : (16203463741928557628ULL)))) : (((/* implicit */int) arr_9 [i_7] [i_8 - 1] [i_8 - 1] [i_10 + 1]))));
                            arr_30 [i_7] [i_8] [i_7] [i_10] [i_9] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) (unsigned char)255);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) var_1);
}
