/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202478
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
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned short) ((short) (+(((/* implicit */int) var_9)))))), (var_4)));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((unsigned char) var_9));
        var_20 = ((/* implicit */_Bool) ((((min((var_6), (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))) * (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_12))))))) | (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
                    var_21 = ((/* implicit */short) ((_Bool) (unsigned char)81));
                    arr_9 [i_1] = ((/* implicit */signed char) (_Bool)0);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) (-(-4868012726889380379LL)));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) var_13);
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2948235724U))));
        }
    }
    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) (+((+(((((/* implicit */int) var_9)) * (((/* implicit */int) var_4))))))));
        arr_17 [i_4] = ((/* implicit */_Bool) ((unsigned short) (-(((var_2) + (((/* implicit */long long int) 1346731571U)))))));
    }
    var_24 = (+(((/* implicit */int) var_4)));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_11))));
}
