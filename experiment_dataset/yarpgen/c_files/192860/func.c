/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192860
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
    var_13 &= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (1467106728560455887ULL) : (((/* implicit */unsigned long long int) 0))))));
    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((12446475198879658181ULL) != (18446744073709551615ULL))))) ^ (((((/* implicit */_Bool) 2122814985U)) ? (var_8) : (18446744073709551615ULL)))))) ? ((~(((unsigned int) var_3)))) : (((/* implicit */unsigned int) (((+(1184271608))) << (((var_8) - (16190796098206317815ULL))))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((min((var_12), (2213694446857375031ULL))) > (((((/* implicit */_Bool) 13744498952052626612ULL)) ? (((/* implicit */unsigned long long int) 614452171)) : (var_8)))))) : (((/* implicit */int) ((((0ULL) - (var_12))) < ((+(var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((-614452167) - (((int) 1679668457319313160ULL)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~((-2147483647 - 1))));
        var_16 = ((/* implicit */unsigned int) ((var_1) / (arr_2 [i_0] [i_0])));
        arr_5 [i_0] = ((((/* implicit */unsigned long long int) 74461228)) | (3906007375570388163ULL));
        arr_6 [i_0] = ((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    }
}
