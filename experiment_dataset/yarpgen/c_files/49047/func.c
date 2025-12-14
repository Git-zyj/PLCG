/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49047
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = arr_1 [i_1];
                arr_6 [(signed char)2] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
                var_14 = ((((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_1)))))))) == (((/* implicit */int) var_2)));
                var_15 = ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (((15985091860216018232ULL) % (((/* implicit */unsigned long long int) -683868591)))))))));
                            var_16 = ((/* implicit */short) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_4);
}
