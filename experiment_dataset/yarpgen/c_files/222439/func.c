/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222439
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
    var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))))) : (((long long int) var_5))));
    var_12 = ((/* implicit */signed char) var_9);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (-(var_10))))) ? (var_9) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((9223369837831520256ULL) < (((/* implicit */unsigned long long int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1]))) : (9223369837831520256ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)41922)))))));
                            var_15 = ((/* implicit */unsigned int) ((long long int) ((unsigned char) 9223374235878031360ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_16 [i_5] [i_1] [(signed char)8] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) var_1)));
                            var_16 = ((/* implicit */unsigned short) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1]))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) var_3)))));
            }
        } 
    } 
}
