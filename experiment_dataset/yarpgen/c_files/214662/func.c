/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214662
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
    var_10 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            var_11 = ((/* implicit */long long int) min((2064064552U), (((/* implicit */unsigned int) min((arr_9 [i_0] [i_1] [i_2 - 1] [i_0] [i_4]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_4 - 3]))))));
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [16U] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2] [i_0] [i_2 + 1])) : (arr_2 [i_2] [i_0] [i_2])))) ? (((/* implicit */unsigned int) (+(arr_2 [i_2] [i_0] [1U])))) : (((var_3) + (2230902744U)))));
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4 - 1] = ((/* implicit */signed char) var_9);
                            arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -376831196)))) > (min((((/* implicit */unsigned int) arr_10 [14U] [i_2 + 1] [i_2 - 1] [i_4 - 1])), (4127238638U)))));
                            var_13 += min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_3] [i_0])), (max((((((/* implicit */_Bool) arr_1 [i_3])) ? (5135478062363486786ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) 3484154925039330897LL)))));
                        }
                        arr_16 [i_3] [i_3] &= ((/* implicit */int) arr_1 [i_3]);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]);
        arr_17 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))));
        arr_18 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [1U])), (926517541U)))) ? (((((/* implicit */_Bool) var_5)) ? (0U) : (arr_6 [i_0] [i_0] [i_0] [i_0]))) : (1381576020U))), (17U)));
    }
    for (int i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        arr_21 [i_5 - 1] [7ULL] = ((/* implicit */int) ((signed char) min((min((((/* implicit */int) (short)-4427)), (var_9))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_2))))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((8190472814171582441LL), (((/* implicit */long long int) (unsigned char)255))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) (signed char)-80))))))))) + (min((arr_3 [i_5] [i_5 - 2]), (arr_3 [i_5] [i_5 - 2])))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_8))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_17 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528)))))));
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 9; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                {
                    var_18 += ((/* implicit */long long int) var_2);
                    arr_30 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */int) var_2)) << (((var_5) - (18237536219406617065ULL))))) : (((((/* implicit */int) arr_23 [i_7 + 2] [i_6])) >> (((((arr_8 [i_6] [(signed char)9] [(signed char)9] [i_8]) ? (var_4) : (((/* implicit */int) (unsigned char)13)))) - (212211018)))))));
                    arr_31 [i_6] [i_6] [i_6] [1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_8)), (min(((~(var_6))), (((/* implicit */long long int) var_3))))));
                    var_19 += ((/* implicit */short) var_9);
                    arr_32 [i_6] = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) -4))));
        var_21 = ((/* implicit */unsigned int) 5992471433022807970LL);
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), ((short)-4427)))) ? (((((/* implicit */_Bool) 3348836253U)) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) var_1))))) : (var_7))) : (((/* implicit */unsigned long long int) min(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_8)))))));
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                {
                    arr_40 [i_9] [11] [i_11] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)219)) != (((((/* implicit */int) arr_8 [20ULL] [i_10] [i_10] [i_11])) & (((/* implicit */int) (_Bool)1)))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((var_9) + (2147483647))) << (((((((/* implicit */_Bool) ((var_8) & (2134126U)))) ? (((((/* implicit */_Bool) arr_11 [i_9])) ? (2230902755U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9]))))) : (((4294967271U) << (((((/* implicit */int) var_2)) - (30))))))) - (2230902755U))))))));
                    var_24 += (+(arr_6 [i_10] [i_10] [8LL] [i_10]));
                    var_25 += ((/* implicit */unsigned int) arr_1 [(unsigned short)16]);
                }
            } 
        } 
    } 
}
