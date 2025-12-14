/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49141
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    var_20 *= ((/* implicit */short) (signed char)123);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) 301851704);
                            var_22 = ((/* implicit */short) (((+(((/* implicit */int) (signed char)-95)))) != (((((/* implicit */int) arr_3 [i_2 + 2] [i_1 - 1])) - (((/* implicit */int) arr_3 [i_2 + 2] [i_1 - 1]))))));
                            var_23 += ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (780713756))))) >= (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [8U]))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (3784273161U) : (3784273136U))))));
                            var_24 ^= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_25 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)18] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-66))))) ? (((((/* implicit */_Bool) 1346922326)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (signed char)-69)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (1346922342) : (((/* implicit */int) var_14)))))) > (2091542667));
                            arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */int) arr_8 [7] [4ULL] [(signed char)18] [i_5]);
                        }
                    } 
                } 
                var_26 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (((/* implicit */int) max((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned short) (signed char)78)))))));
                var_27 = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
}
