/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249898
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(short)3] [(unsigned short)14]))))) != (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_4))))))));
                            arr_10 [i_0] [i_0] [i_0] [(unsigned short)10] [i_0] [i_3] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_1] [i_2]))))));
                            var_15 = ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)4] [i_1] [(unsigned short)6] [i_1] [i_1] [(short)1])) ? (-576541260) : (((/* implicit */int) (signed char)36))))), (-1LL)));
                            var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_3] [i_3] [i_2])), (var_11)))) ? (var_1) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (arr_0 [i_0] [i_1]))))));
                        }
                    } 
                } 
                arr_11 [(signed char)10] [i_0] [i_1] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
                var_17 = ((/* implicit */signed char) ((long long int) (short)0));
                arr_12 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -576541255)) ^ (12341223979208918040ULL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */short) var_8);
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(-576541246))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_5))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_13)))))));
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
    }
}
