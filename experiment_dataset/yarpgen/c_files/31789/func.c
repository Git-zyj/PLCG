/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31789
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((min((4681669922405750377LL), (((/* implicit */long long int) arr_0 [i_0])))) <= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26634)))))))) ^ (max((((/* implicit */int) (unsigned short)38902)), (var_15)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 |= ((/* implicit */unsigned char) arr_5 [i_0] [14]);
            var_19 *= ((/* implicit */unsigned int) max((((((/* implicit */int) ((17812262332210971885ULL) >= (((/* implicit */unsigned long long int) -4681669922405750376LL))))) << (((((/* implicit */int) (signed char)127)) - (107))))), (((/* implicit */int) (!(((/* implicit */_Bool) -4681669922405750377LL)))))));
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) 18446744073709551615ULL);
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) - (15324943068070888839ULL)));
            arr_7 [(unsigned short)6] [(unsigned short)6] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [(unsigned short)0]))));
        }
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) ((var_12) | (((/* implicit */unsigned long long int) -7LL)))))))))));
    }
    var_22 = ((/* implicit */short) min((((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_6)))) * ((+(((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) & (var_12)))))))));
    var_23 = ((/* implicit */short) (+(min((((/* implicit */long long int) var_3)), (4681669922405750377LL)))));
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_16 [12ULL] [(_Bool)0] [i_3] [i_2] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2] [i_3]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) -135717631513850828LL))));
                        var_25 ^= ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) var_4)))));
                        var_26 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((14358369920859417113ULL) <= (((/* implicit */unsigned long long int) -9195969210982063143LL)))))));
                        var_27 = arr_4 [i_2 + 1] [i_5] [i_3];
                    }
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            arr_23 [(unsigned short)3] [i_6] [i_3] [2LL] [i_3] [i_2 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)52811)))))));
                            var_28 = ((/* implicit */long long int) arr_18 [i_2 + 1] [i_7] [i_6]);
                            var_29 = ((/* implicit */unsigned long long int) (+((+(min((((/* implicit */long long int) 2864340391U)), (-2730183172575506301LL)))))));
                        }
                        for (signed char i_8 = 2; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) ((1014248704U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50545)))));
                            var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (((var_8) / (((/* implicit */long long int) 536870656U))))));
                            arr_28 [i_4] [(signed char)11] = ((/* implicit */long long int) (~(((((((/* implicit */int) (signed char)-69)) + (2147483647))) << (((((((((/* implicit */int) (short)10808)) ^ (((/* implicit */int) (signed char)-1)))) + (10814))) - (5)))))));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 2; i_9 < 14; i_9 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_2 + 1] [(_Bool)1] [i_2 + 1] [i_9])) != (-959577271))))) - ((~(var_12)))));
                            arr_31 [(signed char)5] [i_2 + 1] [2LL] [i_6] [(signed char)5] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_3)) / (((/* implicit */int) var_3))))));
                            var_33 += ((/* implicit */unsigned short) -959577271);
                            var_34 |= ((/* implicit */int) ((((-9195969210982063130LL) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_4] [i_2] [i_9]))))) / (((/* implicit */long long int) ((959577270) / (((/* implicit */int) arr_14 [i_6] [i_6] [(short)4])))))));
                            arr_32 [i_2] [i_3] [i_4] [i_3] [i_9] |= ((/* implicit */unsigned char) (_Bool)1);
                        }
                        arr_33 [i_3] [i_3] [i_4] [(signed char)14] = ((/* implicit */unsigned short) var_7);
                    }
                    arr_34 [i_2] [i_3] [(short)9] [i_3] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (_Bool)1)), (-7175793968173037914LL))), (((/* implicit */long long int) ((unsigned char) ((signed char) arr_14 [i_3] [i_3] [i_3]))))));
                    var_35 |= ((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (signed char)14)))))) & (((((/* implicit */int) var_6)) >> (((int) (unsigned char)3)))));
                    var_36 *= ((/* implicit */short) max((max((max((var_8), (((/* implicit */long long int) arr_24 [i_2 - 1] [i_2] [13] [i_3] [(short)1] [i_2 - 1] [i_4])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_2 - 1] [(unsigned short)13])) || (((/* implicit */_Bool) (unsigned char)108))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((16840246049407431783ULL), (((/* implicit */unsigned long long int) var_7))))) || (((/* implicit */_Bool) arr_26 [(_Bool)0] [3] [(_Bool)0])))))));
                }
            } 
        } 
    } 
}
