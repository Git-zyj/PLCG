/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202797
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) var_4);
                var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) -1)) == (7LL)))) / ((-(((/* implicit */int) arr_0 [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_12 *= ((/* implicit */unsigned char) 4294967276U);
                    arr_7 [i_1] [i_2] [i_2] = ((max((arr_2 [i_2]), (arr_2 [i_0]))) & (((/* implicit */unsigned long long int) (((((_Bool)1) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))) / (max((arr_5 [i_1]), (((/* implicit */unsigned int) var_5))))))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -9223372036854775783LL)) % (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-45))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (arr_2 [i_0]))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_14 = ((((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) var_6)) : (63ULL)))));
                    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_1 [i_1])))));
                    arr_10 [i_0] [i_1] [(signed char)7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_0]) % (((/* implicit */int) (signed char)-45))))) ? ((+(((/* implicit */int) (signed char)-45)))) : (arr_9 [i_1])));
                }
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) var_9)) ? (2147483632) : (var_3))) : (((/* implicit */int) ((unsigned char) var_6)))))) ? ((+(((((/* implicit */long long int) var_3)) / (9223372036854775783LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned int) -33554432)), (4294967286U)))))));
    var_17 = ((/* implicit */_Bool) (-(var_4)));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) 1073741823LL))));
}
