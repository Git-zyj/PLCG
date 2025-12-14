/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194587
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */long long int) (-(2443673436U)))) : ((((_Bool)1) ? (((/* implicit */long long int) 577857266U)) : (arr_9 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0])))));
                            var_18 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned short)65517)))) & ((+(((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) var_12))))))));
                            var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_3])))), (((((/* implicit */_Bool) arr_1 [i_3] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)95))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    arr_14 [i_0] [(short)4] [i_0] &= ((/* implicit */short) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)89)) && (((((/* implicit */long long int) ((/* implicit */int) var_9))) == (arr_7 [i_0] [i_0] [i_0] [i_0])))))) >> (((max((((((/* implicit */_Bool) (unsigned char)147)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))))), (((/* implicit */long long int) 189991556)))) - (3367041384789466467LL)))));
                                var_21 = ((/* implicit */short) max((var_21), (((short) (+(max((var_14), (((/* implicit */long long int) (unsigned short)18)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) (signed char)45);
                    arr_21 [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-4), (((/* implicit */short) arr_2 [i_0])))))) : (max((arr_7 [i_0] [i_1] [i_1] [i_4]), (var_16)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)104)))));
                }
            }
        } 
    } 
    var_23 |= ((/* implicit */short) ((((((/* implicit */_Bool) ((var_5) >> (((/* implicit */int) (unsigned short)3))))) ? (max((var_14), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_14) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))))))))) <= (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_16)), (((max((var_7), (((/* implicit */unsigned long long int) (unsigned char)105)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_12))))))))));
}
