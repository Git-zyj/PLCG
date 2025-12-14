/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236866
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30698)) >> (((((/* implicit */int) (signed char)-108)) + (108)))));
    var_20 = ((/* implicit */_Bool) var_11);
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_11))))))) & (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0]))))), (((((/* implicit */_Bool) ((signed char) arr_7 [i_2] [i_0]))) ? ((-(17783977288008944666ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16992)))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) (-(3871947215U)))) ? (min((arr_0 [i_0 + 2]), (((/* implicit */long long int) -1908047258)))) : (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2])))))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (((+(var_1))) ^ (((/* implicit */int) arr_4 [i_1] [i_0]))))), (9223372036854775799LL)));
                            /* LoopSeq 1 */
                            for (int i_4 = 2; i_4 < 13; i_4 += 4) 
                            {
                                arr_16 [i_0] [i_0] [9ULL] [0LL] = ((/* implicit */signed char) var_7);
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_7 [i_2] [i_4]))));
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_10 [i_0] [(_Bool)1]))));
                var_26 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1]))));
            }
        } 
    } 
}
