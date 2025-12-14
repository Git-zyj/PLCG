/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31499
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((long long int) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (unsigned char)68))))) >> (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) var_14);
                                var_20 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                arr_18 [i_6] = ((/* implicit */long long int) var_2);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        {
                            arr_25 [(signed char)20] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) (unsigned short)65535)))));
                            arr_26 [14LL] [i_8] [i_8] = ((/* implicit */signed char) 1918309442U);
                        }
                    } 
                } 
            }
        } 
    } 
}
