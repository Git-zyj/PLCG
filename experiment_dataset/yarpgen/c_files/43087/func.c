/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43087
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_5)))))))) ? (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) >= (9007199187632128ULL)))))));
    var_17 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) min(((short)1023), (((/* implicit */short) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (18437736874521919488ULL)))));
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (arr_2 [(unsigned char)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) (unsigned char)110)) | (((/* implicit */int) (unsigned char)169)))))))))));
            arr_6 [i_1] = ((/* implicit */int) ((((1685802932830798444LL) <= (arr_4 [i_0 + 1] [i_0 - 1] [(short)12]))) || (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 2] [i_0]))));
        }
        arr_7 [9ULL] = ((/* implicit */unsigned char) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21376))) : ((+(1965732528018448375ULL)))));
        arr_8 [i_0] = ((/* implicit */signed char) min((((16481011545691103233ULL) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) >= (16481011545691103241ULL)))))), (arr_2 [(unsigned short)6])));
    }
}
