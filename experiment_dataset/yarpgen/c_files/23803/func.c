/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23803
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [7] [i_1] [i_1] = ((/* implicit */short) var_0);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) var_1);
                    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [10LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            {
                arr_17 [i_3] [i_4] [i_3] = ((/* implicit */short) ((unsigned short) var_9));
                var_13 = ((var_8) * (((min((((/* implicit */int) var_7)), (arr_14 [i_3] [i_3] [i_4]))) / (arr_14 [i_3] [i_3] [i_4 + 1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((((var_10) << (((((/* implicit */int) var_9)) - (14960))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (((/* implicit */int) var_9)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) + (var_3)))) || (((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_9)))))))))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned long long int) ((max((((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), ((!(var_1))))) ? (max((max((arr_19 [(short)0]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((arr_22 [i_6] [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (var_6))))) >= (((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_7])) ? (arr_25 [i_6 + 1] [i_7] [i_8]) : (var_2)))))))));
                        arr_31 [i_8] [i_6] [i_6] [(short)10] = ((/* implicit */short) ((((long long int) var_5)) << (((((((/* implicit */int) var_5)) & (((/* implicit */int) arr_5 [i_5] [i_6] [i_6 + 3])))) - (37699)))));
                        arr_32 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [12LL] [i_6 + 2] [i_7] [(short)12])) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_18 [i_7] [i_8])))))))) ? (min((((/* implicit */unsigned int) (+(var_8)))), (((((/* implicit */_Bool) (unsigned char)1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30747))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [17ULL]))))) : (((/* implicit */int) var_1)))))));
                        arr_33 [i_5] [i_6] = ((/* implicit */int) var_7);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((int) ((((/* implicit */long long int) (-(var_8)))) - (var_3))));
        arr_34 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)55567)) + (((/* implicit */int) var_1))));
    }
    var_17 |= ((/* implicit */signed char) ((min((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_3))), (((/* implicit */long long int) (~(var_0)))))) + (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
