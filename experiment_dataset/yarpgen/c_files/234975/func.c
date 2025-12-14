/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234975
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
    var_11 = ((/* implicit */_Bool) ((long long int) 13113980389056214092ULL));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = var_3;
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 383295252619389858LL);
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) min((min(((-(((/* implicit */int) var_2)))), (((((/* implicit */int) (unsigned char)91)) * (((/* implicit */int) (_Bool)1)))))), ((((_Bool)1) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */int) (short)2)) >> (((8886818520495023992ULL) - (8886818520495023977ULL))))))))))));
                                var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (12043191642315657115ULL)))) || (((/* implicit */_Bool) max(((unsigned char)11), (((/* implicit */unsigned char) var_3))))))) ? (((var_3) ? (((/* implicit */unsigned long long int) -383295252619389859LL)) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((var_5) != (18446744073709551615ULL)))) : (((/* implicit */int) max(((unsigned char)57), (((/* implicit */unsigned char) var_1))))))))));
                                arr_17 [i_0] [2LL] [i_0] [5ULL] [i_0] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (((_Bool)1) && ((_Bool)1)))), (max((15095639078441007154ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-116))))) | (((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)12717)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) max((12469298542632851623ULL), (((/* implicit */unsigned long long int) -892383696418493752LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (max((12469298542632851623ULL), (((/* implicit */unsigned long long int) var_9))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_6) ? (var_5) : (6524203411083993925ULL)))))) / (((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
}
