/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236344
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_15 ^= ((/* implicit */signed char) ((long long int) arr_2 [i_0] [i_0]));
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned short)8);
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_1)))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_11)))))))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1] [i_1])) == (((/* implicit */int) arr_6 [i_1] [i_1]))));
        arr_8 [i_1] = ((/* implicit */signed char) arr_6 [i_1] [i_1]);
        arr_9 [i_1] = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned int) (signed char)4);
        var_19 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)2979))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) arr_6 [i_3] [i_3]);
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)22))))) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)1)))))))));
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 1466693396589059286LL)) ? (arr_2 [i_3] [i_3]) : (((unsigned int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-117)))))));
        var_23 = ((/* implicit */unsigned short) arr_1 [i_3] [i_3]);
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((((/* implicit */int) arr_18 [i_5] [i_4] [i_5])) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_12))) && (((/* implicit */_Bool) (signed char)-3))))) - (1))))))));
                        var_25 = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_3] [i_3]))));
                        arr_22 [i_4] [i_4] [i_5] [i_6] = (+(arr_0 [i_3] [i_5]));
                        arr_23 [i_3] [i_4] [i_5] [i_6] [i_4] = max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_21 [i_3] [(unsigned short)7] [(unsigned short)7] [i_4] [7LL] [i_5]))))))), (arr_5 [i_6] [i_4]));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) min((var_5), (((/* implicit */long long int) (unsigned char)88)))))));
    var_27 = ((/* implicit */unsigned short) min((min(((~(var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) -4337640017647036639LL)) && (((/* implicit */_Bool) 0U))))))), (max((((long long int) (unsigned short)43284)), (((/* implicit */long long int) var_8))))));
}
