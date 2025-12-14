/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46016
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_6 [7LL] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((long long int) var_4))) ? (max((((/* implicit */long long int) arr_4 [i_1])), (695199893278966922LL))) : (((/* implicit */long long int) ((((arr_5 [7ULL]) + (2147483647))) << (((var_15) - (1757097929404765596LL)))))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_10 [(signed char)7] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))) >= (((/* implicit */long long int) arr_8 [i_2] [i_2] [i_4]))))), (min((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_2] [(unsigned short)4] [i_4 + 1])))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_4 [i_1])))))))));
                        var_19 = ((((/* implicit */_Bool) ((signed char) arr_0 [i_1] [i_2 + 1]))) ? (((((/* implicit */_Bool) 9021989237306432995LL)) ? (-9021989237306432995LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((unsigned int) arr_0 [(_Bool)1] [i_2 - 1]))));
                        var_20 = ((/* implicit */unsigned int) (!((!(arr_12 [i_1] [i_2] [6ULL] [i_3] [i_4] [i_4 - 1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 11; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) ((long long int) -228000398));
                    var_22 = ((/* implicit */unsigned int) arr_16 [i_6] [i_1]);
                    var_23 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((unsigned char) -268435456)))))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 4; i_7 < 10; i_7 += 2) 
                    {
                        arr_22 [i_1] [i_6] [i_1] [i_1] [(unsigned short)7] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_7 - 4])))))));
                        var_24 = ((/* implicit */_Bool) arr_17 [i_1]);
                        var_25 = ((/* implicit */long long int) (~((~(((/* implicit */int) ((unsigned short) arr_10 [i_7] [i_5 + 1])))))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 3; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_26 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) 211896902))))) ? (((/* implicit */int) ((unsigned short) -228000398))) : (((/* implicit */int) arr_4 [i_6]))))) ? (((arr_4 [i_5 - 1]) ? ((-(536346624U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                            var_27 = ((/* implicit */unsigned int) var_16);
                            var_28 = ((/* implicit */unsigned short) max((((/* implicit */int) ((arr_10 [i_7 + 1] [i_7 + 2]) != (arr_10 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_23 [i_6] [i_5 - 3])) ? (arr_23 [i_6] [i_5 - 3]) : (arr_23 [i_6] [i_5 - 3])))));
                        }
                        for (long long int i_9 = 3; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) var_3);
                            arr_27 [(unsigned short)5] [i_5] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) arr_20 [i_6] [i_7] [i_9]))), ((+(((/* implicit */int) min((arr_9 [i_1]), (((/* implicit */unsigned char) arr_12 [(unsigned short)6] [0] [6LL] [i_7 - 1] [i_9] [i_6])))))))));
                            arr_28 [i_6] [8LL] [i_5] [i_5] [i_6] [i_7] [i_9 - 1] = ((/* implicit */int) var_3);
                            var_30 = ((/* implicit */signed char) ((arr_17 [i_5]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [11LL] [(unsigned char)10] [i_6] [i_7 + 1] [i_7 - 1] [i_9] [i_9 - 2])) ? (((/* implicit */int) arr_24 [i_9 - 2] [i_5] [i_5] [7LL] [i_7 + 1] [i_7] [i_5 - 1])) : (arr_18 [i_1] [i_5] [i_7 - 1] [i_6]))))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) arr_4 [i_1])) : (var_8))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))));
                        }
                        for (long long int i_10 = 3; i_10 < 11; i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_10] [i_7] [i_6] [i_6] [i_5] [i_1] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (arr_21 [i_1] [i_5] [i_6] [i_7] [11])))) / (min((arr_11 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_10] [i_7] [i_6])))))) * (((/* implicit */unsigned long long int) ((arr_30 [i_1] [i_7 - 4] [i_10 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_7 - 2] [i_10 - 2] [i_1] [i_5 - 2] [i_6])))))));
                            var_32 += ((/* implicit */long long int) ((max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20261))))), ((-(9021989237306433007LL))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_19 [i_5] [i_7 - 3] [i_10] [i_10])) < (var_15)))))));
                        }
                    }
                }
            } 
        } 
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        arr_35 [i_11 + 1] &= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_11 + 1])) == (((/* implicit */int) arr_2 [i_11 + 1])))))));
        var_33 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_3)))), (arr_34 [i_11 + 1])))) ? (((/* implicit */unsigned int) ((int) -9021989237306433004LL))) : (((((/* implicit */_Bool) max((-1627577220414909545LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)1023))))) : (var_9)))));
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (long long int i_13 = 3; i_13 < 11; i_13 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) ((unsigned short) var_9));
                    arr_41 [i_12] [i_12] [i_12] |= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_13)))), (((arr_40 [i_11] [i_12] [i_13]) >= (((/* implicit */long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_11)) + (6986))))))))));
                    var_35 -= ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (unsigned short)49966)), (9021989237306433020LL)))));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8))))), (max((var_16), (((/* implicit */long long int) var_7))))))))))));
}
