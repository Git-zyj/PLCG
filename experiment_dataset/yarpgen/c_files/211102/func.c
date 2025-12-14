/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211102
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
    var_11 = ((/* implicit */unsigned short) -9223372036854775805LL);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) max((var_6), (var_6)))), (min(((short)-5055), ((short)5055)))))) ? (((/* implicit */int) (unsigned short)32732)) : (((/* implicit */int) var_0))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((15843595656439954762ULL), (max((2138088567098608318ULL), (((/* implicit */unsigned long long int) var_0)))))))));
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15843595656439954762ULL))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((15843595656439954762ULL), (((/* implicit */unsigned long long int) (unsigned short)32732))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1344283976))))))), (-575137509)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) (short)5055);
                            var_17 |= ((/* implicit */long long int) var_8);
                            var_18 = max((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (short)-5055))))) ? (((/* implicit */int) (short)-5080)) : (((/* implicit */int) max(((unsigned short)32804), (var_7)))))), (((/* implicit */int) var_0)));
                        }
                    } 
                } 
            }
        } 
    } 
}
