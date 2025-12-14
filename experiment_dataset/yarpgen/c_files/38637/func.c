/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38637
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (-(arr_1 [i_0]));
                var_13 += ((/* implicit */unsigned long long int) 2500581859U);
                arr_6 [i_1] = ((/* implicit */unsigned int) -3762720694813167482LL);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((3739379642817041709LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62279)))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) -3739379642817041710LL);
                    arr_17 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) var_5);
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_11))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 13; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_17 = ((/* implicit */short) (unsigned short)62279);
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_19 [i_6]))));
            }
        } 
    } 
}
