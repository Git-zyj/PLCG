/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45607
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
    var_20 -= ((/* implicit */short) var_12);
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_14))))) <= (((/* implicit */int) var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_22 -= ((/* implicit */long long int) var_7);
        var_23 = ((/* implicit */long long int) var_6);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))), (((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_8 [i_0] [i_0] [i_0] [i_0]))) - (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])))))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_6 [20] [i_1] [i_1]))));
                        var_26 *= ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_3] [i_2]))));
                        arr_13 [i_2] [i_0] [i_3] [i_0] = ((/* implicit */short) (((_Bool)0) ? (-6466266603695045258LL) : (((/* implicit */long long int) 1710585224U))));
                    }
                } 
            } 
            arr_14 [i_1] [i_1] &= ((/* implicit */unsigned char) max((((var_5) << (((((/* implicit */int) arr_3 [i_0] [i_1])) + (30478))))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) ((arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]) | (((/* implicit */int) var_3))))))))));
        }
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_6] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) arr_17 [i_6] [i_6] [i_6] [i_6]);
                            arr_26 [i_6] [i_6] = ((/* implicit */long long int) ((((long long int) max((-4696080756353690007LL), (((/* implicit */long long int) 4294967293U))))) < (((/* implicit */long long int) arr_10 [(short)9] [i_4]))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((long long int) ((unsigned char) arr_2 [i_4]))))));
            arr_27 [i_4] [i_4] [i_4] = (+(arr_10 [i_0] [i_4]));
        }
        for (int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            arr_31 [i_0] &= max(((-(var_0))), (((/* implicit */int) arr_29 [i_0] [i_8])));
            var_28 = ((/* implicit */unsigned long long int) ((unsigned char) arr_19 [i_0] [i_8] [i_8] [i_8]));
        }
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((var_5) >> (((var_12) + (4830253334066357399LL)))))));
}
