/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208947
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_12 += arr_8 [i_0] [i_0] [i_0] [i_0];
                        arr_11 [19ULL] [i_2] [i_2] [i_2] [19ULL] [i_3] = ((/* implicit */short) var_11);
                        var_13 = var_4;
                    }
                    var_14 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (-14) : (((/* implicit */int) arr_0 [i_0])))) > (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))) ? (arr_5 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-29805), (((/* implicit */short) (_Bool)1))))))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (signed char)-12))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min(((unsigned char)11), ((unsigned char)181)));
    var_18 = ((/* implicit */unsigned long long int) max((((unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)375)) : (((/* implicit */int) (short)375))))), (((/* implicit */unsigned char) var_5))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)39513)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (signed char)-12))));
}
