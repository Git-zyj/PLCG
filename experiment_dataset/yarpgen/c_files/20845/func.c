/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20845
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
    var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : ((+((-(var_15))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((arr_0 [i_0]) ? (((arr_0 [(unsigned char)12]) ? (arr_2 [0ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)8] [i_3]))))) : (min((((/* implicit */long long int) arr_1 [i_1] [i_0])), (arr_2 [i_2]))))) : (((/* implicit */long long int) (~(4050453484U))))));
                            var_20 = (-(((/* implicit */int) arr_3 [i_3])));
                            arr_11 [i_1] = ((/* implicit */long long int) arr_7 [i_1]);
                            arr_12 [i_0] [(unsigned char)1] [i_1] [i_0] [i_0] = ((/* implicit */short) (+((+((+(((/* implicit */int) arr_0 [6]))))))));
                            var_21 = ((/* implicit */unsigned char) max((arr_3 [i_0]), (((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_2] [i_3])))), ((!(arr_7 [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (-1LL) : ((+(((((/* implicit */_Bool) (signed char)-21)) ? (-15LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))))));
}
