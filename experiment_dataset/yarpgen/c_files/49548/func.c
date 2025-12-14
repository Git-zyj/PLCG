/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49548
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
    var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)87)))))));
    var_13 = ((/* implicit */unsigned short) max(((unsigned char)193), (((/* implicit */unsigned char) (_Bool)1))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */int) (!((_Bool)1)))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 4219678921U))))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 += ((/* implicit */unsigned int) (!((_Bool)1)));
        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (signed char)58);
        arr_7 [i_1 + 1] = ((/* implicit */unsigned int) arr_0 [i_1]);
        var_17 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)51))));
        arr_8 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_4 [i_1 + 1])))), (((/* implicit */int) max(((unsigned char)23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 740804287740043328ULL))))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
        {
            arr_14 [i_2] [i_2 - 3] = ((/* implicit */_Bool) arr_10 [i_2]);
            arr_15 [i_2] [i_3] [22ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(arr_12 [(unsigned short)15]))))))));
            arr_16 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-58))));
        }
        arr_17 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 - 2])))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)188))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((arr_9 [i_4] [i_4]), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)193)))))))));
        var_20 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)238)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8912))))))))));
    }
}
