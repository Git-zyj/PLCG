/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219955
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
    var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((short) (signed char)9));
                            var_14 &= ((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) 6996417479650875922LL)), (702445072310382779ULL)))))));
                            var_15 &= ((/* implicit */long long int) ((signed char) ((int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)47))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (-(15386913141851843278ULL)))) && (((/* implicit */_Bool) max((7ULL), (((/* implicit */unsigned long long int) 131071)))))))), (((((/* implicit */int) ((arr_9 [i_1] [i_1] [12] [i_1] [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) % ((+(var_9))))))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 18446744073709551609ULL))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 2; i_4 < 23; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] [11ULL] [i_4 + 2] = ((((min((((/* implicit */int) arr_4 [i_0] [(_Bool)0] [21U])), (-458793261))) & (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) arr_5 [i_4] [i_1 + 1] [i_1 + 2] [i_0])))))) == (((/* implicit */int) ((((/* implicit */int) ((7ULL) == (((/* implicit */unsigned long long int) -1))))) <= ((~(-397427901)))))));
                    var_18 |= ((/* implicit */_Bool) (signed char)-1);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) arr_5 [i_0] [i_0] [9] [(_Bool)1])) < (((/* implicit */int) (signed char)0)))) && (((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 + 1] [i_4]))))) > (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_4] [i_5])), (15386913141851843261ULL))))))))))));
                                var_20 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (signed char)0)) < (((/* implicit */int) ((-2099303028) >= (((/* implicit */int) var_1))))))));
                                var_21 |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-20940)) ^ (((/* implicit */int) (unsigned short)457))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 2) 
                {
                    arr_23 [14ULL] [14ULL] |= ((unsigned long long int) ((((/* implicit */_Bool) ((arr_21 [20] [i_0] [i_1] [i_7]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (unsigned short)15582)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_2 [i_0]))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_3))));
                    arr_24 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) 9598639403966778965ULL))) > (min((((int) arr_8 [i_0])), (((/* implicit */int) (short)20940))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_6))));
}
