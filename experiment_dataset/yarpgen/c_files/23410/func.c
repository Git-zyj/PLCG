/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23410
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((min((var_11), (((/* implicit */unsigned int) var_6)))) > (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_1) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)37084)))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) min((arr_1 [5ULL]), (((/* implicit */unsigned int) min((((((/* implicit */int) var_2)) << (((var_4) - (7220745697727495815ULL))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0])))))))));
                    arr_10 [4] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_2 [i_0]))))));
                    var_15 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) min((var_3), (((/* implicit */long long int) (unsigned short)37101)))))), ((-(arr_7 [i_0] [i_1 + 1] [i_2])))));
                    var_16 = max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))), (3683744642U));
                    var_17 = ((/* implicit */int) min((var_17), ((~(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)140))))) % (((/* implicit */int) arr_3 [i_0 - 2] [i_1 - 1] [i_2 - 1]))))))));
                }
                for (int i_3 = 2; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_2 [(_Bool)1]))));
                    arr_13 [i_0] [i_0] = (-(min((((/* implicit */unsigned int) arr_7 [i_0] [(unsigned char)3] [i_0])), (((var_6) ? (((/* implicit */unsigned int) var_12)) : (arr_1 [i_3]))))));
                    var_19 += ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1] [(signed char)9] [i_3 - 1])))), ((!(((/* implicit */_Bool) 425843027870961950ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_0)))) || (((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1])))))) : (max((arr_8 [i_0 + 1] [i_3 + 1] [i_3] [i_3]), (((unsigned int) arr_1 [17U]))))));
                }
                for (int i_4 = 2; i_4 < 22; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 0U))))));
                    var_20 -= ((/* implicit */unsigned long long int) (-(((long long int) min((((/* implicit */int) (_Bool)0)), (814254912))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_4] [i_5] [15LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (max((((/* implicit */unsigned int) arr_24 [i_0] [i_1] [i_4 + 1] [i_4] [i_5] [i_6 - 2] [i_6])), (var_9))) : (((((/* implicit */_Bool) 18020901045838589663ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (746872390U)))))) ? (arr_18 [i_0] [i_4] [i_5] [i_0]) : (((max((((/* implicit */unsigned long long int) -814254901)), (arr_14 [i_0] [i_0] [9ULL] [i_5]))) + (((/* implicit */unsigned long long int) arr_22 [i_0 - 2] [i_1] [i_4] [i_4] [i_5] [i_0])))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+(var_3))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned short i_7 = 2; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_35 [i_9] [i_0] [i_8 + 1] [i_8] [i_7 - 1] [i_0] [i_0] = max((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (arr_12 [i_0 - 1] [i_7 - 2] [i_1 + 1] [i_0])))), (min((var_9), (min((((/* implicit */unsigned int) (_Bool)1)), (var_9))))));
                                var_22 ^= ((/* implicit */_Bool) (~((+(4294967295U)))));
                                arr_36 [i_0] [16U] [(signed char)5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)89))));
                            }
                        } 
                    } 
                } 
                var_23 ^= ((/* implicit */unsigned long long int) min((3603982878U), (4294967289U)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (-((~(var_11)))));
}
