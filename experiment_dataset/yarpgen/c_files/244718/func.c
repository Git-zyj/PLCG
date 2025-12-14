/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244718
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    var_11 = ((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((unsigned char) var_5)))))) - (((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) var_8)) - (var_2))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -470590744)) != ((-(((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */short) var_4);
                    var_14 = var_9;
                    var_15 = ((/* implicit */signed char) var_5);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_16 = ((unsigned long long int) var_2);
                        arr_11 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 8053841468587479267ULL)) && (((/* implicit */_Bool) (unsigned short)23458))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (arr_1 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                    }
                }
            } 
        } 
    } 
}
