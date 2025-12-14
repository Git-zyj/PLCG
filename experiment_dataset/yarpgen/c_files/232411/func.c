/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232411
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) arr_1 [(unsigned short)6] [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2]))))) ? ((~(((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1])))) : (((/* implicit */int) min((arr_1 [i_1 - 1] [i_1 - 3]), (arr_1 [i_1 + 1] [i_1 - 3])))));
            var_11 = ((/* implicit */long long int) var_1);
            var_12 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) 17154796822823866660ULL)))), (((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 - 3] [i_1 + 2])) && (((/* implicit */_Bool) 7721679349126328473ULL))))));
            var_13 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1 + 2]))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) var_6);
            /* LoopNest 3 */
            for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_3 + 1])) ? (((/* implicit */unsigned int) var_5)) : (arr_11 [i_2 - 3] [i_2 - 2] [i_2 - 1] [i_3 - 4])))) && (((/* implicit */_Bool) 610475774)))))));
                            var_16 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 + 1]))))));
                            arr_14 [i_0] [i_2 - 2] [i_0] [i_2 - 2] [i_0] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 3] [i_2 - 2])) && (((/* implicit */_Bool) arr_0 [i_2 + 1] [i_2 + 2]))))), (((((/* implicit */unsigned long long int) 610475774)) | (max((arr_0 [i_0] [i_5]), (((/* implicit */unsigned long long int) -610475779))))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((((/* implicit */_Bool) -610475785)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_0 [i_2 - 1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) + (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
            } 
        }
        var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_19 = ((/* implicit */int) max((var_19), (var_4)));
    }
    var_20 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_16 [i_6]))));
        var_22 = ((/* implicit */_Bool) 2147483646);
    }
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_23 = ((/* implicit */int) min((((/* implicit */unsigned short) ((short) arr_3 [i_7] [i_7] [i_7]))), (((unsigned short) -610475775))));
        arr_22 [12U] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_7] [i_7] [i_7])), (arr_11 [i_7] [i_7] [i_7] [i_7])))) ? (min((((/* implicit */unsigned int) var_0)), (arr_11 [i_7] [i_7] [i_7] [i_7]))) : (((/* implicit */unsigned int) min((610475784), (520192))))));
        arr_23 [i_7] = ((/* implicit */short) arr_7 [i_7] [i_7] [i_7]);
        arr_24 [i_7] = ((/* implicit */unsigned long long int) (unsigned short)24566);
        var_24 |= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) (unsigned short)3564)))), (((((/* implicit */_Bool) arr_10 [i_7] [i_7])) && (((/* implicit */_Bool) var_2))))));
    }
    var_25 = ((/* implicit */unsigned long long int) 610475767);
    var_26 = ((/* implicit */long long int) var_6);
}
