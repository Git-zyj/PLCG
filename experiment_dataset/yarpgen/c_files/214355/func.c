/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214355
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
    var_11 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)3543)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                arr_14 [i_2] &= ((/* implicit */unsigned short) 10065154664695652907ULL);
                                var_12 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (16489970624984065249ULL))) >> (((((((/* implicit */_Bool) 342538695092267139LL)) ? (((/* implicit */unsigned long long int) 342538695092267137LL)) : (1956773448725486366ULL))) - (342538695092267097ULL)))));
                            }
                            arr_15 [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((10065154664695652907ULL) - (10065154664695652881ULL))))))));
                            var_13 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 2] [i_1 - 1]))) : (var_9)))) > ((~(var_2))));
                            arr_16 [i_0] [i_1 - 2] [i_0] [i_3] = ((/* implicit */long long int) (_Bool)0);
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((unsigned char)104), ((unsigned char)151)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 342538695092267148LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (var_6)))) : (((((/* implicit */unsigned long long int) 342538695092267139LL)) & (18446744073709551611ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (short)15881)) ? (8381589409013898690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (10065154664695652907ULL) : (16489970624984065249ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9))))) : (((/* implicit */int) var_0))))))))));
}
