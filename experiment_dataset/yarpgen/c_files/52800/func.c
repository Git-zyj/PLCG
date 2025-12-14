/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52800
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
    var_17 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_13)))) >> ((((+(((/* implicit */int) var_0)))) - (172)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_2] = ((/* implicit */_Bool) arr_6 [i_2] [i_2]);
                        var_18 += ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_2])) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)45425)), (-2305843009213693952LL)))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))) : (-2305843009213693952LL));
                        var_20 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_6 [i_2] [i_2])))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) -2305843009213693952LL);
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (short i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) -2305843009213693943LL);
                        var_23 += (+(((/* implicit */int) (unsigned char)64)));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) var_12);
        }
        var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((-((+(2305843009213693929LL)))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (signed char i_7 = 2; i_7 < 21; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_1))));
                        arr_33 [i_8] [14] [(short)13] [i_8] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(unsigned short)6] [i_0] [(unsigned short)6] [(_Bool)1])) ? (((/* implicit */int) ((signed char) arr_18 [i_0] [i_0] [i_6] [i_0] [i_0] [i_7]))) : (var_4)))) / (min(((((_Bool)1) ? (-2305843009213693943LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) arr_2 [i_0])))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2305843009213693951LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [4ULL])))));
                    }
                } 
            } 
        } 
    }
}
