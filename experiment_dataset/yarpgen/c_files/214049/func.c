/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214049
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (~((~(arr_0 [i_0]))))))));
                arr_4 [1LL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_3), (((/* implicit */long long int) arr_1 [i_1])))) + (((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))))))) ? ((((-(arr_3 [i_0]))) * (((/* implicit */unsigned long long int) ((unsigned int) var_9))))) : (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (arr_2 [4U]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_3) : (arr_7 [i_2] [i_2])));
        arr_8 [(unsigned short)20] = ((/* implicit */unsigned char) arr_5 [i_2] [i_2]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((min((-714942570706876459LL), (-714942570706876459LL))), (((/* implicit */long long int) arr_10 [i_3]))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)4115))))), ((+(var_6)))))) != (min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), ((~(arr_7 [i_3] [i_3])))))));
        var_15 &= ((min((((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_10 [i_3]) : (arr_10 [i_3]))), (((/* implicit */int) arr_6 [i_3])))) & (((((/* implicit */_Bool) ((unsigned char) var_7))) ? ((-(((/* implicit */int) (unsigned short)61421)))) : (((/* implicit */int) var_7)))));
        /* LoopNest 2 */
        for (short i_4 = 4; i_4 < 15; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) max((arr_9 [i_3]), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_2)))) : (((/* implicit */int) (unsigned short)32767)))));
                    arr_16 [i_3] [(unsigned short)8] [i_5] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_5)), ((-(min((((/* implicit */long long int) arr_5 [i_5] [i_5])), (var_0)))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (var_0))))) ? (min((min((((/* implicit */unsigned int) var_7)), (var_8))), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
}
