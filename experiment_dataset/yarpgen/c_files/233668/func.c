/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233668
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned long long int) (((+(arr_2 [i_1]))) / ((+(((unsigned int) (signed char)65))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -7948950879202125357LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2665194112689636490LL)))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (7948950879202125358LL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (short)-29672))) > (((long long int) (unsigned short)0))))));
    var_16 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                var_17 = ((/* implicit */short) 7948950879202125356LL);
                var_18 = ((long long int) ((((/* implicit */unsigned int) var_9)) | (arr_9 [i_3])));
                arr_11 [i_3] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_2]))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_0)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (signed char)16);
}
