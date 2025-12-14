/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39715
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
    var_16 = (!(((/* implicit */_Bool) var_9)));
    var_17 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((_Bool) var_11)))))));
    var_18 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0 + 1] [1])) ? ((-(4976826833562706154ULL))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49)))))))));
        var_19 *= ((/* implicit */short) ((_Bool) (signed char)42));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */int) var_1);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_1 + 1] [i_3] [i_2 + 1])) ? (((/* implicit */int) max((var_5), (((/* implicit */signed char) arr_12 [i_3] [i_2]))))) : (((/* implicit */int) (unsigned short)12600)))));
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_2 + 1] [(unsigned short)0])), (arr_7 [i_2] [3U]))))));
                        var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) min(((unsigned short)52935), ((unsigned short)52962)))) ? (((/* implicit */int) ((signed char) (unsigned short)12574))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_13 [i_1] [i_2] [(_Bool)0] [1LL])))))));
                        var_23 *= ((/* implicit */unsigned short) max((max((arr_14 [i_2] [i_2 + 1] [i_1 + 1] [i_4 + 1]), (arr_14 [(unsigned char)8] [i_2 + 1] [i_1 + 1] [i_4 + 1]))), (((long long int) arr_7 [(signed char)8] [i_1 + 1]))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) ((unsigned long long int) arr_10 [i_1] [i_1 - 1]))));
        var_25 = ((/* implicit */unsigned short) ((unsigned char) max(((-(((/* implicit */int) arr_11 [i_1 + 1])))), (((/* implicit */int) (unsigned short)52919)))));
        arr_18 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((max((((/* implicit */unsigned int) (unsigned short)12616)), (var_9))) < (((/* implicit */unsigned int) ((593199536) % (((/* implicit */int) var_1))))))));
    }
    for (long long int i_5 = 2; i_5 < 19; i_5 += 2) 
    {
        var_26 = ((/* implicit */unsigned char) ((short) ((signed char) (~(((/* implicit */int) (_Bool)1))))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_19 [i_5 - 2]), (arr_19 [i_5 - 1])))) ? (((/* implicit */int) arr_19 [i_5 - 2])) : (((/* implicit */int) arr_19 [i_5 - 2]))));
        var_28 = ((/* implicit */unsigned char) var_12);
    }
}
