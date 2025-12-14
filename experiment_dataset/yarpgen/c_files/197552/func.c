/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197552
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) < (var_4))))))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) (short)5405)) - (5397)))))) : (((unsigned int) arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = min((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 + 1])) < (((/* implicit */int) arr_1 [i_0 + 1]))))), ((unsigned short)24341));
    }
    for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)1117))))), (arr_5 [(signed char)16]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((unsigned int) arr_9 [(unsigned char)11] [(unsigned char)11]));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-5406)) >= (((/* implicit */int) (unsigned short)0))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_3 = 4; i_3 < 15; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) ^ (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((signed char) var_15))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-21)), ((short)-5392))))))));
                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
}
