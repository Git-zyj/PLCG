/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226927
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    var_14 -= ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_3 [(unsigned char)4]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    var_15 *= max(((unsigned char)61), ((unsigned char)195));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_1])) >= (((/* implicit */int) arr_7 [i_3] [i_4 - 1] [i_3])))))));
                            arr_16 [(unsigned char)8] [i_1] [i_1 + 1] [6ULL] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_7 [i_3] [i_1] [(unsigned char)0])))) / (((/* implicit */int) (unsigned char)61)))) / ((+(((/* implicit */int) (unsigned char)61))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            arr_19 [i_0] [(unsigned char)2] [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) - (((/* implicit */int) var_6))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1397562531639412984ULL)))))));
                            var_17 *= (unsigned char)8;
                        }
                        var_18 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((unsigned char) 10285374132019641889ULL))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) : (10623608105043845653ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)247))))) ? (var_5) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7)))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (15097548255566315004ULL))))) < (12441382664214887656ULL))))));
                    }
                    arr_20 [(unsigned char)2] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_0] [i_3])) != ((-(((/* implicit */int) (unsigned char)247)))))))));
                }
                arr_21 [i_0] = ((/* implicit */unsigned char) (+(min((12441382664214887656ULL), (var_5)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >> (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_5)))))));
}
