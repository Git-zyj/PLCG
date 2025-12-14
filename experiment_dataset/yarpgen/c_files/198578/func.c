/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198578
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
    var_17 = ((/* implicit */long long int) var_16);
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) != (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35188))) : (var_2)))))));
    var_19 &= ((/* implicit */short) ((((((/* implicit */int) (unsigned char)201)) + (((/* implicit */int) (unsigned char)211)))) + (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = (!(((16244140138315594893ULL) > (((/* implicit */unsigned long long int) 602271737)))));
                var_21 = ((/* implicit */unsigned long long int) min(((unsigned char)211), ((unsigned char)201)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)219)) ^ ((-2147483647 - 1))));
                            var_23 = ((/* implicit */short) (unsigned char)32);
                        }
                    } 
                } 
            }
        } 
    } 
}
