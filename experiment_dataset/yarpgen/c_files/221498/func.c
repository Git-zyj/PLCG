/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221498
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [5LL] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_18 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)64512))))) : (3801734704761247573ULL));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_9))) || (((/* implicit */_Bool) 3801734704761247570ULL))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) | (((/* implicit */int) arr_1 [18LL] [18LL]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_5 [(unsigned char)12] [i_0] [i_0]);
            var_22 = ((/* implicit */long long int) (unsigned char)195);
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (((((/* implicit */_Bool) (unsigned short)30765)) ? (3801734704761247591ULL) : (((/* implicit */unsigned long long int) 5156249682944349417LL)))))))));
            arr_10 [i_0] [17ULL] [i_2] = var_10;
        }
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_14 [i_3] [(unsigned char)5] = ((/* implicit */unsigned short) max((((arr_12 [i_3]) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) / (var_2)))))), (var_10)));
        var_24 += ((/* implicit */unsigned char) ((var_1) * (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2612))) | (var_2)))), (((((/* implicit */_Bool) arr_13 [i_3])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    }
    for (long long int i_4 = 3; i_4 < 6; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 65535LL)) : (14645009368948304066ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_8 [i_4] [i_4] [i_4 - 3]))))))))));
        var_26 |= ((/* implicit */long long int) var_10);
        var_27 = ((/* implicit */unsigned char) (~(arr_13 [i_4 - 2])));
    }
    var_28 = ((/* implicit */long long int) (+(var_12)));
    var_29 = ((/* implicit */unsigned long long int) var_7);
}
