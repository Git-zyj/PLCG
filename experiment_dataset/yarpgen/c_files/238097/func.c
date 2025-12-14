/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238097
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_10 ^= ((/* implicit */long long int) ((int) -1718999864358783676LL));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) (-(1401520901U)));
                                var_11 = ((/* implicit */long long int) min(((unsigned char)3), ((unsigned char)252)));
                                var_12 = ((/* implicit */short) min((min((arr_7 [i_0] [i_0 + 2] [i_2 - 1] [i_3 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8))))))), (((long long int) arr_1 [i_0 - 2]))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) var_8)) < (min((((/* implicit */long long int) var_7)), (var_2)))))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)4))))))))));
                                arr_13 [i_0] [i_0] [14U] [i_3] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((short) (unsigned char)243)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)3)))) + (2147483647))) >> (((max((var_2), (((/* implicit */long long int) var_9)))) - (3506697894414153871LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2])) ? (arr_7 [i_0] [i_0] [(_Bool)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-30224)))))) || ((!(((/* implicit */_Bool) var_7))))))) : (arr_0 [i_1] [i_1]))))));
                }
            } 
        } 
        arr_14 [i_0 - 2] [17U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1897106773)) - (arr_8 [i_0] [(short)22] [i_0 - 2] [i_0] [0LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11)))))) : (((((/* implicit */_Bool) arr_9 [6ULL] [16LL] [6ULL] [i_0 - 1] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_6] [i_6])) ? (191173028U) : (((/* implicit */unsigned int) var_0))))), (((((/* implicit */_Bool) arr_22 [i_6] [i_6 + 2] [22] [i_6])) ? (arr_22 [i_6] [i_6 - 1] [(unsigned short)7] [i_6]) : (((/* implicit */long long int) 1455522281U))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 980938792U)) ? (3295638487481776940LL) : (arr_19 [i_5] [i_5] [i_5])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+((+(((/* implicit */int) var_4))))))) == (max(((-(6931531910646377139LL))), (((/* implicit */long long int) ((short) var_2)))))));
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((var_2) == (min((((/* implicit */long long int) 2872069683U)), (-7833652625630108777LL))))))));
    var_18 += ((/* implicit */unsigned long long int) var_0);
}
