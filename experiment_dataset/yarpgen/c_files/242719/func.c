/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242719
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned short) (signed char)-105);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) -2900045081704624448LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) : (var_8)));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & ((+(-2900045081704624466LL)))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [2LL] [i_2] [i_4])) != (((/* implicit */int) var_4)))))));
                            var_20 = ((((/* implicit */_Bool) -1480995078)) && (((/* implicit */_Bool) (+(arr_0 [11])))));
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_22 = ((/* implicit */long long int) min((var_1), (((/* implicit */int) var_11))));
}
