/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225582
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(14413978059011439536ULL)))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_6)), (3661693895730159026LL))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), ((-(((/* implicit */int) (unsigned char)153))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (((((/* implicit */int) (unsigned char)26)) ^ (((/* implicit */int) (unsigned short)34406))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_1] [i_1 + 1])) - (((/* implicit */int) var_14)))) - (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_7 [i_0])), (arr_4 [i_0] [i_0] [i_2])))) ? (((((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_2])) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3])))) : (((/* implicit */int) arr_1 [i_1 - 1] [i_0 - 2])))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0])) * (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0])))), (((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) arr_2 [i_4 + 2] [i_4 + 1] [i_4 + 1]);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) - (3274622868345625730LL))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned char) arr_11 [i_4 + 2] [i_4 + 1])))));
                    var_23 = ((/* implicit */_Bool) ((unsigned long long int) (-(var_9))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_11 [i_7] [i_7 - 1])))), (((/* implicit */int) ((unsigned char) var_3)))));
        arr_21 [i_7] = ((/* implicit */unsigned char) min((max((arr_11 [i_7] [i_7 - 1]), (((/* implicit */unsigned short) arr_3 [i_7 - 1])))), (max((((/* implicit */unsigned short) arr_3 [i_7 - 1])), (arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
        arr_22 [i_7] [i_7 + 1] = ((/* implicit */unsigned short) -3754926818456906238LL);
    }
}
