/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242340
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
    var_13 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                arr_6 [i_0] [i_1] &= min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))));
                var_15 = ((/* implicit */_Bool) 8012792395994230757LL);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_16 += ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (13613493462874994699ULL)));
                                arr_15 [(_Bool)1] [i_1] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 8388607U)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_12)))))))));
                                var_17 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) (unsigned short)46452)))), ((_Bool)1)));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) (signed char)-93);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((unsigned int) (short)32767));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) (short)20545)))));
}
