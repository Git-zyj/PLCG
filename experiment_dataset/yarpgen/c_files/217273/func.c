/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217273
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) max((max((((/* implicit */unsigned char) arr_2 [11LL])), ((unsigned char)197))), (((/* implicit */unsigned char) var_9))))), (2147483636)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            var_13 = (!(((/* implicit */_Bool) (((-(((/* implicit */int) (short)0)))) % ((-(1646380926)))))));
            arr_6 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned int) -2147483637);
            var_14 = ((/* implicit */signed char) ((unsigned short) 11503767769014073832ULL));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_8 [(unsigned char)4] [(unsigned char)4] [i_2]))));
            var_16 |= arr_2 [i_2];
        }
        for (int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            arr_13 [(unsigned char)18] [2LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_9)))) << (((((var_8) - (((/* implicit */unsigned long long int) var_3)))) - (3609993696912839878ULL)))))) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_3)), (var_6))), (((/* implicit */unsigned int) -2147483637))))) : (((var_10) >> (((((unsigned int) -2147483637)) - (2147483618U)))))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 16; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) (~(((int) 11503767769014073833ULL))));
                        var_18 = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
            var_19 = ((/* implicit */_Bool) (unsigned short)38824);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((_Bool) (~(arr_21 [i_0] [(short)10] [i_7])))) ? (min((arr_14 [8ULL]), (((/* implicit */long long int) arr_20 [i_6])))) : (((/* implicit */long long int) var_6))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [(short)19] [i_0] [i_0])), (-1)))) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) var_4))))) : (((arr_22 [i_0] [i_0] [16ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (908425093880782484ULL))))) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 31U)) : (7860450212679451566LL))), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0]))))))))));
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (signed char)-118)), (((short) (_Bool)1))))) - (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_3)) >= (2305884547659641314ULL)))))));
        var_22 = var_3;
    }
    /* vectorizable */
    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
        {
            arr_31 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_11 [4ULL] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8] [i_9 - 2] [i_8 - 2])))))));
            var_23 = ((/* implicit */int) (~(var_0)));
        }
        for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 1) /* same iter space */
        {
            arr_34 [(_Bool)1] [i_8 + 3] [i_8] = ((/* implicit */int) var_8);
            arr_35 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_8 + 4] [i_10 + 3])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_8 + 2])) && (var_9))))));
        }
        var_24 = ((/* implicit */unsigned long long int) var_0);
        var_25 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [6] [i_8] [8ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0)))));
        var_26 = ((((/* implicit */_Bool) arr_32 [i_8 - 3])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_32 [i_8 + 1])));
        arr_36 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_17 [(short)14] [i_8] [i_8 + 2] [i_8 + 2] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178)))));
    }
    for (unsigned short i_11 = 3; i_11 < 9; i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11 + 2] = ((/* implicit */_Bool) arr_27 [i_11] [i_11]);
        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_38 [i_11]))));
        var_28 = ((/* implicit */unsigned int) arr_27 [(_Bool)1] [i_11]);
        arr_41 [i_11] = ((/* implicit */int) (_Bool)1);
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (~(var_6)))) : (((((/* implicit */_Bool) max(((signed char)127), (((/* implicit */signed char) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_7))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_1)))))));
}
