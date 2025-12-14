/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242920
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
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_9 [(unsigned short)3] = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_2]);
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_5] [(short)7] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (arr_13 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [6ULL] [i_1] [i_5] [i_6] [(_Bool)1])))))));
                                var_18 = ((signed char) max((-1952418470482757081LL), (((/* implicit */long long int) (unsigned char)64))));
                                arr_26 [i_0] [i_7] [i_0] [i_6] [(signed char)8] [i_1] = ((/* implicit */long long int) (unsigned short)30546);
                                arr_27 [i_0] [11U] = max((arr_16 [i_0] [i_7] [i_5]), ((((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [14LL] [i_6] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_7])))))) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34995))) : (var_6))))));
                            }
                        } 
                    } 
                    arr_28 [i_0] = ((/* implicit */unsigned short) arr_20 [i_0] [i_1]);
                }
                arr_29 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */signed char) var_14);
                arr_30 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)4286)) ? (161087238) : (((/* implicit */int) (unsigned short)62886)))));
                var_19 = arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1];
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((long long int) (~(8088834267247296870ULL)))))));
    var_21 = ((/* implicit */_Bool) var_2);
    var_22 = ((/* implicit */long long int) (((+(((/* implicit */int) min(((unsigned short)30546), ((unsigned short)30546)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34989)))))));
}
