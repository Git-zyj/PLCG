/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194870
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
    var_10 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) ^ (281564695U)))) ? (((((/* implicit */int) (unsigned char)214)) >> (((/* implicit */int) (signed char)20)))) : (((/* implicit */int) ((unsigned char) (unsigned char)183)))))));
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (unsigned char)69)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)10] = (unsigned char)10;
                arr_8 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */short) ((96459877U) <= (((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)11]))) : (arr_0 [i_0]))) << (((((unsigned int) (signed char)-55)) - (4294967229U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                arr_14 [i_2] [(short)1] [i_3] = ((/* implicit */short) ((unsigned int) ((unsigned char) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))))));
                arr_15 [i_2] [i_3] = ((/* implicit */short) (unsigned char)237);
                var_12 = ((/* implicit */unsigned int) ((signed char) (unsigned char)90));
                arr_16 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)0)) < ((-(((/* implicit */int) arr_5 [i_2]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((short) var_1));
}
