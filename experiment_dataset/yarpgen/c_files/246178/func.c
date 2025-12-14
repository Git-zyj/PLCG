/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246178
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) << (((-835208284361662976LL) + (835208284361662986LL))))))) ? ((~(835208284361662973LL))) : (((/* implicit */long long int) ((unsigned int) var_5)))));
    var_16 = ((/* implicit */long long int) min((var_16), (((min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_11)))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) (!(var_1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)240)))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (12433715608070052254ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (((_Bool)1) || (((/* implicit */_Bool) -835208284361662958LL)))))))));
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) 16711680)) > (-835208284361662978LL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((3310704330U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7727885238454019547ULL)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (short)-10))))))))));
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)204)))) > ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_8 [(_Bool)1])) & (0U)))) : (arr_2 [i_0 + 3])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((max((((short) var_4)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_6 - 3]))))))), (((/* implicit */short) var_12))));
                                arr_19 [i_6 - 3] [i_0] [1U] [i_0] [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-110))))), (var_4)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) >= (min((16162383782775564178ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 + 4] [i_0] [i_0 + 1]))))))), (8573997311347255047LL)));
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned long long int) (+(arr_13 [i_7] [0LL] [i_7])));
        var_22 = ((/* implicit */_Bool) (signed char)-80);
    }
    /* vectorizable */
    for (unsigned int i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_8]))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_12 [10ULL])))))));
    }
}
