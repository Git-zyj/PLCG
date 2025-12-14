/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249308
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
    var_19 = ((/* implicit */signed char) (unsigned char)75);
    var_20 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_21 += ((/* implicit */unsigned long long int) var_14);
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) ((_Bool) (unsigned short)11972)))));
            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_1 + 3]))));
            var_24 = ((/* implicit */unsigned char) (unsigned short)24289);
        }
        var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-9)), (arr_2 [i_0] [i_0])))) ? (((var_11) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22113))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22113)))))));
    }
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_26 = max(((unsigned short)11981), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2 - 1]))))));
        var_27 |= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) var_0)), (arr_0 [i_2]))), (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (signed char)113)), (arr_7 [i_2]))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned short i_5 = 3; i_5 < 9; i_5 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7387765750810993319LL)) ? (((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_3])) ? (arr_2 [i_3 + 3] [i_3]) : (((/* implicit */long long int) arr_13 [i_3 + 3] [(signed char)4])))) : (((/* implicit */long long int) ((unsigned int) min((arr_8 [(unsigned char)7]), (((/* implicit */unsigned long long int) var_7))))))));
                        var_30 = arr_5 [(signed char)1] [i_3 + 3] [i_5 - 1];
                        var_31 = ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) (unsigned char)211)))) ? (((/* implicit */int) arr_12 [i_3] [i_4] [i_5 - 1])) : (((/* implicit */int) (signed char)-113))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_32 = ((/* implicit */_Bool) var_14);
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)44)), ((unsigned short)53567))))))) ? (((/* implicit */int) (unsigned short)43425)) : (((/* implicit */int) max(((unsigned short)22110), (((/* implicit */unsigned short) ((signed char) (unsigned short)49317))))))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), ((-(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-249))))), (arr_8 [i_5])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) (unsigned char)160);
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) : (arr_21 [i_3] [i_3] [i_3 + 1] [i_3 + 1])));
                        var_37 += ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) var_18)));
                        var_38 = ((/* implicit */unsigned char) var_13);
                    }
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */_Bool) (unsigned short)55285);
}
