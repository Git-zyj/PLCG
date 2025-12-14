/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208633
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
    var_10 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) && ((_Bool)1)))), (1U)))) : (((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */unsigned long long int) 4294967294U)) : (9089084317202616571ULL)))));
        arr_3 [i_0] = ((/* implicit */short) max((((((((/* implicit */_Bool) 17005222144430054101ULL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_8)))) ^ (((/* implicit */int) (short)12159)))), ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_11 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 127LL)) ? (var_2) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)69)))))))), (((/* implicit */long long int) (~(((/* implicit */int) ((1U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1001398575)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)90))) : (6780261170962738216LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) : ((+(17005222144430054101ULL)))));
            var_12 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (~(var_1)))))));
        }
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) max(((-(11469503428415409608ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
            var_14 = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 3] [i_2 + 3])) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)15] [i_0])) : (var_4))) == (min((var_4), (((/* implicit */int) (short)0)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))))));
            var_15 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14959))) * ((-(1U)))))) ? ((+(9013000497808980810ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) arr_4 [i_0] [i_2])))), ((-(((/* implicit */int) var_0))))))));
        }
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6977240645294142014ULL)) ? (max((1441521929279497510ULL), (((/* implicit */unsigned long long int) 4294967286U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52229)) | (((/* implicit */int) (unsigned short)21186)))))))) ? (var_4) : (((/* implicit */int) ((((/* implicit */_Bool) 4070574662470923784LL)) && ((!(((/* implicit */_Bool) (signed char)21)))))))));
}
