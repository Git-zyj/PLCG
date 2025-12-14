/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200688
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_16 -= ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [14U])))), ((!(((/* implicit */_Bool) min((arr_7 [3U]), (arr_9 [i_3] [i_0] [i_0] [i_1] [i_0]))))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2896604488U)))), (((unsigned long long int) ((unsigned short) var_6))))))));
                        arr_11 [i_0] [i_1] = (signed char)1;
                        var_18 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_9 [i_0] [1LL] [i_0 + 3] [i_2 + 1] [i_2 - 1]))))));
                    }
                    var_19 += ((/* implicit */unsigned int) (unsigned short)0);
                    arr_12 [i_2 - 3] |= ((/* implicit */short) min(((+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1])) > (((/* implicit */int) (unsigned char)90))))))), (((/* implicit */int) min(((unsigned short)25248), (arr_9 [i_0] [i_0] [(unsigned short)10] [i_0 + 2] [6U]))))));
                    var_20 = arr_7 [i_0 + 2];
                    var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_0 + 3] [13ULL] [i_0 + 2] [i_0 + 2] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_1]))))) : (((/* implicit */int) arr_7 [i_0])))))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (unsigned short)15)) ? (16859904643360907327ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
