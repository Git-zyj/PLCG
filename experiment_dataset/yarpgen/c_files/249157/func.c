/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249157
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
    var_17 = ((/* implicit */signed char) ((int) ((unsigned short) ((long long int) 14894697410222782671ULL))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))));
                arr_6 [i_1] = ((_Bool) ((unsigned char) ((long long int) arr_1 [i_1] [i_1])));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((signed char) ((unsigned short) ((long long int) arr_3 [i_1] [13ULL] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                arr_14 [i_3] = ((short) ((unsigned char) ((unsigned long long int) 14894697410222782703ULL)));
                arr_15 [(unsigned short)5] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) ((_Bool) (signed char)-74))));
                arr_16 [i_2] = ((/* implicit */signed char) ((_Bool) ((signed char) ((unsigned short) var_5))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 13; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            {
                arr_24 [i_4] [i_4] [i_4] = ((int) ((signed char) ((short) arr_17 [i_5] [i_4 - 1])));
                arr_25 [i_4] &= ((/* implicit */signed char) ((unsigned short) ((short) ((_Bool) arr_1 [i_4] [i_4]))));
                arr_26 [i_5] = ((/* implicit */unsigned int) ((_Bool) ((signed char) ((signed char) arr_2 [i_4] [i_5]))));
                arr_27 [i_4] [(unsigned char)1] = ((/* implicit */signed char) ((int) ((unsigned long long int) ((long long int) arr_4 [i_4]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) ((signed char) var_15))));
}
