/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39658
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */int) (unsigned char)148)) * (((/* implicit */int) (unsigned short)47387)))), (((/* implicit */int) (unsigned short)18149)))) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0 + 1])), (var_3))))));
        arr_5 [i_0] = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)47387))))))) ^ (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))));
        arr_6 [(unsigned short)8] [i_0] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-79))))))), (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((((/* implicit */int) arr_0 [i_0] [(unsigned char)10])) & (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)14277))))));
        arr_7 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50694)) | (((/* implicit */int) (unsigned short)40681)))))))), (((unsigned long long int) (unsigned short)35671))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_2);
    var_21 = ((/* implicit */unsigned char) (((-(((/* implicit */int) max((var_13), ((signed char)76)))))) % (((/* implicit */int) var_15))));
    var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) < ((+(((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)22)))))))));
}
