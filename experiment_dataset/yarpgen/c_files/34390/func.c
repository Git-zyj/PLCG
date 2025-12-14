/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34390
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
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53415))) : (var_13))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (549755805696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))) ? (max((((/* implicit */unsigned long long int) var_6)), (18446743523953745923ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))))))));
                var_15 += ((/* implicit */unsigned int) (~((~(((((/* implicit */unsigned long long int) arr_0 [i_0])) | (var_9)))))));
            }
        } 
    } 
    var_16 = (+(max(((~(var_5))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (short i_3 = 4; i_3 < 20; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) 18446744073709551610ULL);
                    var_18 ^= ((/* implicit */unsigned char) min((min((var_5), (((/* implicit */unsigned long long int) ((var_4) ? (arr_5 [(unsigned char)16]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) (unsigned char)176)))))))));
                    var_19 = ((/* implicit */unsigned char) ((arr_9 [(_Bool)1] [i_2] [i_2] [i_2]) * (min((max((var_7), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) arr_0 [i_3]))))));
                }
            } 
        } 
    } 
}
