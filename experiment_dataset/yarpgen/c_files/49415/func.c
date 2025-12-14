/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49415
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
    var_12 |= ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned short)2] [i_1] = ((signed char) 4893767871453943853LL);
                    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(arr_6 [(signed char)9] [i_1 - 1]))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((var_10) - (4236306960U))))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)0)), ((+(var_10)))))) : (var_5)));
                    arr_10 [i_0 - 1] [i_1] [i_2] |= ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                    arr_11 [i_1] [i_2] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1915806246)) ? (2493462848506044261LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)98)))));
                    var_14 += -567819228;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            {
                arr_17 [i_4] = ((/* implicit */signed char) (-((-(1915806230)))));
                arr_18 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (arr_14 [i_3]) : ((-(((/* implicit */int) (unsigned short)30173))))))) ? (((/* implicit */int) (_Bool)1)) : (min((arr_14 [i_3]), (((/* implicit */int) (signed char)104))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_24 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_3] [i_4])))))));
                            arr_25 [(unsigned short)10] [i_4] [i_4] [(signed char)1] [i_6] = ((/* implicit */unsigned short) (-(((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 + 1] [(signed char)16] [i_4] [i_4] [i_3] [(signed char)16]))) : (var_8)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
