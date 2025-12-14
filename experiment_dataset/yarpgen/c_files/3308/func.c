/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3308
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)14), ((unsigned char)171)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))), (min((var_3), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (max(((unsigned char)27), (((/* implicit */unsigned char) (_Bool)1))))))))));
    var_11 -= ((/* implicit */short) var_8);
    var_12 = ((((((/* implicit */_Bool) ((unsigned short) 1909499008U))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)4)) && (((/* implicit */_Bool) (unsigned char)165))))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (signed char)-22)))))) < (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (short)-7381)))), (((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */int) ((signed char) var_4));
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_8 [i_3 - 3] [i_3 + 1] [i_3 - 2] [i_3 - 2]);
                        var_14 = ((/* implicit */unsigned int) arr_4 [i_0 + 2] [i_1 + 1]);
                        arr_11 [i_0 + 2] [(signed char)23] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((-1040446532868480526LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) : (((unsigned long long int) (unsigned char)240))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_9))) ? (((((/* implicit */_Bool) (short)7385)) ? (((/* implicit */int) arr_1 [(signed char)3])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) var_9)) : (arr_7 [(_Bool)1] [(unsigned short)6] [(_Bool)1] [i_3 - 3])))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 -= ((/* implicit */unsigned char) max((arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]), (((/* implicit */long long int) var_6))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))) + (4294967290U))))) ? (((/* implicit */int) min((arr_6 [i_0] [i_1 - 1] [i_2] [i_4]), (arr_6 [i_0] [i_1 - 1] [i_2] [i_2])))) : (((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) min(((signed char)40), ((signed char)121)))) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0 + 1])))))))));
                    }
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) max((((unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_5])), (((/* implicit */unsigned long long int) (short)19458))))) || (((/* implicit */_Bool) min(((unsigned char)23), (((/* implicit */unsigned char) (_Bool)1))))));
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((unsigned long long int) var_2)))))));
                    }
                    arr_17 [i_0] [(unsigned char)12] [(_Bool)1] = ((/* implicit */short) max((((_Bool) max((arr_8 [i_0 + 1] [i_0] [i_1 + 1] [i_2]), (((/* implicit */unsigned char) (_Bool)1))))), (var_6)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_5);
}
