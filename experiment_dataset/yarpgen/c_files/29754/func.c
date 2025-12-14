/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29754
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((((-2129975403173968068LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_9))))) : (max((9568835344655305857ULL), (((/* implicit */unsigned long long int) 1579124383U))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 -= ((((/* implicit */_Bool) (unsigned char)180)) ? (1579124378U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))));
        var_15 = ((/* implicit */long long int) ((unsigned int) 8074761213348047747ULL));
    }
    for (signed char i_1 = 3; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_2 = 1; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1] [i_2] [i_2]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) / (((((/* implicit */_Bool) max((-2565273247810126467LL), (0LL)))) ? (((/* implicit */unsigned int) ((int) var_11))) : (1415353318U)))));
            var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((9006099743113216LL) + (arr_7 [i_2] [i_1] [i_1]))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 2715842887U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) <= (((arr_1 [(unsigned char)4]) >> (((((/* implicit */int) (unsigned char)75)) - (57))))))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1896241572U)) + ((~(9568835344655305857ULL)))));
        }
        for (short i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_1 + 1] [i_3 - 1] [i_1 + 1]), (arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 1])))) || (((/* implicit */_Bool) max((((long long int) (unsigned char)216)), (((/* implicit */long long int) max((((/* implicit */signed char) var_9)), (var_7)))))))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(arr_7 [i_1] [i_1 - 2] [i_1 - 2]))))));
            var_21 = max((((/* implicit */short) var_8)), (((short) ((arr_5 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))));
        }
        for (short i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
        {
            arr_14 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_5 [i_1]) <= (3231117443U)))), (((4243374360U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))))))) ? (((((/* implicit */_Bool) ((arr_5 [i_4 - 1]) & (2879613972U)))) ? (max((((/* implicit */unsigned int) arr_6 [i_1] [i_4])), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (((((/* implicit */_Bool) var_12)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)0])))))))))));
            arr_15 [i_1] [i_4 - 1] = ((/* implicit */unsigned long long int) max((arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (var_3)));
        }
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) ((unsigned long long int) arr_10 [i_1] [9U] [9U])))), (((((/* implicit */_Bool) arr_18 [i_1 + 2] [i_1 + 2] [i_5 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [(unsigned char)8] [i_5 - 2] [i_5])))));
            var_23 *= ((/* implicit */unsigned long long int) arr_10 [i_1] [i_5] [i_5]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_27 [i_7] = ((/* implicit */unsigned short) var_12);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 + 2])) + (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_3 [i_1 - 2])))))));
                            var_25 = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
            } 
        }
        var_26 = ((/* implicit */long long int) max((((arr_10 [i_1 + 2] [i_1] [i_1 - 3]) != (((/* implicit */long long int) arr_1 [i_1 + 2])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1])) : (0LL))))))));
        arr_28 [i_1 + 2] [i_1] = var_4;
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) max((arr_6 [i_1 - 3] [i_1 - 3]), (max((arr_6 [i_1 + 1] [i_1 - 2]), (((/* implicit */int) arr_17 [i_1 - 3]))))));
                    arr_34 [i_9] [i_9] = ((((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2])) + (((/* implicit */int) ((unsigned char) var_12))));
                }
            } 
        } 
    }
    for (signed char i_11 = 3; i_11 < 10; i_11 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) ((unsigned short) ((arr_36 [i_11 + 2]) - (arr_36 [i_11 - 3]))));
        var_29 = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)50791)), (2715842917U)));
        arr_38 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) + (var_5)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) 0U)) != (1345730134120300856LL))))))) : (((((/* implicit */_Bool) 3217875943803215950ULL)) ? (arr_36 [i_11 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_11 + 1] [i_11 - 2] [i_11 - 2])))))));
    }
}
