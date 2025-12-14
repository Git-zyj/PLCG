/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53003
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
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)4]))) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) min((8443718058105460495ULL), (((/* implicit */unsigned long long int) 647004405)))))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)-32761)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 481669014U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0]))))) > (arr_2 [i_0]))))));
        arr_5 [(unsigned char)4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2251206533U) : (((/* implicit */unsigned int) var_14))))))))));
        arr_6 [i_0] = ((/* implicit */unsigned int) -1398630303);
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_11 [i_1] = ((/* implicit */unsigned int) var_7);
        var_17 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_1] [8ULL])), (10003026015604091113ULL))) : (((unsigned long long int) arr_8 [i_1]))));
    }
    var_18 = ((/* implicit */short) (((~(min((((/* implicit */unsigned long long int) var_13)), (10003026015604091130ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) >= (min((8443718058105460495ULL), (((/* implicit */unsigned long long int) 0U))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_20 = ((((/* implicit */unsigned long long int) (~(arr_7 [18ULL] [18ULL])))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)4843)), (arr_12 [i_2])))) ? (((((/* implicit */_Bool) 0U)) ? (8443718058105460483ULL) : (((/* implicit */unsigned long long int) 2097151U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [4] [(short)9]))))))));
            var_21 -= ((/* implicit */unsigned short) min((((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) -7749713812579531235LL)), (1197024518132950077ULL))) == (((/* implicit */unsigned long long int) var_10))))), (min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))), ((signed char)-19)))));
        }
        arr_17 [i_2] [8ULL] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_16 [i_2] [5U] [i_2])), (10003026015604091133ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32761)))))));
    }
}
