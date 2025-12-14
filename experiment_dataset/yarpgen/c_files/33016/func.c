/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33016
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~(var_1)));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_12))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_5 [i_1]))))) ? (((int) 3549275498U)) : ((+(((/* implicit */int) arr_5 [i_1]))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            arr_9 [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 4])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))))))))) - ((~(((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2]))))));
            var_17 += ((/* implicit */long long int) (+(16383ULL)));
        }
        for (short i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_11))));
            var_19 = ((/* implicit */signed char) arr_10 [i_1]);
            arr_13 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16383ULL)) ? (3639130830U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (var_10) : (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) (+(264241152U))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            arr_18 [i_1] [i_4] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-99)))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_1])) | (((/* implicit */int) arr_11 [i_1] [i_4 - 1]))));
                var_21 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)65)))) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_7)));
            }
            var_22 = ((/* implicit */unsigned long long int) ((unsigned int) ((arr_16 [i_1] [i_1] [i_4]) | (((/* implicit */long long int) var_4)))));
        }
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-18)), (var_6)))) ? (((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_7]), (((/* implicit */long long int) arr_11 [i_7] [i_6 + 4]))))) : (((18446744073709535232ULL) - (((/* implicit */unsigned long long int) var_11))))))));
                    var_24 = ((/* implicit */unsigned int) min((((signed char) max((((/* implicit */int) (signed char)12)), (var_1)))), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) || ((!(((/* implicit */_Bool) arr_23 [i_1] [i_6])))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */signed char) 0U);
    var_26 = ((((((/* implicit */int) var_0)) * (((/* implicit */int) ((short) 7274027789351491429LL))))) | (((/* implicit */int) ((_Bool) 18446744073709535232ULL))));
}
