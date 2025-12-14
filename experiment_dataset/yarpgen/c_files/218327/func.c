/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218327
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
    var_10 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 -= ((/* implicit */long long int) (unsigned char)12);
                    var_12 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)226)), ((unsigned short)14336)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_14 [i_4] [6U] [i_0] [i_0] [i_1] [6U] = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_10 [i_4] [i_0] [i_0] [(unsigned char)13])))));
                            var_13 *= ((/* implicit */unsigned long long int) ((arr_4 [i_3]) <= (arr_4 [i_3])));
                            var_14 = ((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7854))) : (((((/* implicit */_Bool) (unsigned short)41748)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [9U] [i_0]))) ? (((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))));
                        }
                        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_2])))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) (+(((4252127613551232627ULL) - (((/* implicit */unsigned long long int) 2851914089U))))));
                        var_18 = ((/* implicit */unsigned short) arr_17 [i_0]);
                    }
                    arr_19 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 2851914079U)) : (18083772660921834906ULL))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_1);
}
