/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34438
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_0] = arr_2 [i_0 + 1];
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) arr_0 [i_0 + 1]))))), ((+(((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                var_15 = ((/* implicit */short) (+(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) ((-1469829757) != (((/* implicit */int) arr_9 [i_2] [i_2] [(unsigned short)11]))))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */int) (short)25697)) : (((/* implicit */int) max((arr_10 [i_3]), (arr_10 [i_3]))))));
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50109)) ? (((/* implicit */int) ((unsigned short) (unsigned char)0))) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (max((((/* implicit */int) (unsigned short)40697)), (933695381))) : (((/* implicit */int) (unsigned char)187)))) : (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)248))))));
            }
        } 
    } 
}
