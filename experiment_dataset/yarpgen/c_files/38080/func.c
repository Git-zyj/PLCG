/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38080
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1793848699U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_2))))))))))));
    var_11 = ((/* implicit */signed char) (unsigned short)13964);
    var_12 = ((/* implicit */unsigned short) -8576632646806834646LL);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= ((~(((((/* implicit */_Bool) 5240306279317975553LL)) ? (1157310613977907835ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)13977)))))) <= ((~(((((/* implicit */_Bool) (unsigned short)51571)) ? (((/* implicit */int) (short)-24777)) : (((/* implicit */int) (unsigned short)8191))))))));
                            var_15 ^= ((/* implicit */long long int) ((unsigned char) arr_1 [i_0 + 2]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_14 [i_5] [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_2 [i_1])))) ^ ((~(var_3)))))) ? (1074559168U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24777)))));
                            var_16 = ((/* implicit */long long int) (short)-4922);
                        }
                    } 
                } 
            }
        } 
    } 
}
