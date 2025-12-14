/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232376
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
    var_15 = ((/* implicit */_Bool) var_14);
    var_16 = ((/* implicit */long long int) var_0);
    var_17 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2] [i_3] [(_Bool)1] [i_2] = ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned char)10] [(_Bool)1])) && (((/* implicit */_Bool) var_7)))))) ^ (max((var_13), (((/* implicit */long long int) var_1)))))) < (((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned short)38641), (((/* implicit */unsigned short) (signed char)1)))))))));
                            arr_12 [i_2] [(unsigned char)12] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)26878))))) < (((/* implicit */int) (unsigned short)32760))))), (((long long int) var_13))));
                            var_18 = arr_0 [i_2] [i_2];
                            var_19 = ((/* implicit */int) ((unsigned long long int) ((int) arr_10 [i_2] [i_1 - 1] [i_2])));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */signed char) var_10);
                var_21 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1]);
                arr_13 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1]))));
                var_22 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1]))))));
            }
        } 
    } 
}
