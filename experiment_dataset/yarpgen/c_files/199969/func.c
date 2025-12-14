/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199969
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
    var_13 = ((/* implicit */short) max((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_12))))));
    var_14 = ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))) % (((/* implicit */int) var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (-1058613014)))) >= (max((((781806558775122049ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5282))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)91)))))))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)14308)), (-12))))));
                var_17 += ((/* implicit */unsigned char) ((17664937514934429567ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                arr_6 [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) -730434939)), (781806558775122074ULL))) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_5)))) << (((((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1])) - (29268))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((6918454399145045215ULL) - (6918454399145045203ULL)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5158))))))))));
    var_19 |= ((/* implicit */unsigned short) (unsigned char)39);
}
