/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41087
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((unsigned char) var_13)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [7ULL] [i_0 + 4]), (arr_4 [1U] [i_0 - 2])))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_1 + 2]))))));
            var_16 = ((unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) ((unsigned char) 8796093022176ULL)))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18446735277616529424ULL)) && (((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1])))) ? (((((/* implicit */int) (unsigned char)242)) * (((/* implicit */int) arr_4 [7U] [7U])))) : (((/* implicit */int) ((1425503797U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [10ULL] [i_0 + 2]))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 -= ((/* implicit */_Bool) 641490389436690307ULL);
        arr_8 [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (_Bool)0);
        var_18 += ((/* implicit */unsigned char) max((((/* implicit */int) arr_4 [i_2] [i_2])), ((-(((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [(unsigned char)0])) : (((/* implicit */int) arr_7 [0ULL]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
    {
        arr_12 [i_3] = ((unsigned long long int) arr_10 [i_3 - 1]);
        var_19 += arr_9 [i_3] [i_3];
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_20 = ((8796093022191ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))));
            var_21 -= ((/* implicit */_Bool) (~(((18446735277616529408ULL) << (((((/* implicit */int) var_0)) - (92)))))));
        }
    }
}
