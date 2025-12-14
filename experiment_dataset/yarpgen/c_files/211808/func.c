/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211808
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
    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) max(((unsigned char)119), (var_0)))))) : ((-((-(var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_0 [i_1] [i_0])))))))));
                var_15 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (arr_1 [i_3 - 1]) : (arr_1 [i_3 - 1]))), (((/* implicit */unsigned long long int) min((((((var_6) + (2147483647))) << (((var_5) + (210062145))))), (((((/* implicit */_Bool) arr_11 [1U] [1U] [i_3])) ? (var_6) : (var_5))))))));
                var_16 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-7894))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_6))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((4183732480U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)216))))))) : (((((/* implicit */_Bool) arr_13 [(unsigned char)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) == (((/* implicit */int) arr_15 [i_4])))))) : (arr_13 [16U])))));
        arr_16 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (-(var_8))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4]))))))) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) -469020637))))))));
        arr_17 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_14 [13])))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~((~(((/* implicit */int) ((_Bool) arr_15 [i_6]))))))))));
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)0))));
                    arr_22 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */signed char) (((-(arr_19 [i_4]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))));
                }
            } 
        } 
        arr_23 [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_13 [i_4]) << (((((/* implicit */int) (unsigned char)197)) - (173))))))));
    }
}
