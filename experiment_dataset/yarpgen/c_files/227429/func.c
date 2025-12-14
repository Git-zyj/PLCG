/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227429
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((var_12) & (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)31), (((unsigned char) arr_0 [(short)11] [i_0]))))))));
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_15)), (arr_1 [i_0 - 1] [0U])))) ? (max((var_2), (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (((((unsigned int) var_11)) >> (((((/* implicit */int) arr_3 [i_0 - 2])) - (130)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) var_11);
            arr_8 [(_Bool)1] [(short)13] |= ((/* implicit */signed char) var_10);
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_6 [i_2])))));
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    {
                        var_20 = min((((((/* implicit */int) arr_17 [i_1] [1LL] [i_1] [1LL])) ^ (((/* implicit */int) ((unsigned short) 1919071761))))), (-893731183));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_6 [i_1]))));
                        arr_18 [(_Bool)1] [(_Bool)1] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((9600159788580414815ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))) || (var_10))))));
                        var_22 = ((/* implicit */unsigned char) var_13);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_9 [i_1] [i_3]))))))));
        }
        var_24 ^= ((int) min(((~(arr_12 [i_1]))), (min((-153637643), (((/* implicit */int) (short)-32756))))));
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        var_25 -= ((/* implicit */unsigned char) (~(var_12)));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9542)))))));
        var_27 -= ((/* implicit */short) var_6);
    }
    var_28 |= ((/* implicit */long long int) var_4);
    var_29 = ((/* implicit */unsigned char) var_15);
    var_30 += ((/* implicit */unsigned int) var_7);
    var_31 = ((/* implicit */long long int) var_11);
}
