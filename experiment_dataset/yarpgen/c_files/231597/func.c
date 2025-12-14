/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231597
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
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                            {
                                var_14 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_1])) == (((/* implicit */int) var_12))))) >= (((/* implicit */int) ((-1910624320) > (-747353072))))));
                                var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                            }
                            var_16 ^= ((/* implicit */_Bool) (~(-747353072)));
                        }
                    } 
                } 
                var_17 = min((((-747353089) | (747353076))), (747353108));
                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 - 3] [i_1 + 1] [i_1 - 2])) && (((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 4])))))));
                arr_12 [i_0 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) -747353109)) >= (arr_11 [i_1 + 2] [i_0 - 1]))))));
                arr_13 [i_0] [i_1] [i_1] &= min((min((((/* implicit */int) (unsigned char)241)), (-747353109))), ((-(min((((/* implicit */int) arr_2 [20LL] [i_0] [i_1 + 2])), (-747353089))))));
            }
        } 
    } 
    var_19 ^= min((((/* implicit */int) (!(((var_4) == (((/* implicit */int) var_12))))))), ((((~(var_11))) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_9)))) - (6913))))));
    var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) == (((/* implicit */int) (signed char)127)));
}
