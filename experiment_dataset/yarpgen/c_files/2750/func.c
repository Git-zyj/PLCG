/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2750
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((int) (~(((14048165865259977978ULL) << (((((/* implicit */int) (unsigned char)247)) - (218)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((unsigned int) max((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_0])));
                    var_21 = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */_Bool) 8446387223133307287LL)) ? (536870911U) : (((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_0] [i_0] [i_0 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_8))) ^ (((/* implicit */int) var_3)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_22 += ((/* implicit */_Bool) ((unsigned short) 3758096397U));
                        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (_Bool)1))))) | (arr_5 [i_1] [i_2 + 1])));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((arr_5 [i_1] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) < (((/* implicit */long long int) 536870888U)))))));
                        var_24 += ((/* implicit */signed char) (-((+(((/* implicit */int) (short)-8640))))));
                        var_25 = ((/* implicit */unsigned short) (~((~(3758096389U)))));
                    }
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])) | (min((((/* implicit */unsigned long long int) var_10)), ((+(arr_6 [12]))))))))));
                }
            } 
        } 
    } 
}
