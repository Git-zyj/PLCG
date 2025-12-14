/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19068
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
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = (~(min((((/* implicit */unsigned int) var_3)), (arr_0 [i_0 - 1]))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_18 *= ((/* implicit */unsigned short) min((((unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (1887524289U)))), ((+(max((((/* implicit */unsigned int) var_13)), (arr_0 [i_0])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_4)) : (((int) 4294967277U)))) << (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (((4294967282U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 2])))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) max((max((var_0), (var_8))), (((/* implicit */unsigned int) ((unsigned short) ((long long int) var_1))))));
                    arr_13 [i_3] [i_2] [i_3] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_8)))))), (var_7)));
                    arr_14 [10LL] [i_2] [i_3] = ((arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (-2572301121289860295LL));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned short) ((long long int) (unsigned short)34118));
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((var_7) != (((/* implicit */long long int) 977079095U))))), (max((((/* implicit */unsigned char) arr_6 [i_1])), (var_15)))))) ? (max((((unsigned long long int) arr_2 [(short)9])), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-128)), (2407443006U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_9)) < (((unsigned int) (unsigned short)34406))))))));
    }
    var_20 = ((/* implicit */unsigned char) 6446108550210081646LL);
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_22 -= ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_18 [i_4])), (var_0))) >> (((((/* implicit */int) arr_18 [i_5])) >> (((/* implicit */int) arr_18 [i_4]))))));
                arr_23 [(_Bool)1] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)214));
            }
        } 
    } 
}
