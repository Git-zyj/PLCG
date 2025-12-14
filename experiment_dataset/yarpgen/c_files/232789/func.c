/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232789
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */int) arr_7 [i_1 + 3] [i_1 - 1])) * (((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 1])))) : (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 1]))))));
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0] [(_Bool)1]) << (((min((((/* implicit */unsigned int) -1216745109)), (arr_2 [i_0] [(unsigned char)18] [i_0]))) - (3078222164U)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (177481420) : (((/* implicit */int) arr_6 [i_0] [i_0])))))) : (((/* implicit */int) min((arr_5 [i_0]), (arr_5 [i_2]))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0])))))) ? (arr_1 [i_0] [i_1]) : (min((((((/* implicit */_Bool) var_2)) ? (-4303687197225380414LL) : (-4798505744374494518LL))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (var_7))))))));
                    var_16 = ((/* implicit */long long int) arr_5 [i_2]);
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1 + 1]))) ? (((/* implicit */int) arr_6 [i_0] [18LL])) : ((+(((/* implicit */int) ((unsigned char) var_8)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_12 [i_0] [i_3] [i_3] [10LL] = arr_3 [i_0];
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_5] [i_3]))))), (((unsigned long long int) var_1))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((int) ((arr_13 [i_0] [i_3] [i_4] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_5]))) : (var_9)))), (((((/* implicit */_Bool) arr_8 [i_0] [i_4])) ? (max((1216745106), (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)232)))))))));
                                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned char)35)))) <= (((((/* implicit */_Bool) arr_1 [i_0] [i_4])) ? (((/* implicit */int) arr_5 [15ULL])) : (((/* implicit */int) (signed char)16))))))) < (((/* implicit */int) (unsigned short)65522))));
                                arr_17 [2LL] [i_4] [21LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_9 [i_3] [i_5]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_0] [i_3])))) : (((min((4294705152U), (((/* implicit */unsigned int) arr_16 [i_3 + 1] [i_0])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-2985)), (var_1))))))) % (var_4)));
}
