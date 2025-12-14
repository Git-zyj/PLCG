/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220274
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned char) (+((+(((/* implicit */int) var_4))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_0 - 1] [i_0 - 2])))) ? (((/* implicit */int) (!(arr_2 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_4] [i_3] [i_1]))));
                                var_18 += ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0])))));
                                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) 3705994509U)) ? (1801755561563075755ULL) : (((/* implicit */unsigned long long int) 0U))));
                                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (1801755561563075755ULL)))) ? (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_0)) + (26390))))) : (((/* implicit */int) var_4))));
                                var_21 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(short)5])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_4 [i_0] [i_1]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                    var_22 += ((/* implicit */unsigned short) ((short) -520375718));
                    arr_16 [i_0 - 2] [i_0 - 2] [i_1] [i_2] = ((/* implicit */unsigned short) var_15);
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)8190))));
                }
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 7; i_5 += 3) 
                {
                    for (long long int i_6 = 3; i_6 < 8; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_4))));
                            var_25 &= ((/* implicit */unsigned short) (+(min((488332493), (((/* implicit */int) (unsigned char)252))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 += ((/* implicit */unsigned char) min((((/* implicit */int) min((var_10), (var_5)))), (((((/* implicit */int) var_0)) | ((+(((/* implicit */int) var_14))))))));
    var_27 = ((/* implicit */unsigned short) ((unsigned int) ((short) (~(((/* implicit */int) var_15))))));
}
