/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30773
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((arr_1 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) / (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (max((var_0), (var_15))) : (((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1])) * (var_14)))))));
            arr_5 [i_1] = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) (_Bool)1)))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_19 = ((unsigned char) 974084200);
            arr_9 [i_2] [2ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)46530))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2]))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_6 [i_0]))));
        }
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */unsigned int) var_7))))) == (((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19006)) << ((((+((+(((/* implicit */int) var_8)))))) - (11296))))))));
        arr_13 [(unsigned char)10] = ((/* implicit */unsigned short) (+(arr_12 [i_3])));
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_22 = (!((!(((/* implicit */_Bool) arr_12 [i_4])))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_12 [i_4]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_4] [14U])) : (((/* implicit */int) arr_16 [i_4] [i_5])))) : (((/* implicit */int) ((974084200) <= (((/* implicit */int) (unsigned short)46545)))))));
                    arr_24 [i_4] [i_4] = (((+(var_3))) % (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))) ^ (arr_23 [i_4] [i_5] [i_5] [i_5]))));
                    arr_25 [i_4] [(unsigned short)9] [i_4] [i_4] = ((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4] [i_4]);
                    var_24 *= ((/* implicit */unsigned short) ((int) (!((!(((/* implicit */_Bool) var_5)))))));
                    arr_26 [i_4] [i_4] [17] = ((/* implicit */unsigned char) arr_21 [i_4] [i_4] [i_4]);
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) arr_12 [(unsigned char)1]);
    }
    var_26 = ((/* implicit */short) var_8);
}
