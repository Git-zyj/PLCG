/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190021
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0]), (((unsigned short) (signed char)-14))))) : (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), ((signed char)-14)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((var_2) <= (((/* implicit */int) (signed char)6)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) var_1));
                        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_2 + 2])) : (((/* implicit */int) max(((short)19), (((/* implicit */short) (signed char)(-127 - 1))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)6)))))) : ((-(10256793047946711085ULL)))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
        var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_6)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_1)))), (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (var_9))) >> (((/* implicit */int) (short)6))))));
        arr_13 [i_0] = ((/* implicit */unsigned short) (+((+(arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1))));
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_9) >> ((((~(((/* implicit */int) (signed char)120)))) + (122)))))) ? (((/* implicit */int) ((_Bool) var_0))) : (arr_21 [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                    }
                } 
            } 
        } 
        arr_22 [i_4] = ((/* implicit */_Bool) min((max((((((/* implicit */int) var_4)) / (((/* implicit */int) arr_17 [i_4])))), (((((/* implicit */int) (unsigned short)40760)) >> (((((/* implicit */int) (signed char)-1)) + (17))))))), ((~(((/* implicit */int) arr_17 [i_4]))))));
    }
    for (short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((var_15), ((~(min((((/* implicit */int) ((((/* implicit */int) (unsigned short)5532)) < (((/* implicit */int) (unsigned short)43160))))), ((~(((/* implicit */int) var_4))))))))));
        arr_26 [i_8] &= ((/* implicit */short) arr_19 [i_8] [i_8]);
    }
    var_16 = ((/* implicit */short) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) ((short) var_6)))))));
    var_17 = ((/* implicit */unsigned short) (short)-23837);
    var_18 = ((/* implicit */signed char) var_2);
}
