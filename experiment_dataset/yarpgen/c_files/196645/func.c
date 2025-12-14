/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196645
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((signed char) ((((((/* implicit */int) (signed char)65)) ^ (((/* implicit */int) var_18)))) * (((/* implicit */int) arr_3 [i_1])))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_4 [11LL]))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) var_13)))))) : (((unsigned int) arr_4 [i_1]))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [(short)7] [i_3] [i_3] = ((/* implicit */int) ((((var_12) - (((/* implicit */long long int) arr_9 [i_3])))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */signed char) arr_3 [i_2]))))) ? (max((((/* implicit */int) (signed char)-59)), (var_11))) : (arr_9 [i_2 - 1]))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (_Bool)1))))))) <= (((((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_2]), (((/* implicit */unsigned char) (_Bool)1)))))) * (((((/* implicit */_Bool) var_17)) ? (2005396464808484402LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        }
        arr_14 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (signed char)125)) : (((((/* implicit */int) var_5)) + (var_16))))) <= (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) arr_12 [14LL])) : (((/* implicit */int) arr_11 [(signed char)8]))))))));
        var_23 = ((/* implicit */short) (~(((((/* implicit */int) arr_0 [i_2] [i_2 - 1])) ^ (((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1]))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_4), (((/* implicit */signed char) var_5)))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_10 [i_2 - 1]) : (((/* implicit */long long int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            arr_21 [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            arr_24 [13ULL] [13ULL] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            arr_25 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -4313857297332873064LL)) ? (((/* implicit */int) arr_20 [i_4] [(_Bool)1])) : (((/* implicit */int) arr_20 [(unsigned char)4] [(unsigned char)4]))));
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_4] [(unsigned char)7]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_22 [i_4])));
        arr_26 [i_4] = ((/* implicit */long long int) ((arr_3 [i_4]) ? (((/* implicit */int) arr_23 [i_4] [i_4])) : (((/* implicit */int) var_14))));
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_27 [i_7])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            arr_31 [i_7] [i_7] [i_8 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_27 [i_7]) : (arr_27 [i_7])));
            /* LoopSeq 2 */
            for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
            {
                arr_35 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_4)))));
                var_28 = ((/* implicit */_Bool) arr_28 [i_7]);
            }
            for (signed char i_10 = 2; i_10 < 14; i_10 += 3) 
            {
                var_29 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_18)) * (((/* implicit */int) var_15))))));
                arr_38 [i_7] [i_8] [i_7] = ((/* implicit */short) (+(var_16)));
            }
            arr_39 [i_7] [i_8] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)16)) * (((/* implicit */int) (signed char)53)))));
            var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-1)) : (var_11))) <= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))));
        }
        arr_40 [i_7] = ((/* implicit */signed char) ((max((((/* implicit */long long int) min((arr_34 [i_7] [i_7]), (var_0)))), (((((/* implicit */_Bool) 6085084765152804574ULL)) ? (((/* implicit */long long int) 2147483646)) : (-5613884060357807275LL))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-45)) <= (((/* implicit */int) var_17))))))));
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((long long int) min((var_7), (var_6)))) : (((/* implicit */long long int) ((var_15) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))))));
    var_32 = ((/* implicit */int) var_1);
}
