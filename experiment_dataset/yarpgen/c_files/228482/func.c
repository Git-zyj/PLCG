/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228482
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned long long int) var_1)))))));
    var_16 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (arr_1 [i_0] [i_1])));
                arr_5 [i_0 + 2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((8823150351103269676ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) >> (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)12067)) : (((/* implicit */int) (unsigned short)12067)))) - (12032)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)151)) > (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned short)12067)) : (((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_3) : (arr_0 [i_0 + 1])))));
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_1]))))) : (((3604026517798436934ULL) * (var_13))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (unsigned short)12067);
                    arr_15 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5649047088128591924ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)148))))))) : (5649047088128591924ULL)));
                }
            } 
        } 
    } 
}
