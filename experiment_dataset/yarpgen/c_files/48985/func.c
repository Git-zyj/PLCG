/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48985
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
    var_10 ^= ((/* implicit */int) min((max((var_7), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_11 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_2)), (var_1)))))), (max((min((var_7), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
        }
        for (short i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            var_12 = ((/* implicit */unsigned char) min((max((var_4), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */long long int) min(((unsigned char)250), ((unsigned char)34))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                arr_11 [i_0] [i_2] = ((/* implicit */long long int) max((var_6), (var_6)));
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
            }
            var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */int) var_2)))), (((/* implicit */int) var_2))))), (var_3)));
            arr_13 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_1))));
            var_14 -= ((/* implicit */_Bool) (~(max((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_8))))))));
        }
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_17 [i_0] [i_0] [i_0] = max(((+(max((var_7), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */short) var_9)), (var_2))), (((/* implicit */short) var_0))))));
            arr_18 [i_4] [i_0] [i_4] = max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), ((+(var_4))))), (((/* implicit */long long int) (-(((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_6)))))))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_15 = ((/* implicit */short) max((((/* implicit */int) max(((unsigned char)220), (min(((unsigned char)202), (((/* implicit */unsigned char) var_0))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
            var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-120))));
            arr_21 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)21)))))));
            var_17 += ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned long long int) var_9)), (var_7))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_2)))))))));
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 2; i_7 < 17; i_7 += 2) 
                {
                    var_18 |= ((/* implicit */unsigned char) var_3);
                    arr_26 [i_6] [i_5] [i_6] [i_7 - 1] [i_0] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (var_1)))), (max((max((((/* implicit */unsigned long long int) var_1)), (var_7))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))));
                    arr_27 [i_7] [i_6] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_4)), (max((var_7), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) max(((unsigned char)221), ((unsigned char)15)))), (min((var_2), (((/* implicit */short) var_6)))))))));
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_19 += ((/* implicit */unsigned long long int) var_5);
                    arr_31 [i_0] [2ULL] [i_0] = ((/* implicit */short) var_8);
                    var_20 = ((/* implicit */long long int) min(((+((-(var_7))))), ((-(min((((/* implicit */unsigned long long int) var_9)), (var_7)))))));
                }
                arr_32 [i_0] [i_0] = ((/* implicit */signed char) max(((+(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_8)))))), (((/* implicit */int) min((((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned char) var_0))))), (var_8))))));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 1; i_9 < 16; i_9 += 3) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_4)), (max((var_7), (((/* implicit */unsigned long long int) max((var_0), (var_6)))))))))));
                    var_22 = ((/* implicit */signed char) max((min(((+(var_4))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_5))))))), (((/* implicit */long long int) (~(((/* implicit */int) max((var_5), (var_6)))))))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(max((max((-9222137963700297756LL), (-2489883170592450105LL))), (((/* implicit */long long int) var_6)))))))));
                }
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((+((~(((/* implicit */int) var_2))))))));
                arr_36 [i_0] = ((/* implicit */signed char) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */int) var_0)), (var_1)))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_40 [i_0] [i_0] = ((/* implicit */_Bool) min((max(((~(var_1))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_5))))))), (max(((+(((/* implicit */int) (short)-13059)))), (((/* implicit */int) var_8))))));
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_8), (var_8)))), ((~(var_4)))))), (max((max((var_3), (var_3))), (max((var_7), (var_7)))))));
                var_24 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_2))))), (max((var_3), (((/* implicit */unsigned long long int) var_8))))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                arr_44 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                arr_45 [i_0] [i_5] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max(((~(var_1))), (((/* implicit */int) var_2))))), (max((min((var_4), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)248)))))))));
            }
        }
        for (unsigned long long int i_12 = 3; i_12 < 16; i_12 += 1) 
        {
            arr_48 [i_0] [i_0] [i_12] = min((max((min((((/* implicit */unsigned long long int) var_5)), (var_3))), (max((((/* implicit */unsigned long long int) var_8)), (var_3))))), (max((min((((/* implicit */unsigned long long int) var_9)), (var_3))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_8))))))));
            arr_49 [i_0] [i_12 - 1] = ((/* implicit */unsigned short) (~((~(max((var_4), (((/* implicit */long long int) var_6))))))));
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                var_25 = ((/* implicit */signed char) max((max((max((var_3), (((/* implicit */unsigned long long int) var_0)))), ((~(var_3))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_5)), (var_1))))))));
                arr_52 [i_13] [i_12 - 1] [i_12 - 1] [i_13] |= ((/* implicit */unsigned short) var_6);
                var_26 = ((/* implicit */long long int) max(((-(min((var_7), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) var_1))));
            }
        }
    }
    for (unsigned int i_14 = 3; i_14 < 11; i_14 += 2) 
    {
        var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_1)), (var_4))), (((/* implicit */long long int) (~(var_1))))))), (var_3)));
        var_28 *= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) var_2)), (var_3))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), ((~(var_4))))))));
    }
}
