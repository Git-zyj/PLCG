/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234929
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
    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    var_16 += ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((int) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (unsigned char)69)))));
                            var_18 = ((/* implicit */int) ((((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) > (10155016566951254052ULL)))) + (((/* implicit */long long int) min((500146409), (((/* implicit */int) (unsigned char)227)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_4))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8647554742944038087LL)))))) ^ (((unsigned int) arr_4 [i_1] [i_1 - 1]))));
                                var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_0 + 1])) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) (signed char)88)) ? ((+(((/* implicit */int) arr_10 [i_0 + 1] [i_5] [i_4])))) : (((/* implicit */int) max(((unsigned char)184), ((unsigned char)78))))))));
                                var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) 11785872374836586418ULL)) ? (arr_17 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_5] [i_5])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)78))))) ? (((/* implicit */int) arr_12 [i_1 - 1])) : (((((/* implicit */_Bool) 10155016566951254052ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))))));
                                arr_21 [i_0] [i_1] [i_5] [i_1] [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_11 [i_1] [i_4] [i_1]) >> (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-118)), (max((var_7), (var_11)))))) - (162)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
