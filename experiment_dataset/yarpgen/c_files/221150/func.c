/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221150
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
    var_15 = ((/* implicit */short) max((251658240U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 274877906943ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : (((unsigned int) var_10))))));
    var_16 = ((/* implicit */signed char) ((((unsigned int) 1819146499640179875LL)) > (((/* implicit */unsigned int) min((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) (signed char)-65)) ? (var_11) : (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 - 3])) == (((((/* implicit */int) arr_4 [i_0 - 4])) | (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0]))))));
                arr_6 [i_0 + 1] [i_0] [(signed char)5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((_Bool)1) || (arr_5 [i_0] [i_1] [i_0 - 1]))))));
                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32107))) : (min((((/* implicit */unsigned long long int) (unsigned short)12)), (var_10)))))) ? ((-(((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [(unsigned char)8])))))) : (((/* implicit */int) ((signed char) arr_1 [(signed char)18])))));
                var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (unsigned char)224))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_0)))) : (((/* implicit */int) (signed char)71)))), (((((/* implicit */_Bool) (unsigned short)42110)) ? ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)62067))))))));
            }
        } 
    } 
}
