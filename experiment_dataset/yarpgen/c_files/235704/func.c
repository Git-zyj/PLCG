/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235704
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)224)) - (222)))));
                    arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((18202442593815005482ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1)))))))) && (((/* implicit */_Bool) 227220181U))));
                    arr_9 [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) 16777215ULL);
                }
            } 
        } 
    } 
    var_12 = min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)216))))) ? (((/* implicit */int) (unsigned char)217)) : ((~(((/* implicit */int) (unsigned char)38)))))), (((/* implicit */int) var_7)));
    /* LoopNest 3 */
    for (short i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)229)) | (((/* implicit */int) (unsigned char)206))));
                    arr_17 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) max((max((((/* implicit */int) (unsigned char)54)), ((~(((/* implicit */int) (unsigned char)39)))))), ((-(((((/* implicit */_Bool) (short)16320)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (short)-32754))))))));
                }
            } 
        } 
    } 
}
