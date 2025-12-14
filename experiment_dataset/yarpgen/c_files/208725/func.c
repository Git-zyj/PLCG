/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208725
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [12U] [12U] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (min((((((/* implicit */_Bool) (signed char)9)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((var_5) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_6 [i_2] [i_0] [i_1 + 1] [i_0])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)28600)))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2] [i_2]))) : (var_2)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1175187862403207354LL)) < (17656482905242468308ULL)));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_11))));
                        var_21 = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((signed char) 1085207375900331102ULL));
    var_23 = ((/* implicit */unsigned long long int) min((((unsigned char) min((((/* implicit */unsigned int) (short)-32751)), (3405535286U)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((unsigned short)2961), (((/* implicit */unsigned short) (short)-27193))))))))));
    var_24 = ((/* implicit */unsigned short) var_0);
    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
}
