/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201607
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 = arr_0 [i_0];
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) 6775751058470551601ULL))), (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)112))))) : (var_13)));
        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_1)))) ? (var_11) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 += ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */signed char) var_2)), (arr_3 [i_2 + 1] [i_1] [i_0])))) ^ (((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2])))) + (((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 2])) ? (((/* implicit */int) arr_4 [i_0] [i_2 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_2 + 2]))))));
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2]))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 2; i_4 < 24; i_4 += 1) 
        {
            arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3])) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 15834263142065432758ULL)) || (((/* implicit */_Bool) (unsigned char)110)))) ? (((((/* implicit */_Bool) (unsigned short)19200)) ? (((/* implicit */int) (unsigned short)19200)) : (((/* implicit */int) (signed char)-1)))) : (max((arr_10 [i_3]), (((/* implicit */int) arr_9 [i_4] [i_3])))))))));
            var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4 - 2]))) : (6472333568950464355ULL)))))));
            var_20 = (-(((((/* implicit */_Bool) arr_13 [i_4] [i_4 + 1])) ? (min((100663296), (((/* implicit */int) (unsigned char)145)))) : (((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 2])))));
        }
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) arr_12 [(short)2] [(short)2]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 24; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 ^= ((/* implicit */_Bool) var_3);
                        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) >= (arr_19 [i_5] [i_6] [i_7])))) < (((/* implicit */int) var_9)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (arr_15 [i_5 + 1]) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned char)4] [i_5 - 2]))) : (min((((/* implicit */unsigned int) var_10)), (4249815278U)))))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_3] [i_5] [i_6] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_6 - 1] [i_5]))))))) ? ((-(((unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (unsigned char)0)))))));
                        var_25 = ((/* implicit */int) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (unsigned short)54699)))))) ^ (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (var_1))))))));
    var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) 6472333568950464355ULL)) ? (9782715046301437802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
}
