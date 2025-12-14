/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46592
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_15)))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (-387465875)))) ? (4575439137557954781ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)18393))))))))));
    var_20 = var_14;
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((757087375395295637ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) << (((((/* implicit */int) (unsigned short)18393)) - (18375)))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) || (((/* implicit */_Bool) (+(var_1))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) 757087375395295637ULL));
        arr_3 [i_0] &= ((/* implicit */unsigned short) (~(arr_0 [i_0])));
        var_23 ^= ((/* implicit */unsigned int) 16383);
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 4294967295U)) | (17689656698314255981ULL)))))) ? (((/* implicit */unsigned long long int) 1156232738880991937LL)) : (((((((/* implicit */int) var_16)) <= (((/* implicit */int) arr_1 [i_1])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (12809240833239557974ULL))) : (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */long long int) -16384)))))))));
        arr_6 [2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (unsigned short)3968))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_1 [i_1])))))))) / (min((((/* implicit */unsigned long long int) (unsigned short)3968)), (((unsigned long long int) 4575439137557954781ULL))))));
    }
}
