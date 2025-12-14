/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242174
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)21);
                var_15 -= ((/* implicit */unsigned char) (_Bool)0);
                var_16 = ((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)5215)));
                var_17 = ((/* implicit */signed char) ((323263078U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) 323263078U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (897695389U))))));
                    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)193)) ? (((((/* implicit */_Bool) (signed char)27)) ? (-2310355944831671751LL) : (((/* implicit */long long int) -1187079520)))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 3971704218U)) ? (((/* implicit */int) (_Bool)0)) : (-1479745343))) * (((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */unsigned int) -1479745337)) : (897695397U))))));
                                arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1479745362)) ? (((/* implicit */long long int) 1479745342)) : (-3528946439192071994LL)));
                            }
                        } 
                    } 
                    var_21 = (-(((/* implicit */int) (short)9058)));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 389387071))));
}
