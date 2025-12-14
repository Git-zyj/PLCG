/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191990
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
    var_13 = var_5;
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min(((~(arr_0 [i_0]))), ((~(4014361695U))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_1 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31744))))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))) : (arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_0 [i_0])))), (var_8)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 632716416)) ? (((/* implicit */int) (short)-5985)) : (((/* implicit */int) (short)-3010))))) ? (4014361695U) : (arr_0 [i_1]))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36706)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_1])))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)-29520)) : (((/* implicit */int) (unsigned short)652))))) : (((unsigned int) arr_3 [i_1]))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_2]))) ? (((/* implicit */int) (short)-31744)) : (arr_5 [i_2])));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_14 [7] [7] [7] [i_4] = ((/* implicit */long long int) (~(arr_10 [i_3 + 1] [i_3 - 1])));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) 4100505917U))));
                    arr_15 [i_2] [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)18930))))) : (((unsigned long long int) (_Bool)0))));
                    var_19 = ((/* implicit */short) ((arr_12 [i_2] [i_3 + 2] [i_4]) / (arr_12 [9LL] [i_3 + 1] [i_4])));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_2]))) ? (((((/* implicit */_Bool) 4100505917U)) ? (8200629820172452072LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [(_Bool)1] [i_2]))))) : (((/* implicit */long long int) arr_5 [i_2])))))));
    }
    var_21 *= ((/* implicit */_Bool) max((((var_12) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 0U)))))))), (((/* implicit */long long int) (+(((int) (signed char)5)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((1283611919) % (((/* implicit */int) (unsigned short)5057)))))));
                arr_21 [i_5] [i_6] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)5048))) ? (((/* implicit */int) (short)31744)) : (((-632716400) % (-736984020)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) var_0)) : ((-2147483647 - 1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 2019506748U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_18 [i_5] [i_6]))))))) : (((((/* implicit */_Bool) (signed char)-108)) ? (280605600U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))))));
            }
        } 
    } 
}
