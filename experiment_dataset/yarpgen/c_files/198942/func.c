/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198942
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (unsigned short)24778);
                var_12 *= ((/* implicit */unsigned int) (signed char)-42);
                var_13 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (8763740076144728614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2032)))))) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) var_6))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_2);
    var_15 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (long long int i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((var_10) < (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1016)) - (((/* implicit */int) (unsigned short)2032))))), (4294967293U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */long long int) (+((+(((/* implicit */int) arr_16 [i_5] [i_6 + 1]))))));
                                var_18 = ((/* implicit */signed char) ((short) ((unsigned char) ((signed char) (signed char)-42))));
                            }
                        } 
                    } 
                    var_19 *= var_8;
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned int) var_5);
}
