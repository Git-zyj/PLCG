/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4762
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? ((+(((-1469645143773803051LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_1 [20]))) ? (((unsigned long long int) (unsigned short)20778)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) -1469645143773803051LL))))))))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned short)59556)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))) == ((+(((/* implicit */int) arr_0 [21]))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (unsigned char)244))));
        arr_4 [i_1] = (~(((((/* implicit */_Bool) (short)-27323)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) (unsigned short)20778);
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)237))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (short)8848)) : (((/* implicit */int) arr_1 [i_2]))))), ((+(-1469645143773803041LL))))))))));
        var_18 ^= ((/* implicit */int) (+(((3437919427U) / (2557483894U)))));
    }
    var_19 |= ((/* implicit */long long int) (((~((-(((/* implicit */int) (unsigned short)48405)))))) * (((/* implicit */int) var_2))));
    var_20 -= var_9;
}
