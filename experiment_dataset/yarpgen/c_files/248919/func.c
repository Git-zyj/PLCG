/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248919
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) var_9);
                        arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_3] [i_0])) : (((/* implicit */int) (signed char)96)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((unsigned short) ((long long int) arr_10 [i_0 + 3] [i_1] [i_3 - 1] [i_0 + 2] [i_1] [i_0])));
                    }
                } 
            } 
        } 
        var_11 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [4LL]))) | (min((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), ((-(var_9)))))));
        arr_15 [i_0 - 1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned short)32))))))), (((/* implicit */int) var_3))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (signed char i_5 = 2; i_5 < 8; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_3)))))));
                            var_13 = ((/* implicit */signed char) arr_0 [i_0]);
                        }
                        var_14 ^= ((/* implicit */signed char) ((long long int) max((min((arr_0 [i_5]), (var_5))), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((signed char) var_5))))))))));
            var_16 = (signed char)0;
        }
        var_17 *= ((/* implicit */unsigned short) var_9);
        var_18 = var_9;
    }
    var_19 = ((/* implicit */signed char) ((((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)21272))))) <= (((var_0) << (((((((/* implicit */int) var_2)) + (68))) - (38))))))) ? (var_0) : (((((/* implicit */long long int) ((/* implicit */int) min((var_2), (var_7))))) - (((long long int) var_8))))));
}
