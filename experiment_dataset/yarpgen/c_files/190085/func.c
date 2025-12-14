/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190085
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((2874037182U) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_12 |= ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_10)))));
                        arr_14 [i_0 - 1] [(signed char)20] [i_0] [i_3 - 1] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_0 [i_0 - 2]))));
                        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (short)9947)))))));
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_2] [(unsigned char)2])) : (((/* implicit */int) var_6)))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1420930113U)) | (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0] [11LL]))) : (var_0)))));
                    }
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2874037161U)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) arr_3 [i_4]))))))));
                        arr_17 [i_0 - 2] [i_1 - 1] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) > ((-(((/* implicit */int) var_6))))))), ((+(((2874037183U) - (((/* implicit */unsigned int) 2025026140))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (min((-3296198637165304717LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4226521080U)) ? (((/* implicit */int) (unsigned short)47697)) : (((/* implicit */int) (short)27083)))))))) == (var_0))))));
                            var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-11636))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_5 - 1]))))) : (((1420930140U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)27073))))));
                        }
                    } 
                } 
                arr_30 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -384647846)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) (short)27083))))) ? (max((var_9), (((/* implicit */unsigned int) (short)-3)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-27072))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                var_20 *= ((/* implicit */signed char) min(((((((~(((/* implicit */int) var_7)))) + (2147483647))) << (((arr_9 [i_5] [(signed char)14] [i_6]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))), (((((/* implicit */int) arr_0 [i_6])) ^ (((/* implicit */int) arr_0 [i_5 - 1]))))));
            }
        } 
    } 
}
