/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213058
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 + 2]))))) ? (((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)53)) << (((((/* implicit */int) (unsigned short)20229)) - (20223))))), (0)))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1] [i_0])) ? (-10LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                    var_19 += ((/* implicit */signed char) ((_Bool) arr_4 [i_1] [i_1] [i_0]));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 4; i_4 < 10; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((238021753) % (((/* implicit */int) (unsigned short)19338))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (1437420469U) : (2114280002U)))) ? (((((/* implicit */_Bool) (unsigned short)59675)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (3161170694730244686LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 - 1] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)2032)) / (-1975357848))))))));
                    var_21 += ((/* implicit */unsigned short) var_13);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_17))));
                                arr_20 [i_3] [i_3] [i_5] [i_3] [4LL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7] [i_4] [i_4] [i_3]))) ^ ((~(var_18)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
