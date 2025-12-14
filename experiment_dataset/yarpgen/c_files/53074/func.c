/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53074
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_12))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)210)))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2318603908U)) ? (1976363388U) : (1976363380U)))))))));
                    var_22 = ((/* implicit */long long int) ((unsigned char) ((short) 1976363387U)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((var_3) ? (((/* implicit */long long int) ((1976363387U) & (2318603878U)))) : (((((long long int) var_3)) & (4592578014123670902LL)))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2318603878U)) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : ((-(arr_1 [i_0])))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) 2318603884U);
                            var_25 = ((/* implicit */int) arr_5 [i_0]);
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10))))))) < (((((/* implicit */int) max((((/* implicit */short) var_12)), ((short)-15291)))) / (((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)5839)))))))))));
                            arr_21 [i_6] [i_2] [i_1 + 3] [i_6] |= (+(((/* implicit */int) (short)-27264)));
                        }
                        arr_22 [i_0] = ((/* implicit */long long int) ((unsigned int) 1382429428U));
                        var_27 = ((/* implicit */int) arr_12 [i_0] [i_0] [i_1 + 1] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */int) ((_Bool) ((short) var_4)));
                                var_28 -= ((/* implicit */unsigned int) max((((/* implicit */int) (((~(var_1))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (-307903235) : (((/* implicit */int) arr_5 [i_1 + 4])))))))), (((((/* implicit */_Bool) ((int) 1352739742181229493LL))) ? (((((/* implicit */_Bool) var_14)) ? (1009502398) : (((/* implicit */int) (unsigned short)51337)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
