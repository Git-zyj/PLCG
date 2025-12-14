/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34873
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [(short)2] [i_3 + 1] = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned short) ((5945042470423362317ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24729)))))), (max(((unsigned short)0), (((/* implicit */unsigned short) (short)-14438))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_4] [i_2])) : (((/* implicit */int) (short)32764))))));
                                var_18 = ((((/* implicit */_Bool) 0U)) ? (16874946415306184991ULL) : (((/* implicit */unsigned long long int) 66977792U)));
                                arr_13 [i_0 + 2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_4] [i_3 + 1] [(short)21] [5U] [19ULL])) ? (arr_10 [i_0] [i_1] [14ULL] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17767))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4])) + (((/* implicit */int) (unsigned char)23))))))))) ^ (((((/* implicit */_Bool) (-(5666158967698363073ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) : (((((/* implicit */_Bool) 4294967295U)) ? (var_0) : (((/* implicit */unsigned long long int) var_2)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [(short)0] [i_1] [(unsigned char)15] &= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_11 [i_1] [i_1] [i_0] [i_0] [i_1] [i_1] [i_0])))))) >> (((((/* implicit */int) (unsigned short)65535)) - (65523)))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (67043328)))) : ((~(4988094650414435988LL)))))) ? ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) + (-6696659597002728703LL))))) : (((max((var_2), (((/* implicit */long long int) var_12)))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)85))));
    var_21 ^= ((/* implicit */unsigned short) var_13);
}
