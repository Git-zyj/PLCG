/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196609
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
    var_15 = ((/* implicit */unsigned int) ((unsigned char) var_2));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) arr_1 [i_0]);
        var_17 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)176))))) ? (((((/* implicit */int) (signed char)107)) + (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_13))))))), (((((17208435406790889954ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_8 [i_3] [i_2] [i_0] [i_0] &= ((/* implicit */_Bool) ((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) % (536870911U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-15597)) : (((/* implicit */int) (unsigned char)182))))))) * (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_1])), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0)))))))));
                        var_18 = ((/* implicit */signed char) max(((+(max((3519404787U), (3519404800U))))), (max((((/* implicit */unsigned int) arr_5 [(_Bool)0] [(unsigned char)12])), (max((775562513U), (((/* implicit */unsigned int) arr_4 [(signed char)13] [(unsigned short)6]))))))));
                        arr_9 [i_3] [14LL] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((1565589539U) < (((/* implicit */unsigned int) ((/* implicit */int) ((3389189951U) < (3519404795U))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? ((~((~(((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)11]))));
    }
}
