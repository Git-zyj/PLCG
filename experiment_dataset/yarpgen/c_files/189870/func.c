/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189870
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
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) + (3763147255U)));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((2767249684U) - (2767249671U)))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_10 [0LL] [i_0] [i_1] [i_0] [12LL] = ((/* implicit */signed char) max((452449594U), (3627605740U)));
                        arr_11 [i_0] [i_1] [20LL] [i_0] [i_1] [19LL] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_2]);
                        var_13 = (((_Bool)1) || (((/* implicit */_Bool) max(((short)-26597), (((/* implicit */short) (_Bool)1))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_14 = ((/* implicit */short) (((~(3232665804U))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)13003)))));
                        var_15 = ((/* implicit */short) (((_Bool)0) ? (-9180756707250240453LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225)))));
                        var_16 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
        {
            var_17 -= ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)3229)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [(unsigned short)14] [16U] [i_6])))))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((arr_16 [5LL] [(_Bool)1] [i_0] [5LL] [i_6] [(signed char)13]) + (arr_8 [i_0] [i_0] [19U] [19U] [i_6]))) != (((/* implicit */long long int) ((((/* implicit */int) (short)26277)) | (((/* implicit */int) (signed char)-4))))))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 3]))) / (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(short)2] [i_6] [i_6] [5U])) ? (arr_16 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))));
        }
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) arr_23 [i_7])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 571935304U))))))))));
        arr_25 [2LL] [2LL] |= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [10LL])) + (((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-28225)) + (2147483647))) >> (((-9075833667538891637LL) + (9075833667538891647LL)))))) : (((((/* implicit */_Bool) arr_22 [i_7])) ? (arr_21 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7])))))))) / (max((577249316802176573LL), (4227039790196065783LL)))));
    }
    var_21 = ((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) != (((var_7) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (864815171)))));
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)94)));
}
