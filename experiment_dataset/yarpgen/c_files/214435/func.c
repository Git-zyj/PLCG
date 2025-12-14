/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214435
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
    var_18 = var_16;
    var_19 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -55695894252557615LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (493820138525482357ULL))))) : (-9223372036854775788LL)))))))));
                        arr_11 [(unsigned short)0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) ((long long int) (signed char)127)));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) (signed char)118)) | (((((/* implicit */int) (unsigned short)6)) & (((/* implicit */int) arr_10 [i_0] [i_0])))))) : (((/* implicit */int) ((short) 17952923935184069248ULL)))));
                    }
                } 
            } 
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) ? (max((min((493820138525482378ULL), (493820138525482350ULL))), (((/* implicit */unsigned long long int) ((unsigned int) 493820138525482347ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((493820138525482350ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_1 - 3])))))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            arr_15 [i_4] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_4]))) - (493820138525482356ULL));
            arr_16 [(unsigned char)10] [i_4] = ((/* implicit */signed char) (~(var_16)));
        }
        arr_17 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-469972008))))));
        arr_18 [i_0] = ((/* implicit */unsigned short) ((var_12) << (((arr_8 [i_0]) + (6188737747253537404LL)))));
    }
    var_22 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (signed char)-117)))))) % (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (max((((/* implicit */unsigned long long int) var_7)), ((+(5571128291820632599ULL)))))));
}
