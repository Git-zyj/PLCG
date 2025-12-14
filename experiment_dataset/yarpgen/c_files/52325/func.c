/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52325
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
    var_20 = ((/* implicit */_Bool) max((((((/* implicit */int) ((short) var_13))) / (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_8)))))), (((/* implicit */int) max((((/* implicit */unsigned short) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (max((var_11), (((/* implicit */unsigned short) var_2)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((signed char) var_9));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((var_4) / (var_4)))), (((unsigned int) var_19)))), (((/* implicit */unsigned int) ((unsigned short) (signed char)49))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [(short)13] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                var_23 = (+(((/* implicit */int) ((max((var_17), (((/* implicit */unsigned int) arr_2 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3])))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_13) - (17804047417285470965ULL)))))))) ? (((/* implicit */int) ((_Bool) (unsigned short)60193))) : (((/* implicit */int) ((unsigned short) var_4)))));
                    var_25 = ((/* implicit */_Bool) 4499940919511126964ULL);
                }
            } 
        } 
    } 
}
