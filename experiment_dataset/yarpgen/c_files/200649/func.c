/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200649
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
    var_11 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)16)) + (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)123))))) : (max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) var_9)) + ((~(var_8))))))));
    }
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */int) max((((/* implicit */short) (signed char)-123)), (var_10)))) * (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)190)), (726602678U)))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) < (839613075)));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            {
                var_16 = ((/* implicit */short) var_5);
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) 1858862134U);
                            var_18 = ((/* implicit */_Bool) arr_4 [i_1]);
                            var_19 ^= ((/* implicit */_Bool) arr_7 [i_2]);
                            var_20 |= ((/* implicit */unsigned char) (short)178);
                        }
                    } 
                } 
            }
        } 
    } 
}
