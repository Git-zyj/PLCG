/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225923
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) 3924103678U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)124))))));
        var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) || ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_21 = (((~(3924103678U))) ^ ((~(arr_6 [(unsigned char)10]))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) arr_5 [i_1]))));
        var_22 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)55)) | (((/* implicit */int) (unsigned char)255)))) & ((~(((/* implicit */int) var_7))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((arr_6 [i_1]) > ((~(arr_6 [i_1])))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (var_10)))) ? ((-(((arr_6 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : ((-(var_1))));
        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26268)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_10 [i_2])))))))));
        var_25 = arr_10 [i_2];
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) 2645257921U)) ? ((-(((/* implicit */int) ((((/* implicit */int) (short)23363)) > (((/* implicit */int) (short)1348))))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 2235182236U)) || (((/* implicit */_Bool) (unsigned char)219))))), ((unsigned char)255)))))))));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2235182236U)) ? (arr_9 [i_3] [i_3]) : (4294967295U)))) ? (((/* implicit */int) max(((short)-18013), ((short)0)))) : (((/* implicit */int) (unsigned char)232)))))));
            }
        } 
    } 
}
