/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233827
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
    var_20 = ((/* implicit */long long int) (unsigned short)7723);
    var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1813536911), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1813536911))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (1209205699U))))))) ? (((/* implicit */unsigned int) var_17)) : (((((/* implicit */_Bool) var_15)) ? ((~(3085761597U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned short)1901)))))))));
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) min((var_5), ((!(((/* implicit */_Bool) (short)32767))))))), (var_13)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4095)) << (((((/* implicit */int) (unsigned short)4105)) - (4096)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (4159725141484563874LL) : (((/* implicit */long long int) -687502810))))) ? (((/* implicit */long long int) (~(759952392U)))) : (((-4159725141484563875LL) - (((/* implicit */long long int) 4294967287U))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_12 [i_3] [(unsigned char)1] [6ULL] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -390510165)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned short)4960))));
                        arr_13 [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    var_24 = (+(((/* implicit */int) (unsigned char)231)));
                }
            } 
        } 
    } 
}
