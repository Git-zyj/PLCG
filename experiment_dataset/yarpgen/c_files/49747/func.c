/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49747
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_1 [i_0])))))))));
        var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3803633682U)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            {
                arr_8 [11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-17207)) || (((/* implicit */_Bool) -716068168))))) + (((((/* implicit */int) arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 1])) | (((/* implicit */int) arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 1]))))));
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_2 [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17207)) ? ((-(((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned char)229))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [18LL])) ? (((/* implicit */int) arr_12 [i_3])) : (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (short)-28886)) : (((/* implicit */int) (unsigned char)214))))))) | (((((/* implicit */_Bool) (-(arr_15 [i_3] [i_5 + 3] [i_5 + 1] [i_5])))) ? (((((/* implicit */_Bool) arr_10 [6])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_16 [(unsigned short)16]))) : (((/* implicit */unsigned long long int) arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 3] [i_3])))))))));
                    var_15 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 448918520))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))));
}
