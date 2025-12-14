/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234382
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned int) -4107689505845947643LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : ((-(((((/* implicit */_Bool) 4107689505845947645LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) : (1263532090U)))))));
    var_11 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) max((2432672300U), (((/* implicit */unsigned int) (unsigned short)48775))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (short)28617)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (449370123U))))));
                var_13 = ((/* implicit */long long int) (-(((unsigned int) (unsigned char)85))));
                var_14 = (((!(((/* implicit */_Bool) 2618212189U)))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-30744))))), (((unsigned int) (unsigned char)183)))) : (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1))))), (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)171))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min(((unsigned short)35792), (((/* implicit */unsigned short) (signed char)31))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (signed char)18)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)1))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) max(((unsigned short)8370), (((/* implicit */unsigned short) (short)8205))))))));
}
