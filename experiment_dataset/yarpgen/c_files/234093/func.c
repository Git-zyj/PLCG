/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234093
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(206388695U)));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (unsigned short)13129))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_9))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-18916))))))))) ? (((((/* implicit */_Bool) ((4173055300U) << (0U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)954))))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)978))) : (-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        arr_10 [i_2] [i_2] = (((_Bool)1) ? (((var_11) >> (((((arr_6 [(unsigned short)12]) & (((/* implicit */unsigned int) -835969895)))) - (1277697012U))))) : (var_11));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) + (1466442350U))) : (var_0)));
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (arr_6 [(_Bool)1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55135)))));
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_4]))) && (((((/* implicit */_Bool) arr_15 [i_4])) && (((/* implicit */_Bool) 5013978626781653862LL))))));
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */long long int) (short)-9915)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) : (arr_5 [i_4]))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) (short)9913))) | (arr_18 [i_5] [i_5])))));
        var_17 = ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_11)) : (arr_6 [i_5])));
        arr_20 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_8 [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (arr_18 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))))) > (var_1)));
    }
    var_18 = ((/* implicit */unsigned int) (~(var_1)));
}
