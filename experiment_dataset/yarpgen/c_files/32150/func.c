/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32150
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1195679299)))) != (3494405613U)));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -1195679300))))) >> (((((/* implicit */int) (unsigned short)33405)) - (33389)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) -1195679309)) ? (-1195679325) : (((/* implicit */int) (unsigned char)78))))));
    var_23 &= ((/* implicit */int) ((max((((/* implicit */long long int) var_14)), (var_4))) & (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_3)) : (var_9))), ((~(var_4)))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                {
                    var_24 |= ((/* implicit */_Bool) ((signed char) (unsigned char)0));
                    arr_18 [4ULL] [4ULL] &= ((/* implicit */unsigned short) max((((long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [(short)6]))))), (((/* implicit */long long int) min((arr_7 [i_4] [i_4] [i_5 - 1] [i_5]), (((/* implicit */short) ((((/* implicit */int) (unsigned short)47604)) >= (arr_9 [i_5])))))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_6 [i_5 + 2] [i_5 + 2] [i_5 - 1])) ? (((/* implicit */int) arr_5 [(unsigned char)0])) : (((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1] [i_5 - 1])))), (((/* implicit */int) arr_6 [i_5 + 2] [i_5 + 2] [i_5 - 1])))))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)3))) ? ((~(((/* implicit */int) ((unsigned char) var_7))))) : (((((/* implicit */_Bool) (short)-12241)) ? (((/* implicit */int) arr_8 [i_5 + 1] [i_3])) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
