/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41050
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [9LL] [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))));
        var_13 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)29))))) + (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -91794533177942335LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (91794533177942334LL))) - (((/* implicit */long long int) ((int) var_4))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((int) (signed char)35)) - (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) >= (17609184837293234649ULL)));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 1013097724U)) != (max((arr_4 [i_1]), (arr_5 [i_1] [i_1]))))) ? (max((arr_5 [i_1 + 2] [i_1]), (arr_5 [i_1 + 2] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521)))));
        var_15 = var_3;
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) ((_Bool) arr_4 [i_2 - 2]));
        /* LoopNest 3 */
        for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 - 2]))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2] [i_3 + 2] [i_2 + 2])) || (((/* implicit */_Bool) arr_9 [i_2] [i_3 + 1] [i_2 - 1]))));
                        arr_16 [(unsigned short)16] [i_3 + 2] [8] [i_3] |= ((/* implicit */int) (((~(var_5))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(_Bool)1] [(short)19] [i_2 - 2] [i_5] [i_5] [i_3 - 1])))));
                    }
                } 
            } 
        } 
    }
    var_18 += ((/* implicit */short) ((unsigned long long int) (signed char)119));
    /* LoopSeq 2 */
    for (short i_6 = 1; i_6 < 20; i_6 += 4) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-17455))));
        var_19 *= ((/* implicit */signed char) (~((-(((int) (unsigned short)6527))))));
        var_20 = ((/* implicit */long long int) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_6 + 3])) < (arr_4 [i_6 - 1])))))));
        var_21 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((int) 91794533177942355LL))) ? (arr_5 [i_6 + 1] [4LL]) : (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_5 [i_6] [14LL]) : (16234067833537588154ULL))))), (((/* implicit */unsigned long long int) max((min((var_6), (arr_18 [i_6]))), (-1))))));
    }
    for (int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)183)), (arr_21 [i_7])))) / (arr_20 [i_7] [i_7])))) ? (max((arr_8 [i_7]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)65535))))))))));
        arr_22 [i_7] [i_7] = ((((/* implicit */_Bool) (+(arr_6 [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_20 [(unsigned short)7] [i_7])))) : (((((/* implicit */_Bool) (unsigned short)581)) ? (arr_6 [i_7] [i_7]) : (((/* implicit */unsigned int) arr_18 [i_7])))));
    }
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)0)), (4152374893U)));
}
