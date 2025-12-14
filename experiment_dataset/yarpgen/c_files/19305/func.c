/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19305
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
    var_17 -= ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_18 = ((((min((((/* implicit */unsigned long long int) arr_0 [i_2])), (var_12))) == (((/* implicit */unsigned long long int) 8715743700008693425LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1524247775)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (_Bool)0)))))) : (var_4)))));
                        var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(12243746285915126347ULL))) : (((/* implicit */unsigned long long int) (+(-7350183554946002809LL)))))))));
                    }
                    var_20 = ((/* implicit */signed char) ((max(((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((-7350183554946002796LL) < (((/* implicit */long long int) var_4))))))) * (arr_7 [i_0] [i_1] [i_2])));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-48))) < (8715743700008693425LL)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) var_15)))))));
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_0))));
    var_24 = ((/* implicit */_Bool) ((var_16) + (((/* implicit */long long int) var_1))));
}
