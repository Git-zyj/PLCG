/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199192
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
    var_11 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (max((((/* implicit */long long int) 24U)), (var_3))))), (min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (var_6)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (16U))))))));
        var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 19; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = max((((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_2 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_2 - 2])) + (111)))))), (min((var_10), (((/* implicit */long long int) arr_10 [i_2 - 3])))));
                        arr_13 [i_3] [i_3] [i_3 - 1] [i_4] [(unsigned char)19] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((3283567366330140467ULL), (((/* implicit */unsigned long long int) arr_10 [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [13LL] [i_3])) ? (arr_1 [i_1 - 2]) : (var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_8)));
                    }
                } 
            } 
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_3)) != (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7819245880995176265LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1] [i_2])))), (var_4)))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) (-(arr_5 [i_2] [i_6])));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_16 [i_2] [i_5]))));
                        var_17 *= ((/* implicit */short) arr_5 [i_1] [i_1]);
                        arr_21 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) var_1)), (arr_3 [10LL])))), ((+(((/* implicit */int) (short)-24420))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29505)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6])))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)4)), (1260646004)))) : (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [(short)14] [i_1]))) : (29U)))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_2 [(_Bool)1] [(_Bool)1])), (18U))) << (((((/* implicit */int) (short)29488)) - (29477)))));
        }
        for (long long int i_7 = 3; i_7 < 19; i_7 += 2) /* same iter space */
        {
            arr_25 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) ((unsigned char) 3007064947521031257LL))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) != (var_4)))))));
            var_19 = ((/* implicit */signed char) (~(min((max((((/* implicit */long long int) var_1)), (3007064947521031257LL))), (arr_9 [i_1 - 1] [i_7 - 2] [i_7 - 2])))));
        }
        var_20 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) 3847961289496524938LL)) ? (((/* implicit */int) (short)14761)) : (((/* implicit */int) var_1))))), (min((-3007064947521031259LL), (((/* implicit */long long int) (unsigned char)59)))))), (var_7)));
}
