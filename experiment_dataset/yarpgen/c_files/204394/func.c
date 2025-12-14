/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204394
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = arr_3 [i_0];
                arr_7 [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((unsigned int) (unsigned char)41));
                arr_8 [i_0] [8U] = ((/* implicit */_Bool) var_8);
                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(2147483647))), (((((/* implicit */int) var_0)) | (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (short)-32746)))) >= ((~(((/* implicit */int) arr_2 [i_1] [i_0])))))))) : (arr_1 [i_1])));
                var_11 = ((/* implicit */_Bool) ((min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)215))))))) % (4294967293U)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_19 [i_2] [i_4] |= ((/* implicit */short) ((((arr_9 [i_2]) / (((/* implicit */int) (unsigned char)98)))) << (((((((/* implicit */_Bool) var_7)) ? (arr_9 [i_2]) : (((/* implicit */int) var_0)))) - (1935679234)))));
                    var_12 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
}
