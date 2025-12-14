/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221842
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
    var_10 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1878741825)) ? (((/* implicit */int) ((unsigned char) (short)-20250))) : (-337137111)))) ? ((+(((/* implicit */int) min((arr_0 [(short)2]), (((/* implicit */unsigned short) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
        var_13 = ((/* implicit */short) min((min((min((2147483632), (((/* implicit */int) (unsigned short)3372)))), (((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0])))))), ((~(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((-380152044) <= (((/* implicit */int) var_4)))))) ? ((-(((/* implicit */int) ((337137110) >= (((/* implicit */int) (signed char)-74))))))) : (arr_5 [i_0] [i_1])));
            var_15 = ((/* implicit */signed char) ((int) (_Bool)1));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) (short)-27867);
            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((9223372036854644736ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)255))))))))) == (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((+(1525778846U)))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_2])))) ? (max((3023341175U), (((/* implicit */unsigned int) (unsigned char)76)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_2])))))))));
            var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned int) -1878741850)) | (((1945508890U) / (((/* implicit */unsigned int) -337137111)))))));
        }
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) - (arr_5 [(short)0] [i_0])));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3]))) ^ (min((((/* implicit */unsigned int) 1878741825)), (var_5))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3])))))));
        var_22 = ((/* implicit */unsigned int) arr_4 [(unsigned short)1] [i_3]);
    }
    var_23 -= ((/* implicit */short) var_2);
    var_24 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (+(var_5))))));
    var_25 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((unsigned char) (_Bool)0))))));
}
