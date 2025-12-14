/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45928
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */int) (~(((long long int) (-(((/* implicit */int) var_8)))))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((int) ((int) -7327342554376285606LL));
                    arr_8 [i_2] [(unsigned short)14] [(unsigned short)15] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_1] [i_1])), (7327342554376285611LL)))) + (((unsigned long long int) -266077028571364427LL)))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (short)8224)) ? (((/* implicit */long long int) 3012442309U)) : (0LL)))))));
                    var_11 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((803545769U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [15] [i_0])))))), ((-(-1003819868044807544LL)))));
                    var_12 = 4192256U;
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [21U])) ? (min((((/* implicit */long long int) arr_3 [i_0] [i_0] [16])), (max((((/* implicit */long long int) 96480617)), (var_9))))) : (((var_7) + ((+(-7327342554376285598LL))))))))));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) max(((+(min((((/* implicit */long long int) arr_1 [i_0])), (7327342554376285604LL))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_10 [5LL]))))) == (((/* implicit */int) arr_5 [i_0] [i_3] [i_3 + 2])))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((signed char) (((!(((/* implicit */_Bool) 3491421550U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0]))))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_5))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) var_8)), (max((var_3), (((/* implicit */signed char) var_8)))))))));
                            var_17 ^= min((((long long int) ((((/* implicit */int) arr_9 [i_6] [i_6])) >> (((arr_6 [i_6] [i_5]) - (2379871866641376887LL)))))), (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_6] [i_8]))))));
                        }
                    } 
                } 
            } 
            var_18 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 7U)), ((+((+(var_7)))))));
        }
    }
    var_19 = ((/* implicit */short) max(((-(max((((/* implicit */long long int) var_5)), (var_6))))), (5390674329238559335LL)));
}
