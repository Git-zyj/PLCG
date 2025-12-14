/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50745
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
    var_20 = ((/* implicit */unsigned short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (max((3275654684U), (((/* implicit */unsigned int) -1734055790)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_21 += ((/* implicit */signed char) arr_4 [i_0 - 4] [i_0 - 4]);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7921996380845183287ULL)) ? (((/* implicit */unsigned long long int) (-(1019312641U)))) : (((((/* implicit */unsigned long long int) ((-5543345409407834964LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))))) / (((17617743310569653046ULL) / (((/* implicit */unsigned long long int) 1019312611U))))))));
            var_23 -= ((/* implicit */unsigned short) ((int) (signed char)127));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) arr_4 [i_2] [i_0]);
            var_25 += ((/* implicit */long long int) max((((((/* implicit */_Bool) 13267381508948468588ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (7877112611255728921ULL))), (((/* implicit */unsigned long long int) (short)-32752))));
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((_Bool) (signed char)-46)) ? (((/* implicit */int) ((unsigned short) (short)19184))) : (-1)));
            var_26 = ((/* implicit */_Bool) max(((short)14871), (((/* implicit */short) (unsigned char)86))));
        }
        var_27 = ((/* implicit */_Bool) min((10569631462453822701ULL), (arr_7 [i_0] [i_0 - 3])));
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 7507184359975596103ULL))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))));
        var_29 = ((/* implicit */unsigned short) ((unsigned long long int) ((((_Bool) (unsigned short)65509)) ? (((/* implicit */unsigned long long int) 1869076767U)) : (10569631462453822695ULL))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) ^ (((int) ((unsigned int) (short)-18914)))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2091536626)) | (18446744073709551615ULL)));
        arr_13 [i_3] |= ((/* implicit */long long int) (short)-19185);
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)37110))));
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_4] [i_4])))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (4194303) : (((/* implicit */int) (_Bool)1))))))) | (1048575U)));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (4293918721U))), (((/* implicit */unsigned int) (short)14889)))))));
    }
}
