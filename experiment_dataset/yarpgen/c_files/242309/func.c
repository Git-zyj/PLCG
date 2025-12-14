/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242309
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
    var_13 += ((/* implicit */unsigned int) ((unsigned short) ((short) ((((/* implicit */_Bool) var_6)) ? (45776965027421962LL) : (((/* implicit */long long int) var_7))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) 4251706111U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2509574680693199789ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [6ULL]))) : (arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10473))) : (3ULL))) : (5437750422514248976ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned char)5] [(short)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [(_Bool)1]))) : (min((((((/* implicit */_Bool) arr_1 [5ULL] [(signed char)9])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15573))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 45776965027421967LL)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned char)93)))))))));
                    arr_11 [8] [i_1] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) (short)32743)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_1 [18ULL] [i_1]))))) : (2147483647U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))))) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) ((short) arr_1 [i_0] [i_1]))))))));
                    arr_12 [i_0] [i_1] [i_2 + 2] [i_1] = (short)32657;
                }
            } 
        } 
    }
}
