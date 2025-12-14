/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19814
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
    var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)-6836)) ? (((/* implicit */int) (short)29924)) : (((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */long long int) var_9);
    var_16 = ((/* implicit */unsigned char) ((signed char) (short)13193));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (arr_1 [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) (short)-17885)) ? ((-(5674721864530367300ULL))) : (((/* implicit */unsigned long long int) -1531428611))))));
        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_0)) * (((/* implicit */int) arr_0 [i_0]))))));
        var_18 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((min((((/* implicit */long long int) (_Bool)1)), (-2025026570630558474LL))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) - (5840ULL)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -949388377)) ? (((/* implicit */int) (short)-19769)) : (((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */unsigned char) (~(((long long int) (signed char)12))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (signed char i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_4 + 1]))));
                        var_21 = var_9;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 20; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) arr_16 [i_1] [i_1]);
                    /* LoopSeq 2 */
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-24311))))) | (((12772022209179184307ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37883)))))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_8))))));
                            arr_24 [i_7] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) arr_14 [i_1] [i_1] [i_1] [i_1] [i_7] [i_1]);
                            arr_27 [i_1] [i_5] [i_1] [i_7] [i_1] [i_5] = ((/* implicit */_Bool) 6675726478755483779LL);
                            var_26 = ((unsigned short) (unsigned short)21081);
                        }
                        var_27 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44654))) == (arr_18 [i_1]))) ? ((+(((/* implicit */int) (signed char)81)))) : (((/* implicit */int) arr_5 [i_6 - 1] [i_6 - 1]))));
                    }
                    for (long long int i_10 = 3; i_10 < 19; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(17770737815587977522ULL))))));
                        arr_31 [i_1] [i_5] [i_10] [i_1] [i_10] [i_10] = ((/* implicit */signed char) (_Bool)1);
                    }
                }
            } 
        } 
    }
    var_29 = var_4;
}
